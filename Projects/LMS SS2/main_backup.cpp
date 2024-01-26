#include "iostream"
#include "fstream"
#include "cstring"
#include "cstdlib"

using namespace std;

/*	Global Variables Decleration Start  */

const int boxWidth = (8 * 12) + 1;
const int boxTabSpaces = boxWidth/8;
const int MAX_SIZE = 100;
const int studentLimt = 1;
const int emplLimit = 2;
const int userIssueBookLimit = 3;
const int passwordLength = 8;
const int totalPasswordAttempts = 3;
const char systemPass[passwordLength] = "groupA";
int totalNoBooks = 0;
int totalNoUsers = 0;
int totalNoIssBooks = 0;
char message[100] = " ";

/*	Global Variables Decleration End  */

/*	-----------------------------------------------------------------------------------  */

/*	structs Decleration Start  */

struct Date {
	int date,month,year;
};

struct Book {
	char bName[MAX_SIZE],bISBN[MAX_SIZE],bPublisher[MAX_SIZE],bAuthor[MAX_SIZE];
	int noOfCopies;
	Date dateOfIssue;
};

struct User {
	int userId;
    char fName[MAX_SIZE],lName[MAX_SIZE],cat[MAX_SIZE];
    Date DOB;
};

struct issuedBook {
	char bISBN[MAX_SIZE];
	int userId;
	Date issueDate,lastDate;
};

/*	-----------------------------------------------------------------------------------  */

/*	structs Decleration End  */

/*	-----------------------------------------------------------------------------------  */

/*	Functions Decleration Start  */

// UI Functions
void drawHeader();
bool mainMenu();
void counter();

//Add Book

bool addNewBook(Book&); // Option[0][0]
bool flushBook(Book); // Option[0][1]
bool containSpace (char[]); // Option[0][2]
bool uniqueISBN (char[]); // Option[0][3]

// Edit Book

void editBook(); // Option[1][0]
void updateBook(Book&,char[]); // Option[1][1]

// Delete Book

void deleteBook(); // Option[2][0]
void updateDeletedBook(char[]); // Option[2][1]
bool isIssued(char[]); // Option[2][2]

// Search Book

void searchBook(bool invoke = false, Book* __id = NULL); // Option[3][0]
void findBooks(int,bool invoke = false, Book* __id = NULL); // Option[3][1]
void drawBooks(Book[],int,bool invoke = false, Book* __id = NULL); // Option[3][2]
void fetchLineBooks(ifstream&, Book&); // Option[3][3]

// Add User

bool newUser(); // Option[4][0]
bool flushUser(User&); // Option[4][1]
int uniqueId(); // Option[4][2]

// Edit User

void editUser(); // Option[5][0]
void updateUser(User&); // Option[5][1]

// Delete User

void deleteUser(); // Option[6][0]
void updateDeletedUser(int); // Option[6][1]
bool hasBook(int); // Option[6][2]

// Search User

void searchUser(bool invoke = false, User* __id = NULL); // Option[7][0]
void findUsers(int,bool invoke = false, User* __id = NULL); // Option[7][1]
void fetchLineUsers(ifstream&, User&); // Option[7][2]
void drawUsers(User[],int,bool invoke = false, User* __id = NULL); // Option[7][3]

// Issue Book

void issueBook(); // Option[8][0]
void addIssueedBook(Book&,User&); // Option[8][1]
int countIssuedToUser(int);
int countBookIssues(char[]);

// Delete Issue Book 

void deleteIssueBook(); // Option[9][0]
void fetchIssuedBooks(int,issuedBook[],int&); // Option[9][1]
void deletedIssueBook(issuedBook&); // Option[9][2]

// Common Functions

void drawScreen(char[]);
bool validateDate(Date);

/*	Functions Decleration End  */

/*	-----------------------------------------------------------------------------------  */

/*	Inline Functions Start  */

inline void emptyLine() {
    cout << "\t|";
    for (int i = 1; i < boxTabSpaces; ++i) cout << '\t';
    cout << "\t|" << endl;
}

/* 	 Inline Function End 	*/

/*	-----------------------------------------------------------------------------------  */

/* 	 Main Function Start 	*/

int main() {

	bool callMenu = true;

    while (callMenu)
    {
    	callMenu = mainMenu();
    }

}

/* 	 Main Function End 	*/

/*	-----------------------------------------------------------------------------------  */



/* 	 UI Functions Start 	*/

void drawHeader(){
	system("cls");
	cout << endl << endl;

	// Drawing Top Line
	cout << '\t';
	for (int i = 0; i < boxWidth; ++i) cout << '-';
	cout << endl;

	// Internal Structure
	emptyLine();

	emptyLine();

	int linePadding = (boxWidth - 30) / 2;
	cout << "\t|";
	for (int i = 0; i < linePadding; ++i) cout << ' ';
	cout << "UOS - Library Managment System";
	for (int i = 0; i < linePadding - 1; ++i) cout << ' ';
	cout << '|' << endl;

	emptyLine();

	linePadding = (boxWidth - 20) / 2;
	cout << "\t|";
	for (int i = 0; i < linePadding; ++i) cout << ' ';
	cout << "MSC IT - Group A    ";
	for (int i = 0; i < linePadding - 1; ++i) cout << ' ';
	cout << '|' << endl;

	emptyLine();


	// Drawing Bottom Line
	cout << "\t|";
	for (int i = 2; i < boxWidth; ++i) cout << '-';
	cout << '|' << endl;

}


// Main Menu

bool mainMenu() {

	/*
		Menu Drawing Start
	*/

	drawHeader();

	emptyLine();

	counter();

	if ( strcmp(message," ") != 0 ) {

		emptyLine();

		cout << "\t|";
		cout << message;
		for (int i = 0; i < boxTabSpaces - 6; ++i) cout << "\t";
		cout << '|' << endl;

		emptyLine();

		strcpy(message," ");

	}

	cout << "\t|";
	cout << "   Press option key to activate the required function.";
	for (int i = 0; i < boxTabSpaces - 6; ++i) cout << "\t";
	cout << '|' << endl;

	emptyLine();

	cout << "\t|";
	cout << '\t' << "(0) Add New Book (Total # of Books = " << totalNoBooks << " )";
	for (int i = 0; i < boxTabSpaces - 6; ++i) cout << "\t";
	cout << '|' << endl;

	cout << "\t|";
	cout << '\t' << "(1) Edit Book";
	for (int i = 0; i < boxTabSpaces - 2; ++i) cout << "\t";
	cout << '|' << endl;

	cout << "\t|";
	cout << '\t' << "(2) Delete Book";
	for (int i = 0; i < boxTabSpaces - 2; ++i) cout << "\t";
	cout << '|' << endl;

	cout << "\t|";
	cout << '\t' << "(3) Search Book";
	for (int i = 0; i < boxTabSpaces - 2; ++i) cout << "\t";
	cout << '|' << endl;

	cout << "\t|";
	cout << '\t' << "(4) Add Library User (Total # of Users = " << totalNoUsers << " ) ";
	for (int i = 0; i < boxTabSpaces - 6; ++i) cout << "\t";
	cout << '|' << endl;

	cout << "\t|";
	cout << '\t' << "(5) Edit Library User";
	for (int i = 0; i < boxTabSpaces - 3; ++i) cout << "\t";
	cout << '|' << endl;

	cout << "\t|";
	cout << '\t' << "(6) Delete Library User";
	for (int i = 0; i < boxTabSpaces - 3; ++i) cout << "\t";
	cout << '|' << endl;

	cout << "\t|";
	cout << '\t' << "(7) Search Library User";
	for (int i = 0; i < boxTabSpaces - 3; ++i) cout << "\t";
	cout << '|' << endl;

	cout << "\t|";
	cout << '\t' << "(8) Issue Book (Total # of Issued Books = " << totalNoIssBooks << " ) ";
	for (int i = 0; i < boxTabSpaces - 6; ++i) cout << "\t";
	cout << '|' << endl;

	cout << "\t|";
	cout << '\t' << "(9) Delete Issued Book";
	for (int i = 0; i < boxTabSpaces - 3; ++i) cout << "\t";
	cout << '|' << endl;

	emptyLine();

	emptyLine();

	emptyLine();

	cout << "\t|";
	cout << "   -1 to exit!";
	for (int i = 0; i < boxTabSpaces - 1; ++i) cout << "\t";
	cout << '|' << endl;

	emptyLine();

	cout << "\t|";
	cout << "   >";

	/*
		Menu Drawing Ended
	*/

	int choice;

	if( cin >> choice ) {

		if( choice == 0 ) {

			Book newBook;
			if ( addNewBook(newBook) ) {

				if (flushBook(newBook)) {
					char str[] = "The book information was not duplicate and the new book information is   successfully added in the system";
    				drawScreen(str); 
				}
			
			}

			else {

					char str[] = "The book information was not Added To The System";
    				drawScreen(str); 
			}

		}

		else if( choice == 1 ) {

			editBook();

		}

		else if( choice == 2 ) {

			deleteBook();

		}


		else if( choice == 3 ) {

			searchBook();

		}

		else if( choice == 4 ) {

			if (newUser()) {
					char str[] = "The new User information is successfully added in the system";
    				drawScreen(str); 
			}

		}

		else if( choice == 5 ) {

			editUser();

		}

		else if( choice == 6 ) {

			deleteUser();

		}

		else if( choice == 7 ) {

			searchUser();

		}

		else if( choice == 8 ) {

			issueBook();

		}
		else if( choice == 9 ) {

			deleteIssueBook();

		}

		else if ( choice == -1 ) {

			char str[] = "Thanks For Using !!";
			drawScreen(str);

			return false;

		}

		else {

			strcpy(message," Wrong Choice Entered !! Try Again !! ");

		}
	}
	else {
		strcpy(message," Please Enter Valid Integer ");
		cin.clear();
		cin.ignore();
	}

	emptyLine();

	emptyLine();

	cout << "\t";
	for (int i = 0; i < boxWidth; ++i) cout << '-';
	cout << endl;

	return true;

}

void counter() {

	ifstream bookFile("books.txt");
	int c = 0;
	while(bookFile) {
		++c;
		bookFile.ignore(1000,'\n');
	}
	totalNoBooks = c - 2;

	bookFile.close();

	ifstream userFile("users.txt");

	c = 0;
	while(userFile) {
		++c;
		userFile.ignore(1000,'\n');
	}
	totalNoUsers = c - 2;

	userFile.close();

	bookFile.open("issuebooks.txt");

	c = 0;
	while(bookFile) {
		++c;
		bookFile.ignore(1000,'\n');
	}
	totalNoIssBooks = c - 2;

	bookFile.close();
}

/* 	 UI Functions End 	*/

/*	-----------------------------------------------------------------------------------  */

/* 	 Add Book Start Option[0]	*/

// Add New Book Option[0][0]

bool addNewBook(Book &newBook) {

	drawHeader();

	emptyLine();

	cout << "\t|";
	cout << " Add New Book (Please add required information in the appropriate fields)";
	for (int i = 0; i < boxTabSpaces - 9; ++i) cout << "\t";
	cout << '|' << endl;

	emptyLine();

	cout << "\t|";
	for (int i = 2; i < boxWidth; ++i) cout << '-';
	cout << "|" << endl;

	emptyLine();

	emptyLine();

	cout << "\t|";
	cout << '\t' << "Book Name: ";


	cin.ignore();
	cin.getline(newBook.bName,MAX_SIZE);



	cout << "\t|";
	cout << '\t' << "Book ISBN Number: ";


	cin.getline(newBook.bISBN,MAX_SIZE);

	bool isSpace = containSpace(newBook.bISBN);
	bool unique = false;

	while ( isSpace || !unique ) {

		if ( isSpace )
		{
			cout << "\t|";
			cout << '\t' << "[ Warning ] ISBN is Contaning Space So It's Not Valid : ";
			cin.getline(newBook.bISBN,MAX_SIZE);
			isSpace = containSpace(newBook.bISBN);
		}

		if ( isSpace ) continue;

		unique = uniqueISBN(newBook.bISBN);
		if (!unique) {
			cout << "\t|";
			cout << '\t' << "[ Warning ] ISBN is Already Been Entered : ";
			cin.getline(newBook.bISBN,MAX_SIZE);
			isSpace = containSpace(newBook.bISBN);
		}
	}

	cout << "\t|";
	cout << '\t' << "Publisher Name: ";
	cin.getline(newBook.bPublisher,MAX_SIZE);

	cout << "\t|";
	cout << '\t' << "Author Name: ";
	cin.getline(newBook.bAuthor,MAX_SIZE);

	cout << "\t|";
	cout << '\t' << "Number of Copies: ";
	cin >> newBook.noOfCopies;

	while (newBook.noOfCopies <= 0) {
		cout << "\t| ";
		if ( newBook.noOfCopies < 0)  cout << '\t' << "[ Warning : Book Copies Can't be Negative ] Enter Copies : ";
		else cout << '\t' << "[ Warning : Book Copies Can't be Zero ] Enter Copies : ";
		cin >> newBook.noOfCopies;
	}

	cout << "\t|";
	cout << '\t' << "Date of Issue ( DD MM YYYY ): ";
	cin >> newBook.dateOfIssue.date >> newBook.dateOfIssue.month 
	>> newBook.dateOfIssue.year;

	while( !validateDate(newBook.dateOfIssue) || newBook.dateOfIssue.year == 2021) {

		cout << "\t|";
		if (newBook.dateOfIssue.year == 2021) {
			cout << '\t' << "[ Warning : Year Can Not Be 2021 ] Enter Date of Issue ( DD MM YYYY ) ";
		}
		else
			cout << '\t' << "[ Warning : Invalid Date ] Enter Date of Issue ( DD MM YYYY ) ";
		cin >> newBook.dateOfIssue.date >> newBook.dateOfIssue.month 
		>> newBook.dateOfIssue.year;
	}

	emptyLine();

	emptyLine();

	
	char choice;
	cout << "\t|";
	cout << " Do you want to add book information (Y/N)";
	cin >> choice;

	while ( choice != 'Y' && choice != 'y' &&  choice != 'n' && choice != 'N' ) {

		cout << "\t|";
		cout << " [ Warning : Enter Valid Choice ] Do you want to add book information (Y/N)";
		cin >> choice;

	}

	if ( choice == 'Y' || choice == 'y' ) return true;
	else return false;

}

// flushBook Option[0][1]

bool flushBook(Book book) {

	ofstream booksFile;
	booksFile.open("books.txt",ios::app);

	booksFile << book.bISBN << ' '
	<< book.bName << '-' << book.bAuthor << '-'
	<< book.bPublisher << '-' << book.noOfCopies << ' ' 
	<< book.dateOfIssue.year << ' ' << book.dateOfIssue.month << ' '
	<< book.dateOfIssue.date
	<< endl;

	booksFile.close();

	return true;

}

// Contain Space Option[0][2]

bool containSpace (char string[]) {
	
	bool isSpace = false;

	for (int i = 0; i < string[i] != '\0' ; ++i) {
	
		if(string[i] == ' ') {
	
			isSpace = true;
			break;
		
		}
	
	}

	return isSpace;
}

// Unique ISBN Option[0][3]

bool uniqueISBN (char isbn[]) {
	
	char crIsbn[MAX_SIZE];

	ifstream booksFile("books.txt");

	booksFile.getline(crIsbn,100,' ');
	booksFile.ignore(500,'\n');

	if ( strcmp( crIsbn , isbn ) == 0) {

		booksFile.close();
		return false;

	}
	
	while( booksFile ) {
	
		booksFile.getline(crIsbn,100,' ');
		booksFile.ignore(500,'\n');
	
		if ( strcmp( crIsbn , isbn ) == 0) {

			booksFile.close();
			return false;

		}
	
	}
	
	return true;
}

/* 	 Add Book Function End 	*/

/*	-----------------------------------------------------------------------------------  */



/* 	 Edit Book Start Option[1]	*/

// Option[1][0]

void editBook() {

	drawHeader();

	emptyLine();
	emptyLine();

	Book __book;

	cout << "\t|";
	cout << " We Are Redirecting You To Search The Book You Want To Edit " << endl;
	
	emptyLine();

	cout << "\t| ";
	system("pause");

	searchBook(true,&__book);

	if (strcmp(__book.bISBN,"-1") == 0) return;

	if ( isIssued(__book.bISBN) ) {

		char str[] = "The Book Is Issued To Someone So It Can Not Be Edited.";
		drawScreen(str);

		return;
		
	}

	emptyLine();
	emptyLine();

	drawHeader();

	emptyLine();
	emptyLine();

	cout << "\t| ";
	cout << "Book ISBN : " << __book.bISBN <<endl;
	cout << "\t| ";
	cout << "Book Name : " << __book.bName <<endl;
	cout << "\t| ";
	cout << "Book Author : " << __book.bAuthor <<endl;
	cout << "\t| ";
	cout << "Book Publisher : " << __book.bPublisher <<endl;
	cout << "\t| ";
	cout << "Book No Of Copies : " << __book.noOfCopies <<endl;
	cout << "\t| ";
	cout << "Book Issue Date : " << __book.dateOfIssue.date << '/' 
	<< __book.dateOfIssue.month << '/' << __book.dateOfIssue.year  << endl;

	emptyLine();
	emptyLine();

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

	cout << "\t|";
	cout << " Enter Updated Info " << endl;

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

	char inputISBN[MAX_SIZE];
	char oldISBN[MAX_SIZE];

	strcpy(oldISBN,__book.bISBN);

	cout << "\t| ";
	cout << "Book ISBN : ";
	cin.ignore();
	cin.getline(inputISBN,100,'\n');

	if ( strcmp(inputISBN,__book.bISBN) == 0) {
		strcpy(__book.bISBN,inputISBN);
	}
	else {
		bool isSpace = containSpace(inputISBN);
		bool unique = false;
		while ( isSpace || !unique ) {

			if ( isSpace )
			{
				cout << "\t|";
				cout << "[ Warning ] ISBN is Contaning Space So It's Not Valid : ";
				cin.getline(inputISBN,MAX_SIZE);
				isSpace = containSpace(inputISBN);
			}

			if ( isSpace ) continue;

			unique = (strcmp(inputISBN,__book.bISBN) == 0) || uniqueISBN(inputISBN);
			if (!unique) {
				cout << "\t|";
				cout << "[ Warning ] ISBN is Already Been Entered : ";
				cin.getline(inputISBN,MAX_SIZE);
				isSpace = containSpace(inputISBN);
			}
		}
		strcpy(__book.bISBN,inputISBN);
	}
	cout << "\t| ";
	cout << "Book Name : "; 
	cin.getline(__book.bName,MAX_SIZE,'\n');;
	cout << "\t| ";
	cout << "Book Author : ";
	cin.getline(__book.bAuthor,MAX_SIZE,'\n');
	cout << "\t| ";
	cout << "Book Publisher : ";
	cin.getline(__book.bPublisher,MAX_SIZE,'\n');
	cout << "\t| ";
	cout << "Book Copies : ";
	cin >> __book.noOfCopies;
	while (__book.noOfCopies <= 0) {
		cout << "\t| ";
		if ( __book.noOfCopies < 0)  cout << "[ Warning : Book Copies Can't be Negative ] Enter Copies : ";
		else cout << "[ Warning : Book Copies Can't be Zero ] Enter Copies : ";
		cin >> __book.noOfCopies;
	}
	cout << "\t| ";
	cout << "Book Issue Date ( DD MM YYYY ) : ";
	cin >> __book.dateOfIssue.date >> __book.dateOfIssue.month >> __book.dateOfIssue.year;

	while( !validateDate(__book.dateOfIssue) ) {
		cout << "\t|";
		cout << '\t' << "[ Warning : Invalid Date ] Enter Date of Issue ( DD MM YYYY ) : ";
		cin >> __book.dateOfIssue.date >> __book.dateOfIssue.month 
		>> __book.dateOfIssue.year;
	}

	emptyLine();
	emptyLine();

	char choice;
	cout << "\t|";
	cout << " Do you want to update the book (Y/N)";
	cin >> choice;

	while ( choice != 'Y' && choice != 'y' &&  choice != 'n' && choice != 'N' ) {

		cout << "\t|";
		cout << " [ Warning : Enter Valid Choice ] Do you want to add book information (Y/N)";
		cin >> choice;

	}

	if ( choice == 'y' || choice == 'Y' ) updateBook(__book,oldISBN);
	else {
		char str[] = "The Book Edit Was Cancelled";
		drawScreen(str);
	}
}

// Add Issued Book Option[1][1]

void updateBook(Book& __book, char oldISBN[]) {

	ifstream booksFile("books.txt");

	ofstream tempFile;
	tempFile.open("temp.txt",ios::app);

	tempFile << __book.bISBN << ' '
	<< __book.bName << '-' << __book.bAuthor << '-'
	<< __book.bPublisher << '-' << __book.noOfCopies << ' ' 
	<< __book.dateOfIssue.year << ' ' << __book.dateOfIssue.month << ' '
	<< __book.dateOfIssue.date
	<< endl;

	Book temp;

	fetchLineBooks(booksFile,temp);

	if ( strcmp(oldISBN,temp.bISBN) != 0) {
		tempFile << temp.bISBN << ' '
		<< temp.bName << '-' << temp.bAuthor << '-'
		<< temp.bPublisher << '-' << temp.noOfCopies << ' ' 
		<< temp.dateOfIssue.year << ' ' << temp.dateOfIssue.month << ' '
		<< temp.dateOfIssue.date
		<< endl;
	}

	fetchLineBooks(booksFile,temp);
	while ( booksFile ) {

		if ( strcmp(oldISBN,temp.bISBN) != 0) {
			tempFile << temp.bISBN << ' '
			<< temp.bName << '-' << temp.bAuthor << '-'
			<< temp.bPublisher << '-' << temp.noOfCopies << ' ' 
			<< temp.dateOfIssue.year << ' ' << temp.dateOfIssue.month << ' '
			<< temp.dateOfIssue.date
			<< endl;
		}
		fetchLineBooks(booksFile,temp);
	}

	booksFile.close();
	tempFile.close();

	remove("books.txt");

	rename("temp.txt","books.txt");

	char str[] = "The Book Has Been Updated Successfully ";
	drawScreen(str);

}

/* 	 Edit Book End 	*/

/*	-----------------------------------------------------------------------------------  */


/* 	 Delete Book Start Option[2]	*/

//Delete Book Option[2][0]

void deleteBook() {

	drawHeader();

	emptyLine();
	emptyLine();

	Book __book;

	cout << "\t|";
	cout << " We Are Redirecting You To Search The Book You Want To Delete " << endl;
	
	emptyLine();

	cout << "\t| ";
	system("pause");

	searchBook(true,&__book);

	if (strcmp(__book.bISBN,"-1") == 0) return;

	if ( isIssued(__book.bISBN) ) {

		char str[] = "Tne Book Is Issued To Someone So It Can Not Be Deleted.";
		drawScreen(str);

		return;
		
	}

	emptyLine();
	emptyLine();

	drawHeader();

	emptyLine();
	emptyLine();

	cout << "\t| ";
	cout << "Book ISBN : " << __book.bISBN <<endl;
	cout << "\t| ";
	cout << "Book Name : " << __book.bName <<endl;
	cout << "\t| ";
	cout << "Book Author : " << __book.bAuthor <<endl;
	cout << "\t| ";
	cout << "Book Publisher : " << __book.bPublisher <<endl;
	cout << "\t| ";
	cout << "Book No Of Copies : " << __book.noOfCopies <<endl;
	cout << "\t| ";
	cout << "Book Issue Date : " << __book.dateOfIssue.date << '/' 
	<< __book.dateOfIssue.month << '/' << __book.dateOfIssue.year  << endl;

	emptyLine();
	emptyLine();

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

	cout << "\t|";
	cout << " Delete Book " << endl;

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

	emptyLine();
	emptyLine();

	char choice;
	cout << "\t|";
	cout << " Do you want to delete the book (Y/N)";
	cin >> choice;

	while ( choice != 'Y' && choice != 'y' &&  choice != 'n' && choice != 'N' ) {

		cout << "\t|";
		cout << " [ Warning : Enter Valid Choice ] Do you want to add book information (Y/N)";
		cin >> choice;

	}

	if ( choice == 'y' || choice == 'Y' ) updateDeletedBook(__book.bISBN);
	else {
		char str[] = "The Book Edit Was Cancelled";
		drawScreen(str);
	}
}

// Update Deleted book Option[2][1]

void updateDeletedBook(char bookISBN[]) {

	ifstream booksFile("books.txt");

	ofstream tempFile;
	tempFile.open("temp.txt",ios::app);

	Book temp;

	fetchLineBooks(booksFile,temp);

	if ( strcmp(bookISBN,temp.bISBN) != 0) {
		tempFile << temp.bISBN << ' '
		<< temp.bName << '-' << temp.bAuthor << '-'
		<< temp.bPublisher << '-' << temp.noOfCopies << ' ' 
		<< temp.dateOfIssue.year << ' ' << temp.dateOfIssue.month << ' '
		<< temp.dateOfIssue.date
		<< endl;
	}

	fetchLineBooks(booksFile,temp);
	while ( booksFile ) {

		if ( strcmp(bookISBN,temp.bISBN) != 0) {
			tempFile << temp.bISBN << ' '
			<< temp.bName << '-' << temp.bAuthor << '-'
			<< temp.bPublisher << '-' << temp.noOfCopies << ' ' 
			<< temp.dateOfIssue.year << ' ' << temp.dateOfIssue.month << ' '
			<< temp.dateOfIssue.date
			<< endl;
		}
		fetchLineBooks(booksFile,temp);
	}

	booksFile.close();
	tempFile.close();

	remove("books.txt");

	rename("temp.txt","books.txt");

	char str[] = "The Book Has Been Deleted Successfully ";
	drawScreen(str);

}

bool isIssued(char bookISBN[]) {

	ifstream issueFile("issuebooks.txt");

	char curISBN[MAX_SIZE];

	issueFile >> curISBN;

	issueFile.ignore(600,'\n');

	if ( strcmp(curISBN,bookISBN) == 0) return true;

	issueFile >> curISBN;

	issueFile.ignore(600,'\n');

	while ( issueFile ) {

		if ( strcmp(curISBN,bookISBN) == 0) return true;

		issueFile >> curISBN;

		issueFile.ignore(600,'\n');

	}
	return false;
}

/* 	 Delete Book End 	*/

/*	-----------------------------------------------------------------------------------  */



/* 	 Search Book Start Option[3]	*/

// Search Book Option[3][0]

void searchBook(bool invoke, Book* __id) {

    drawHeader();

    emptyLine();

    cout << "\t|";
    cout << " Search Book ";
    for (int i = 0; i < boxTabSpaces - 1; ++i) cout << "\t";
    cout << '|' << endl;

    cout << "\t|";
    cout << " Press option key to activate the required function.";
    for (int i = 0; i < boxTabSpaces - 6; ++i) cout << "\t";
    cout << '|' << endl;

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

    emptyLine();

    emptyLine();

    cout << "\t|";
    cout << '\t' << "(0) Search through ISBN Number ";


    cout<<endl;


    cout << "\t|";
    cout << '\t' << "(1) Search through Author Name ";


    cout<<endl;

    cout << "\t|";
    cout << '\t' << "(2) Search through Book Name ";
    cout << endl;


    cout << "\t|";
    cout << '\t' << "(3) Search through Publisher Name ";
    cout << endl;


    cout << "\t|";
    cout << '\t' << "(4) Search through Issue Year ";
    cout << endl;

    emptyLine();

    emptyLine();

    
    int choice;
    cout << "\t|";
    cout << " >";
    cin >> choice;

    findBooks(choice,invoke,__id);

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

}

// Find Books Option[3][1]

void findBooks(int choice,bool invoke, Book* __id) { //findBooks function start
    char searchText[MAX_SIZE];
    int searchYear;
    char disStr[20];

    if (choice == 0) strcpy(disStr,"ISBN");
    else if (choice == 1) strcpy(disStr,"Author Name");
    else if (choice == 2) strcpy(disStr,"Book Name");
    else if (choice == 3) strcpy(disStr,"Publisher Name");
    else if (choice == 4) strcpy(disStr,"Year");

    drawHeader();

    emptyLine();

    cout << "\t|";
    cout << " Search Book By " << disStr;
    for (int i = 0; i < boxTabSpaces - 2; ++i) cout << "\t";
    cout << endl;

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

    emptyLine();

    cout << "\t|\t";
    cout << " Enter " << disStr << " : ";
    if ( choice != 4 ) {
        cin.ignore();
        cin.getline( searchText, 100 , '\n');
    }
    else cin >> searchYear;

    emptyLine();

    emptyLine();

    emptyLine();

    Book foundBooks[MAX_SIZE];
    int index = 0;
    Book temp;

    if ( choice == 0 ) { //isbn choice start

        ifstream booksFile("books.txt");

        fetchLineBooks(booksFile,temp);

        if (strcmp(temp.bISBN,searchText) == 0) {
            foundBooks[index] = temp;
            ++index;
        }
        else {

            while( booksFile ) {
                
                fetchLineBooks(booksFile,temp);
                
                if (strcmp(temp.bISBN,searchText) == 0) {
                    foundBooks[index] = temp;
                    ++index;
                    break;
                }
            }
        }

        booksFile.close();
    } //isbn choice end

    else if (choice == 1) {// author name choice start

        ifstream booksFile("books.txt");

        fetchLineBooks(booksFile,temp);
        if (strcmp(temp.bAuthor,searchText) == 0) {
            foundBooks[index] = temp;
            ++index;
        }

        while( booksFile ) {
            
            fetchLineBooks(booksFile,temp);
            if (strcmp(temp.bAuthor,searchText) == 0) {
                foundBooks[index] = temp;
                ++index;
            }
        }

        booksFile.close();

    } // author name choice end;

    else if (choice == 2) {// book name choice start

        ifstream booksFile("books.txt");

        fetchLineBooks(booksFile,temp);
        if (strcmp(temp.bName,searchText) == 0) {
            foundBooks[index] = temp;
            ++index;
        }

        while( booksFile ) {
            
            fetchLineBooks(booksFile,temp);
            if (strcmp(temp.bName,searchText) == 0) {
                foundBooks[index] = temp;
                ++index;
            }
        }

        booksFile.close();

    } // book name choice end;

    else if (choice == 3) {// publisher name choice start

        ifstream booksFile("books.txt");

        fetchLineBooks(booksFile,temp);
        if (strcmp(temp.bPublisher,searchText) == 0) {
            foundBooks[index] = temp;
            ++index;
        }

        while( booksFile ) {
            
            fetchLineBooks(booksFile,temp);
            if (strcmp(temp.bPublisher,searchText) == 0) {
                foundBooks[index] = temp;
                ++index;
            }
        }

        booksFile.close();

    } // publisher name choice end;


    else if (choice == 4) {// publisher name choice start

        ifstream booksFile("books.txt");

        fetchLineBooks(booksFile,temp);
        if ( temp.dateOfIssue.year == searchYear ) {
            foundBooks[index] = temp;
            ++index;
        }

        while( booksFile ) {
            
            fetchLineBooks(booksFile,temp);
            if ( temp.dateOfIssue.year == searchYear ) {
                foundBooks[index] = temp;
                ++index;
            }
        }

        booksFile.close();

    } // publisher name choice end;


    if ( index <= 0) {

   		char str[] = "No Data Found Against Your Entered Search.";
    	drawScreen(str);
   		if ( invoke ) strcpy(__id->bISBN,"-1");
   		return;

    }

    drawBooks(foundBooks,index,invoke,__id);
} //findBooks function end

// Draw Books Option[3][2]

void drawBooks(Book books[],int total,bool invoke, Book* __id) {

    drawHeader();
    emptyLine();

    cout << "\t|";
    cout << " Search Results ";
    for (int i = 0; i < boxTabSpaces - 2; ++i) cout << "\t";
    cout << '|' << endl;

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

    emptyLine();

    cout << "\t| ";
    
    int spaces = ( boxWidth / 6 );
    bool flag = true;


    char str[16] = "ISBN";
    for (int i = 0; i < spaces + 1; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    strcpy(str,"Name");
    flag = true;
    for (int i = 0; i < spaces + 1; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    strcpy(str,"Author");
    flag = true;
    for (int i = 0; i < spaces + 1; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    strcpy(str,"Publisher");
    flag = true;
    for (int i = 0; i < spaces + 1; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    strcpy(str,"Copies");
    flag = true;
    for (int i = 0; i < spaces; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    strcpy(str,"DOI");
    flag = true;
    for (int i = 0; i < spaces; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    cout << "|" << endl;

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

    emptyLine();

    int index = 0;

    while(index < total) {
        cout << "\t| ";
        flag = true;
        for (int i = 0; i < spaces + 1; ++i) {
            
            if ( flag ) {
                if(books[index].bISBN[i] == '\0') flag = false;
                else cout<<books[index].bISBN[i];
            }
            else cout<<' ';

        }
        flag = true;
        for (int i = 0; i < spaces + 1; ++i) {
            
            if ( flag ) {
                if(books[index].bName[i] == '\0') flag = false;
                else cout<<books[index].bName[i];
            }
            else cout<<' ';

        }
        flag = true;
        for (int i = 0; i < spaces + 1; ++i) {
            
            if ( flag ) {
                if(books[index].bAuthor[i] == '\0') flag = false;
                else cout<<books[index].bAuthor[i];
            }
            else cout<<' ';

        }
        flag = true;
        for (int i = 0; i < spaces + 1; ++i) {
            
            if ( flag ) {
                if(books[index].bPublisher[i] == '\0') flag = false;
                else cout<<books[index].bPublisher[i];
            }
            else cout<<' ';

        }
        int copies = books[index].noOfCopies;
        if (copies < 100) cout << '0' << copies; 
        else if(copies < 10) cout << "00" << copies;
        else cout << copies;
        for (int i = 4; i < spaces; ++i) {
            
            cout<<' ';

        }
        int date = books[index].dateOfIssue.date; 
        int month = books[index].dateOfIssue.month; 
        int year = books[index].dateOfIssue.year;
        if (date < 10) cout << '0' << date << '/'; 
        else cout << date << '/'; 
        if (month < 10) cout << '0' << month << '/'; 
        else cout << month << '/'; 
        if (year < 1000) cout << '0' << year; 
        else cout << year; 
        for (int i = 11; i < spaces; ++i) {

            cout<<' ';

        }
        cout << "|" << endl;

        cout << "\t|";
        for (int i = 1; i < boxTabSpaces; ++i) cout << '\t';
        cout << "\t|" << endl;

        index++;
    }

    emptyLine();

    if ( invoke ) {

    	char inputISBN[MAX_SIZE];
    	bool inRange = true;
    	char str[60] = " Enter ISBN of the Book [ No Space ] : ";
    	while ( inRange ) {
	    	cout << "\t|";
	    	cout << str;
	    	cin >> inputISBN;
	    	for (int i = 0; i < total; ++i)
	    	{
	    		if ( strcmp(books[i].bISBN, inputISBN) == 0) {
	    			*__id = books[i];
	    			inRange = false;
	    			break;
	    		}
	    	}
	    	if ( inRange ) strcpy(str," [ Wrong ISBN ] Enter ISBN of the Book [ No Space ] : ");
	    }
    }


    else {

    	cout << "\t|";
    	system("pause");

    }

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;
}

// Fetch Line Books Option[3][3]

void fetchLineBooks(ifstream& booksFile, Book &temp) {
        booksFile.getline(temp.bISBN,100,' ');
        booksFile.getline(temp.bName,100,'-');
        booksFile.getline(temp.bAuthor,100,'-');
        booksFile.getline(temp.bPublisher,100,'-');
        booksFile >> temp.noOfCopies;
        booksFile >> temp.dateOfIssue.year;
        booksFile >> temp.dateOfIssue.month;
        booksFile >> temp.dateOfIssue.date;
        booksFile.ignore();
}

/* 	 Search Book Function End 	*/

/*	-----------------------------------------------------------------------------------  */





/* 	 Add User Start Option[4]	*/

// New User Option[4][0]

bool newUser() {

	drawHeader();

    emptyLine();

	int attempts = totalPasswordAttempts;

	char message[60] = " Enter Password To Add New User : ";

	char inputPass[passwordLength];
	cin.ignore();
	while ( attempts-- ) {

		cout << "\t|";
		cout << message;

		cin.getline(inputPass,passwordLength,'\n');

		if (strcmp(inputPass,systemPass) == 0) {
			break;
		}
		else {
			emptyLine();
			cout << "\t|";
			cout << ' ' << attempts << " Attempts Remaning" << endl;
			emptyLine();
			strcpy(message,"[Wrong Password]  Enter Password To Add New User : ");
			if (attempts <= 0) {
				strcpy(message,"You Entered Wrong Password Too Many Times.");
				drawScreen(message);
				return false;
			} 
		}
	}

    User nUser;

    drawHeader();

    emptyLine();

    cout << "\t|";
    cout << " Add New User (Please add required information in the appropriate fields)";
    for (int i = 0; i < boxTabSpaces - 9; ++i) cout << "\t";
    cout << '|' << endl;

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

    emptyLine();

    emptyLine();


    nUser.userId = uniqueId();

    cout << "\t|";
    cout << '\t' << "User ID: " << nUser.userId << " ( Auto Generated ) " <<endl;

    cout << "\t|";
    cout << '\t' << "First Name: ";

    cin.ignore();
    cin.getline(nUser.fName,100,'\n');

    cout << "\t|";
    cout << '\t' << "Last Name: ";

    cin.getline(nUser.lName,100,'\n');


    cout << "\t|";
    cout << '\t' << "Category (student or employee): ";


    cin.getline(nUser.cat,100,'\n');

    while (strcmp(nUser.cat,"student") != 0 && strcmp(nUser.cat,"employee")) {
    	cout << "\t|";
	    cout << '\t' << "[ Warning : Wrong Category ] Category (student or employee): ";


	    cin.getline(nUser.cat,100,'\n');
    }


    cout << "\t|";
    cout << '\t' << "Date Of Birth ( DD MM YYYY ) : ";

    cin >> nUser.DOB.date >> nUser.DOB.month >> nUser.DOB.year;

    while( !validateDate(nUser.DOB) ) {
		cout << "\t|";
		cout << '\t' << "[ Warning : Invalid Date ] Date of Birth ( DD MM YYYY ) : ";
		cin >> nUser.DOB.date >> nUser.DOB.month 
		>> nUser.DOB.year;
	}

	emptyLine();
	emptyLine();

    char choice;
	cout << "\t|";
	cout << " Do you want to add User information (Y/N)";
	cin >> choice;

	while ( choice != 'Y' && choice != 'y' &&  choice != 'n' && choice != 'N' ) {

		cout << "\t|";
		cout << " [ Warning : Enter Valid Choice ] Do you want to add User information (Y/N)";
		cin >> choice;

	}

	if ( choice == 'Y' || choice == 'y' ) return flushUser(nUser);
	else {
		char str[] = "User Info Was No Added.";
		drawScreen(str);
		return false; 
	}

}

// Flush User Option[4][1]

bool flushUser(User &usr) {

    ofstream usersFile;

    usersFile.open("users.txt",ios::app);

    usersFile << usr.userId << ' ' << usr.fName << '-' << usr.lName
    << '-' << usr.cat << '-' << usr.DOB.date << ' '
    << usr.DOB.month << ' ' << usr.DOB.year << endl;

    usersFile.close();

    return true;
}

// Unique ID Option[4][2]

int uniqueId() {
    ifstream usersFile("users.txt");

    int userId = -1;
    usersFile >> userId;
    usersFile.ignore(500,'\n');
    while( usersFile ) {
        usersFile >> userId;
        usersFile.ignore(500,'\n');
    }
    ++userId;
    return userId;
}



/* 	 Add User End 	*/

/*	-----------------------------------------------------------------------------------  */




/* 	 Edit User Start Option[1]	*/

// Option[1][0]

void editUser() {

	drawHeader();

	emptyLine();
	emptyLine();

	User __user;

	cout << "\t|";
	cout << " We Are Redirecting You To Search The User You Want To Edit " << endl;
	
	emptyLine();

	cout << "\t| ";
	system("pause");

	searchUser(true,&__user);

	if (__user.userId == -1) return;


	if ( hasBook(__user.userId) ) {

		char str[] = "The User Has Issued Some Books So You Can't Manipulate User Info.";
		drawScreen(str);
		return;
	}

	emptyLine();
	emptyLine();

	drawHeader();

	emptyLine();
	emptyLine();

	cout << "\t| ";
	cout << "User ID : " << __user.userId <<endl;
	cout << "\t| ";
	cout << "User First Name : " << __user.fName <<endl;
	cout << "\t| ";
	cout << "User Last Name : " << __user.lName <<endl;
	cout << "\t| ";
	cout << "User Categorey : " << __user.cat <<endl;
	cout << "\t| ";
	cout << "User Date Of Birth : " << __user.DOB.date << '/' 
	<< __user.DOB.month << '/' << __user.DOB.year  << endl;

	emptyLine();
	emptyLine();

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

	cout << "\t|";
	cout << " Enter Updated Info " << endl;

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;


	cout << "\t| ";
	cout << "User First Name : "; 
	cin.ignore();
	cin.getline(__user.fName,MAX_SIZE,'\n');;
	cout << "\t| ";
	cout << "User Last Name : ";
	cin.getline(__user.lName,MAX_SIZE,'\n');
	cout << "\t| ";
	cout << "User Category (student or employee) : ";
	cin.getline(__user.cat,MAX_SIZE,'\n');

	while (strcmp(__user.cat,"student") != 0 && strcmp(__user.cat,"employee")) {
    	cout << "\t|";
	    cout << '\t' << "[ Warning : Wrong Category ] User Category (student or employee): ";


	    cin.getline(__user.cat,100,'\n');
    }

	cout << "\t| ";
	cout << "User Date Of Birth ( DD MM YYYY ) : ";
	cin >> __user.DOB.date >> __user.DOB.month >> __user.DOB.year;

	while( !validateDate(__user.DOB) ) {
		cout << "\t|";
		cout << '\t' << "[ Warning : Invalid Date ] User Date of Birth ( DD MM YYYY ) : ";
		cin >> __user.DOB.date >> __user.DOB.month 
		>> __user.DOB.year;
	}

	char choice;
	cout << "\t|";
	cout << " Do you want to update the user info (Y/N)";
	cin >> choice;

	while ( choice != 'Y' && choice != 'y' &&  choice != 'n' && choice != 'N' ) {

		cout << "\t|";
		cout << " [ Warning : Enter Valid Choice ] Do you want to update user information (Y/N)";
		cin >> choice;

	}

	if ( choice == 'y' || choice == 'Y' ) updateUser(__user);
	else {
		char str[] = "The User Edit Was Cancelled";
		drawScreen(str);
	}
}

// Update Users Option[1][1]

void updateUser(User& __user) {

	ifstream usersFile("users.txt");

	ofstream tempFile;
	tempFile.open("temp.txt",ios::app);

	User temp;

	fetchLineUsers(usersFile,temp);
	while ( usersFile ) {

		if ( temp.userId != __user.userId ) {
			tempFile << temp.userId << ' ' << temp.fName << '-' << temp.lName
 	    	<< '-' << temp.cat << '-' << temp.DOB.date << ' '
 	    	<< temp.DOB.month << ' ' << temp.DOB.year << endl;
		}
		else {
			tempFile << __user.userId << ' ' << __user.fName << '-' << __user.lName
    		<< '-' << __user.cat << '-' << __user.DOB.date << ' '
   			<< __user.DOB.month << ' ' << __user.DOB.year << endl;
		}

		fetchLineUsers(usersFile,temp);
	}

	usersFile.close();
	tempFile.close();

	remove("users.txt");

	rename("temp.txt","users.txt");

	char str[] = "The User Has Been Updated Successfully ";
	drawScreen(str);

}

/* 	 Edit User End 	*/

/*	-----------------------------------------------------------------------------------  */


/* 	 Delete User Start Option[2]	*/

//Delete User Option[2][0]

void deleteUser() {

	drawHeader();

	emptyLine();
	emptyLine();

	User __user;

	cout << "\t|";
	cout << " We Are Redirecting You To Search The User You Want To Delete " << endl;
	
	emptyLine();

	cout << "\t| ";
	system("pause");

	searchUser(true,&__user);

	if (__user.userId == -1) return;


	if ( hasBook(__user.userId) ) {

		char str[] = "The User Has Been Issued Some Books So You Can't Delete User Info.";
		drawScreen(str);
		return;
	}

	emptyLine();
	emptyLine();

	drawHeader();

	emptyLine();
	emptyLine();

	cout << "\t| ";
	cout << "User ID : " << __user.userId <<endl;
	cout << "\t| ";
	cout << "User First Name : " << __user.fName <<endl;
	cout << "\t| ";
	cout << "User Last Name : " << __user.lName <<endl;
	cout << "\t| ";
	cout << "User Category : " << __user.cat <<endl;
	cout << "\t| ";
	cout << "User Issue Date : " << __user.DOB.date << '/' 
	<< __user.DOB.month << '/' << __user.DOB.year  << endl;

	emptyLine();
	emptyLine();

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

	cout << "\t|";
	cout << " Delete User " << endl;

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

	char choice;
	cout << "\t|";
	cout << " Do you want to delete the user (Y/N)";
	cin >> choice;

	while ( choice != 'Y' && choice != 'y' &&  choice != 'n' && choice != 'N' ) {

		cout << "\t|";
		cout << " [ Warning : Enter Valid Choice ] Do you want to delete user (Y/N)";
		cin >> choice;

	}

	if ( choice == 'y' || choice == 'Y' ) updateDeletedUser(__user.userId);
	else {
		char str[] = "The User Delete Was Cancelled";
		drawScreen(str);
	}
}

// Update Deleted User Option[2][1]

void updateDeletedUser(int userId) {

	ifstream usersFile("users.txt");

	ofstream tempFile;
	tempFile.open("temp.txt",ios::app);

	User temp;

	fetchLineUsers(usersFile,temp);

	if ( temp.userId != userId ) {
		tempFile << temp.userId << ' ' << temp.fName << '-' << temp.lName
 	    << '-' << temp.cat << '-' << temp.DOB.date << ' '
 	    << temp.DOB.month << ' ' << temp.DOB.year << endl;
	}

	fetchLineUsers(usersFile,temp);
	while ( usersFile ) {

		if ( temp.userId != userId ) {
			tempFile << temp.userId << ' ' << temp.fName << '-' << temp.lName
 	   		<< '-' << temp.cat << '-' << temp.DOB.date << ' '
 	    	<< temp.DOB.month << ' ' << temp.DOB.year << endl;
		}
		fetchLineUsers(usersFile,temp);
	}

	usersFile.close();
	tempFile.close();

	remove("users.txt");

	rename("temp.txt","users.txt");

	char str[] = "The User Has Been Deleted Successfully ";
	drawScreen(str);

}

// has book 

bool hasBook(int userId) {

	ifstream issueFile("issuebooks.txt");

	int curID;

	issueFile.ignore(102,' ');

	issueFile >> curID;

	issueFile.ignore(200,'\n');

	if ( userId == curID ) return true;

	issueFile.ignore(102,' ');

	issueFile >> curID;

	issueFile.ignore(200,'\n');

	while ( issueFile ) {

		if ( userId == curID ) return true;

		issueFile.ignore(102,' ');

		issueFile >> curID;

		issueFile.ignore(200,'\n');


	}
	return false;
}

/* 	 Delete User End 	*/

/*	-----------------------------------------------------------------------------------  */





/* 	 Search User End Option[7]	*/

// Search User Option[7][0]

void searchUser(bool invoke, User* __id) {

    drawHeader();

    emptyLine();

    cout << "\t|";
    cout << " Search User ";
    for (int i = 0; i < boxTabSpaces - 1; ++i) cout << "\t";
    cout << '|' << endl;

    cout << "\t|";
    cout << " Press option key to activate the required function.";
    for (int i = 0; i < boxTabSpaces - 6; ++i) cout << "\t";
    cout << '|' << endl;

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

    emptyLine();

    emptyLine();

    cout << "\t|";
    cout << '\t' << "(0) Search through User ID ";


    cout<<endl;


    cout << "\t|";
    cout << '\t' << "(1) Search through First Name ";


    cout<<endl;

    cout << "\t|";
    cout << '\t' << "(2) Search through Last Name ";
    cout << endl;


    cout << "\t|";
    cout << '\t' << "(3) Search through Categorey ";
    cout << endl;

    emptyLine();

    emptyLine();

    
    int choice;
    cout << "\t|";
    cout << " >";
    cin >> choice;

    

    findUsers(choice,invoke,__id);

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

}

// Find User Option[7][1]

void findUsers(int choice,bool invoke, User* __id) { //findUsers function start
    char searchText[MAX_SIZE];
    int searchInt;
    char disStr[20];

    if (choice == 0) strcpy(disStr,"User ID");
    else if (choice == 1) strcpy(disStr,"First Name");
    else if (choice == 2) strcpy(disStr,"Last Name");
    else if (choice == 3) strcpy(disStr,"Categorey");

    drawHeader();

    emptyLine();

    cout << "\t|";
    cout << " Search Book By " << disStr;
    for (int i = 0; i < boxTabSpaces - 2; ++i) cout << "\t";
    cout << endl;

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

    emptyLine();

    cout << "\t|\t";
    cout << " Enter " << disStr << ' ';
    if ( choice != 0 ) {
        cin.ignore();
        cin.getline( searchText, 100 , '\n');
    }
    else cin >> searchInt;

    emptyLine();

    emptyLine();

    emptyLine();

    User foundUsers[MAX_SIZE];
    int index = 0;
    User temp;

    if ( choice == 0 ) { //isbn choice start

        ifstream usersFile("users.txt");

        fetchLineUsers(usersFile,temp);

        if ( temp.userId == searchInt ) {
            foundUsers[index] = temp;
            ++index;
        }
        else {

            while( usersFile ) {
                
                fetchLineUsers(usersFile,temp);
                
                if ( temp.userId == searchInt ) {
                    foundUsers[index] = temp;
                    ++index;
                    break;
                }
            }
        }

        usersFile.close();
    } //isbn choice end

    else if (choice == 1) {// author name choice start

        ifstream usersFile("users.txt");

        fetchLineUsers(usersFile,temp);
        if (strcmp(temp.fName,searchText) == 0) {
            foundUsers[index] = temp;
            ++index;
        }

        while( usersFile ) {
            
            fetchLineUsers(usersFile,temp);
            if (strcmp(temp.fName,searchText) == 0) {
                foundUsers[index] = temp;
                ++index;
            }
        }

        usersFile.close();

    } // author name choice end;

    else if (choice == 2) {// book name choice start

        ifstream usersFile("users.txt");

        fetchLineUsers(usersFile,temp);
        if (strcmp(temp.lName,searchText) == 0) {
            foundUsers[index] = temp;
            ++index;
        }

        while( usersFile ) {
            
            fetchLineUsers(usersFile,temp);
            if (strcmp(temp.lName,searchText) == 0) {
                foundUsers[index] = temp;
                ++index;
            }
        }

        usersFile.close();

    } // book name choice end;

    else if (choice == 3) {// publisher name choice start

        ifstream usersFile("users.txt");

        fetchLineUsers(usersFile,temp);
        if (strcmp(temp.cat,searchText) == 0) {
            foundUsers[index] = temp;
            ++index;
        }

        while( usersFile ) {
            
            fetchLineUsers(usersFile,temp);
            if (strcmp(temp.cat,searchText) == 0) {
                foundUsers[index] = temp;
                ++index;
            }
        }

        usersFile.close();

    } // publisher name choice end;

    
    drawUsers(foundUsers,index,invoke,__id);

} //findUsers function end

// Fetch Line Users Option[7][2]

void fetchLineUsers(ifstream& usersFile, User &temp) {
        usersFile >> temp.userId;
        usersFile.ignore();
        usersFile.getline(temp.fName,100,'-');
        usersFile.getline(temp.lName,100,'-');
        usersFile.getline(temp.cat,100,'-');
        usersFile >> temp.DOB.date;
        usersFile >> temp.DOB.month;
        usersFile >> temp.DOB.year;
        usersFile.ignore();
}

// Draw User Option[7][3]

void drawUsers(User users[],int total,bool invoke, User* __id) {
	if (total <= 0) {

    	char str[] = "No Data Found Against Your Entered Search.";
    	drawScreen(str);
   		if (invoke) __id->userId = -1;
    	return;

    }
    drawHeader();
    emptyLine();

    cout << "\t|";
    cout << " Search Results ";
    for (int i = 0; i < boxTabSpaces - 2; ++i) cout << "\t";
    cout << '|' << endl;

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

    emptyLine();

    cout << "\t| ";
    
    int spaces = ( boxWidth / 5 );
    bool flag = true;


    char str[16] = "ID";
    for (int i = 0; i < spaces + 1; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    strcpy(str,"First Name");
    flag = true;
    for (int i = 0; i < spaces + 1; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    strcpy(str,"Last Name");
    flag = true;
    for (int i = 0; i < spaces + 1; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    strcpy(str,"Category");
    flag = true;
    for (int i = 0; i < spaces + 1; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    strcpy(str,"DOB");
    flag = true;
    for (int i = 0; i < spaces - 2; ++i) {
        
        if ( flag ) {
            if(str[i] == '\0') flag = false;
            else cout<<str[i];
        }
        else cout<<' ';

    }
    cout << "|" << endl;

    emptyLine();

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;

    emptyLine();

    int index = 0;

    while(index < total) {
        cout << "\t| ";
        int userId = users[index].userId;
        if (userId < 100) cout << '0' << userId; 
        else if(userId < 10) cout << "00" << userId;
        else cout << userId;
        for (int i = 4; i < spaces; ++i) {
            
            cout<<' ';

        }
        flag = true;
        for (int i = 0; i < spaces + 1; ++i) {
            
            if ( flag ) {
                if(users[index].fName[i] == '\0') flag = false;
                else cout<<users[index].fName[i];
            }
            else cout<<' ';

        }
        flag = true;
        for (int i = 0; i < spaces + 1; ++i) {
            
            if ( flag ) {
                if(users[index].lName[i] == '\0') flag = false;
                else cout<<users[index].lName[i];
            }
            else cout<<' ';

        }
        flag = true;
        for (int i = 0; i < spaces + 1; ++i) {
            
            if ( flag ) {
                if(users[index].cat[i] == '\0') flag = false;
                else cout<<users[index].cat[i];
            }
            else cout<<' ';

        }
        int date = users[index].DOB.date; 
        int month = users[index].DOB.month; 
        int year = users[index].DOB.year;
        if (date < 10) cout << '0' << date << '/'; 
        else cout << date << '/'; 
        if (month < 10) cout << '0' << month << '/'; 
        else cout << month << '/'; 
        if (year < 1000) cout << '0' << year; 
        else cout << year; 
        for (int i = 11; i < spaces; ++i) {

            cout<<' ';

        }
        cout << "|" << endl;

        cout << "\t|";
        for (int i = 1; i < boxTabSpaces; ++i) cout << '\t';
        cout << "\t|" << endl;

        index++;
    }

    emptyLine();

    if ( invoke ) {

    	int inputId;
    	bool inRange = true;
    	char str[40] = " Enter User ID ";
    	while ( inRange ) {
	    	cout << "\t|";
	    	cout << str;
	    	cin >> inputId;

	    	for ( index = 0 ; index < total ; ++ index ) {

	    		if (users [ index ].userId == inputId) {
	    			*__id = users[index];
	    			inRange = false;
	    			break;
	    		}

	    	}

	    	if ( inRange ) strcpy(str," [ Wrong ID ] Enter User ID Again : ");
	    }
    }

    else {

    	cout << "\t|";
    	system("pause");

    }

    cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;
}

/* 	 Search User End 	*/

/*	-----------------------------------------------------------------------------------  */




/* 	 Issue Book Start Option[8]	*/

// Option[8][0]

void issueBook() {

	drawHeader();

	emptyLine();
	emptyLine();

	User __user;

	cout << "\t|";
	cout << " We Are Redirecting You To Search The User To Whom You Want To Issue Book " << endl;
	
	emptyLine();

	cout << "\t| ";
	system("pause");

	searchUser(true,&__user);

	drawHeader();

	emptyLine();
	emptyLine();

	if ( __user.userId == -1) {
		return;
	}

	cout << "\t|";
	cout << " User ID : " << __user.userId << endl;

	emptyLine();
	emptyLine();

	cout << endl;

	int totalIssByUser = countIssuedToUser(__user.userId);

	if (totalIssByUser >= userIssueBookLimit) {

		char str[60] = " The User Has Already Reached Limit Of Issueing Books.";
		drawScreen(str);
		return;

	}

	cout << "\t| ";
	cout << "User Has Already Issued " << totalIssByUser << " Books." << endl;

	emptyLine();
	emptyLine();

	cout << "\t|";
	cout << " We Are Redirecting You To Search The Book You Want To Issue " << endl;
	
	emptyLine();

	Book __book;

	cout << "\t| ";
	system("pause");

	searchBook(true,&__book);

	if ( strcmp(__book.bISBN,"-1") == 0) {
		return;
	}

	if ( countBookIssues(__book.bISBN) >= __book.noOfCopies ) {

		char str[60] = " The Book is Already issued to too many users.";
		drawScreen(str);
		return;

	}

	drawHeader();

	emptyLine();
	emptyLine();

	cout << "\t| ";
	cout << "The User Has Already Issued " << totalIssByUser << " Books." << endl;

	emptyLine();
	emptyLine();

	cout << "\t| ";
	cout << "Book ISBN : " << __book.bISBN <<endl;
	cout << "\t| ";
	cout << "Book Name : " << __book.bName <<endl;
	cout << "\t| ";
	cout << "Book Author : " << __book.bAuthor <<endl;
	cout << "\t| ";
	cout << "Book Publisher : " << __book.bPublisher <<endl;
	cout << "\t| ";
	cout << "Book No Of Copies : " << __book.noOfCopies <<endl;
	cout << "\t| ";
	cout << "Book Date Of Issue : " << __book.dateOfIssue.date << '/' << __book.dateOfIssue.month << '/' << __book.dateOfIssue.year <<endl;

	emptyLine();
	emptyLine();

	cout << "\t| ";
	cout << " This Book Will Be Issued To Th Following User " << endl;

	emptyLine();
	emptyLine();

	cout << "\t| ";
	cout << "User ID : " << __user.userId <<endl;
	cout << "\t| ";
	cout << "User Name : " << __user.fName << ' ' << __user.lName << endl;
	cout << "\t| ";
	cout << "User Category : " << __user.cat <<endl;
	cout << "\t| ";
	cout << "User Date Of Birth : " << __user.DOB.date << '/' << __user.DOB.month << '/' << __user.DOB.year <<endl;

	emptyLine();
	emptyLine();

	char choice;
	cout << "\t|";
	cout << " Do you want to issue the book (Y/N)";
	cin >> choice;

	while ( choice != 'Y' && choice != 'y' &&  choice != 'n' && choice != 'N' ) {

		cout << "\t|";
		cout << " [ Warning : Enter Valid Choice ] Do you want to add book information (Y/N)";
		cin >> choice;

	}

	if ( choice == 'y' || choice == 'Y' ) addIssueedBook(__book,__user);
	else {
		char str[] = "The Book Was Not Issued ";
		drawScreen(str);
	}
}

// Add Issued Book Option[8][1]

void addIssueedBook(Book& __book,User& __user) {

	cout << "\t|";
	cout << " Enter Date Of Issue ( DD MM YYYY ) : ";
	
	issuedBook crBook;

	cin >> crBook.issueDate.date >> crBook.issueDate.month >> crBook.issueDate.year;

	while (!validateDate(crBook.issueDate)) {
		cout << "\t";
		cout << " [ Warning : Date Is Not Valid ] Enter Again ( DD MM YYYY ) : ";
		cin >> crBook.issueDate.date >> crBook.issueDate.month >> crBook.issueDate.year;
	}

	if (strcmp(__user.cat,"student") == 0) {
		crBook.lastDate.month = crBook.issueDate.month + studentLimt;
		crBook.lastDate.date = crBook.issueDate.date;
		crBook.lastDate.year = crBook.issueDate.year;
		if (crBook.lastDate.date > 30) {
			crBook.lastDate.date -= 30;
			crBook.lastDate.month +1;
		}
		if (crBook.lastDate.month > 12) {
			crBook.lastDate.month -= 12;
			crBook.lastDate.year += 1;
		}
	}
	else {
		crBook.lastDate.month = crBook.issueDate.month + emplLimit;
		crBook.lastDate.date = crBook.issueDate.date;
		crBook.lastDate.year = crBook.issueDate.year;
		if (crBook.lastDate.date > 30) {
			crBook.lastDate.date -= 30;
			crBook.lastDate.month +1;
		}
		if (crBook.lastDate.month > 12) {
			crBook.lastDate.month -= 12;
			crBook.lastDate.year += 1;
		}
	} 

	ofstream issueFile;

	issueFile.open("issuebooks.txt",ios::app);

	issueFile << __book.bISBN << ' ' << __user.userId << ' '
	<< crBook.issueDate.date << ' ' << crBook.issueDate.month << ' ' << crBook.issueDate.year << ' '
	<< crBook.lastDate.date << ' ' << crBook.lastDate.month << ' ' << crBook.lastDate.year << endl;

	issueFile.close();

	char str[] = "The Book Has Been Issued Successfully ";
	drawScreen(str);

}

int countIssuedToUser(int id) {

	int tempId;

	ifstream issueFile("issuebooks.txt");

	int counter = 0;

	while (issueFile) {

		issueFile.ignore(100,' ');
		issueFile >> tempId;
		issueFile.ignore(1000,'\n');
		if (tempId == id) ++counter;

	}

	if ( counter > 0 ) --counter;

	issueFile.close();

	return counter;

}


int countBookIssues(char isbn[]) {

	char tempISBN[MAX_SIZE];

	ifstream issueFile("issuebooks.txt");

	int counter = 0;

	while (issueFile) {

		issueFile >> tempISBN;
		issueFile.ignore(1000,'\n');
		if (strcmp(tempISBN,isbn) == 0) ++counter;

	}

	if ( counter > 0 ) --counter;

	issueFile.close();

	return counter;

}

/* 	 Issue Book End 	*/

/*	-----------------------------------------------------------------------------------  */

/* 	 Delete Issue Book Start 	*/

void deleteIssueBook() {

	drawHeader();

	emptyLine();
	
	emptyLine();

	cout << "\t| ";

	cout << " Enter User ID : ";

	int userId;

	cin >> userId;

	issuedBook result[userIssueBookLimit];

	int index = 0;

	fetchIssuedBooks(userId,result,index);

	emptyLine();
	emptyLine();

	ifstream booksFile("books.txt");

	Book resultBooks[userIssueBookLimit];

	for (int i = 0; i < index ; ) {
		fetchLineBooks(booksFile,resultBooks[i]);
		for (int j = 0 ; j < index ; ++j) 
			if (strcmp(result[j].bISBN,resultBooks[i].bISBN) == 0) {
				++i;
				break;
			}
	}

	booksFile.close();

	drawBooks(resultBooks,index,true,&resultBooks[0]);

	issuedBook book;
	
	for (int i = 0 ; i < index ; ++i) {
		if (strcmp(resultBooks[0].bISBN,result[i].bISBN) == 0) {
			book = result[i];
			break;
		}
	}

	drawHeader();

	emptyLine();
	
	emptyLine();

	cout << "\t|";
	cout << " You Are Going To Remove The Following Book From The List  " << endl;

	emptyLine();

	cout << "\t|";
	cout << " Book ISBN : " << resultBooks[0].bISBN << endl;
	cout << "\t|";
	cout << " Book Name : " << resultBooks[0].bName << endl;
	cout << "\t|";
	cout << " Book Author : " << resultBooks[0].bAuthor << endl;
	cout << "\t|";
	cout << " Issued To User On : " << book.issueDate.date << '/' << book.issueDate.month << '/' << book.issueDate.year << endl;
	cout << "\t|";
	cout << " Last Date Is : " << book.lastDate.date << '/' << book.lastDate.month << '/' << book.lastDate.year << endl;

	emptyLine();

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;	

	cout << "\t|";
	cout << " Delete Book " << endl;

	cout << "\t|";
    for (int i = 2; i < boxWidth; ++i) cout << '-';
    cout << "|" << endl;
	
	emptyLine();
	
	char choice;
	cout << "\t|";
	cout << " Do you want to delete the book from issued List (Y/N)";
	cin >> choice;

	while ( choice != 'Y' && choice != 'y' &&  choice != 'n' && choice != 'N' ) {

		cout << "\t|";
		cout << " [ Warning : Enter Valid Choice ] Do you want to delete user (Y/N)";
		cin >> choice;

	}

	if ( choice == 'y' || choice == 'Y' ) deletedIssueBook(book);
	else {
		char str[] = "The User Delete Was Cancelled";
		drawScreen(str);
	}
}

// Delete Issue Book

void deletedIssueBook(issuedBook& __book) {

	ifstream issueFile("issuebooks.txt");

	ofstream tempFile;
	tempFile.open("temp.txt",ios::app);

	issuedBook temp;

	issueFile >> temp.bISBN >> temp.userId 
	>> temp.issueDate.date >> temp.issueDate.month >> temp.issueDate.year
	>> temp.lastDate.date >> temp.lastDate.month >> temp.lastDate.year;

	while ( issueFile ) {

		if ( temp.userId == __book.userId && strcmp(temp.bISBN,__book.bISBN) == 0) ;

		else {
			tempFile << temp.bISBN << ' ' << temp.userId << ' '
			<< temp.issueDate.date << ' ' << temp.issueDate.month << ' ' << temp.issueDate.year << ' '
			<< temp.lastDate.date << ' ' << temp.lastDate.month << ' ' << temp.lastDate.year << endl;
		}
		issueFile.ignore();
		issueFile >> temp.bISBN >> temp.userId 
		>> temp.issueDate.date >> temp.issueDate.month >> temp.issueDate.year
		>> temp.lastDate.date >> temp.lastDate.month >> temp.lastDate.year;
	}

	issueFile.close();
	tempFile.close();

	remove("issuebooks.txt");

	rename("temp.txt","issuebooks.txt");

	char str[] = "The User Has Been Deleted Successfully ";
	drawScreen(str);

}

// Fetch Issued Books

void fetchIssuedBooks(int userId, issuedBook result[userIssueBookLimit],int& index) {

	ifstream issueFile("issuebooks.txt");

	issuedBook temp;

	int i = 0;

	issueFile >> temp.bISBN >> temp.userId 
	>> temp.issueDate.date >> temp.issueDate.month >> temp.issueDate.year
	>> temp.lastDate.date >> temp.lastDate.month >> temp.lastDate.year;

	while (issueFile) {
		if (temp.userId == userId) {
			result[i] = temp;
			++i;
		}
		issueFile.ignore();
		issueFile >> temp.bISBN >> temp.userId 
		>> temp.issueDate.date >> temp.issueDate.month >> temp.issueDate.year
		>> temp.lastDate.date >> temp.lastDate.month >> temp.lastDate.year;
	}
	
	index = i;
}
/* 	 Delete Issue Book End */

/* 	 Common Functions Start */

// Validate Date

bool validateDate(Date theDate) {

	if ( theDate.month < 1 || theDate.month > 12  ) return false;
	if ( theDate.year > 2021 || theDate.year < 700) return false;
	if ( theDate.date < 1 || theDate.date > 31 ) return false;
	else {
		if ( ( (theDate.month < 7 && theDate.month % 2 == 0 ) 
				|| (theDate.month > 7 && theDate.month % 2 == 1) ) && theDate.date > 30
			) return false;
		if ( theDate.month == 2 && theDate.date > 29 ) return false;
		if ( theDate.month == 2 && theDate.year % 4 != 0 && theDate.date > 28 ) return false;
	}

	return true;
}


// Draw Screen

void drawScreen(char string[]) {

    drawHeader();
    emptyLine();
    emptyLine();


    cout << "\t| ";
    int lineBreak = 1;
    for (int i = 0; string[i] != '\0'; ++i) {
        if ( i > 0 && lineBreak > boxWidth - 4 ) {
            cout << " |" << endl <<  "\t| ";
            lineBreak = 0; 
        }
        if ( lineBreak == boxWidth - 4 && string[i-1] != ' ') {
            cout<<'-';
            --i;
        }
        else if ( lineBreak == boxWidth - 4 && string[i-1] == ' ') { 
            cout<<' ';
            --i;
        }
        else cout<<string[i];
        ++lineBreak;
    }
    for (int i = lineBreak; i < boxWidth - 3; ++i) cout << ' ';
    cout << '|' << endl;

    emptyLine();

    emptyLine();

    emptyLine();

    cout << "\t| ";
    system("pause");

    cout << '\t';
    for (int i = 0; i < boxWidth; ++i) cout << '-';
    cout << endl;

}

/* 	  Common Functions End 	*/

/*	-----------------------------------------------------------------------------------  */
