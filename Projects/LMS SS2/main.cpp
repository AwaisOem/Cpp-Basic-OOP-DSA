#include "iostream"
#include "fstream"
#include "cstring"

using namespace std;

/* Struct Definitions */

struct Date {
	int day,month,year;
};

struct Book {
	char isbn[100],name[100],aname[100],pname[100];
	int copies;
	Date doi;
};

struct User {
	int userId;
	char fName[100],lName[100],cat[100];
	Date dob;
};

struct issuedBook{
	int userId;
	char isbn[100];
	Date issueDate,lastDate;
};

/*	-------------------------------------------------	*/

/* Global Variables */

const int limit = 20;
const int stdLimit = 2;
const int empLimit = 3;
Book allBooks[limit];
User allUsers[limit];
issuedBook allIssuedBooks[limit];
int totalIBooks = 0;
int totalUsers = 0;
int totalBooks = 0;
char pass[10] = "groupF";

/*	-------------------------------------------------	*/

/* Function Declarations */

void loadData(); // 82
void mainMenu(); // 145
void addBook(); // 206
bool uniqueISBN(char[]);
void searchBook(bool in=false,Book *b = NULL); // 285
void displayBooks(Book[],int,bool in=false,Book *b = NULL); // 371
void editBook(); // 407
void deleteBook(); // 495
void addUser(); // 557
bool uniqueId(int); // 615
void searchUser(bool in=false,User *b = NULL); // 632
void displayUsers(User[],int,bool in=false,User *b = NULL); // 707
void editUser(); // 740
void deleteUser(); // 823
void issueBook(); // 881
void deleteIssuedBook(); // 1008
bool userHasBook(int);
bool isDateCorrect(Date);
bool isIssued(char[]);
void saveData(); // 1054

/*	-------------------------------------------------	*/

/* Main Function */

int main() {

	loadData();
	mainMenu();

}

/*	-------------------------------------------------	*/

/* Load Data */

void loadData() {

	ifstream bookFile("Books.txt");

	int i = 0;
	
	while (bookFile) {
		bookFile.getline(allBooks[i].isbn,100,'-');
		bookFile.getline(allBooks[i].name,100,'-');
		bookFile.getline(allBooks[i].aname,100,'-');
		bookFile.getline(allBooks[i].pname,100,'-');
		bookFile >> allBooks[i].copies;
		bookFile >> allBooks[i].doi.day >> allBooks[i].doi.year >> allBooks[i].doi.year;
		bookFile.ignore();
		++i;
	}
	if (i>0)totalBooks = i-1;
	else totalBooks=i;

	bookFile.close();

	ifstream userFile("Users.txt");

	i = 0;

	while (userFile) {
		userFile >> allUsers[i].userId;
		userFile.ignore();
		userFile.getline(allUsers[i].fName,100,'-');
		userFile.getline(allUsers[i].lName,100,'-');
		userFile.getline(allUsers[i].cat,100,'-');
		userFile >> allUsers[i].dob.day >> allUsers[i].dob.year >> allUsers[i].dob.year;
		userFile.ignore();
		++i;
	}
	if (i>0)totalUsers = i-1;
	else totalUsers=i;

	userFile.close();

	ifstream iBookFile("issuedbooks.txt");

	i = 0;

	while (iBookFile) {
		iBookFile >> allIssuedBooks[i].userId;
		iBookFile.ignore();
		iBookFile.getline(allIssuedBooks[i].isbn,100,'-');
		iBookFile >> allIssuedBooks[i].issueDate.day >> allIssuedBooks[i].issueDate.month >> allIssuedBooks[i].issueDate.year;
		iBookFile >> allIssuedBooks[i].lastDate.day >> allIssuedBooks[i].lastDate.month >> allIssuedBooks[i].lastDate.year;
		iBookFile.ignore();
		++i;
	}
	if (i>0)totalIBooks = i-1;
	else totalIBooks=i;

	iBookFile.close();
}

/*	-------------------------------------------------	*/

/* Main Menu */

void mainMenu() {

	int choice = 0;

	char message[50] = " ";

	while (choice != -1) {

		system("cls");

		cout << endl << endl;
		cout << " University Of Sargodha" << endl << endl;
		cout << " Library Managment Syatem" << endl;
		cout << endl;
		cout << " ----------------------------------------" << endl << endl;

		if ( strcmp(message," ") != 0) {
			cout << message << endl << endl;
			cout << " ----------------------------------------" << endl << endl;
			strcpy(message," ");
		}

		cout << "\t" << "(0) Add New Book (Total Books # " << totalBooks << " ) " << endl; 
		cout << "\t" << "(1) Edit Book " << endl; 
		cout << "\t" << "(2) Delete Book " << endl; 
		cout << "\t" << "(3) Search Book " << endl; 
		cout << "\t" << "(4) Add New User (Total Users # " << totalUsers << " ) " << endl; 
		cout << "\t" << "(5) Edit User " << endl; 
		cout << "\t" << "(6) Delete User " << endl; 
		cout << "\t" << "(7) Search User " << endl; 
		cout << "\t" << "(8) Issue Book (Total Issued Books # " << totalIBooks << " ) " << endl; 
		cout << "\t" << "(9) Delete Issued Book " << endl; 

		cout << endl << endl;

		cout << " Press -1 to exit" << endl << endl;


		cout << endl << " > ";
		if (cin>>choice) {
			switch(choice) {
				case 0: addBook(); break;
				case 1: editBook(); break;
				case 2: deleteBook(); break;
				case 3: searchBook(); break;
				case 4: addUser(); break;
				case 5: editUser(); break;
				case 6: deleteUser(); break;
				case 7: searchUser(); break;
				case 8: issueBook(); break;
				case 9: deleteIssuedBook(); break;
				case -1 : cout << " Program Exited "; break;
				default : strcpy(message,"Please Select From The List"); break;
			}
		}
		else {
			cin.clear();
			cin.ignore();
			strcpy(message," Wrong Input Please Enter Valid Integer Value ! ");
		}
		cout << endl;
	}
		saveData();
}

/*	-------------------------------------------------	*/

/* Add Book */

void addBook() {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;
	if (totalBooks >= limit) {
		cout << " New Book Can't Be Added Because Limit is already filled.";
		return;
	}	
	Book temp;
	cout << " Enter ISBN : ";
	cin.ignore();
	cin.getline(temp.isbn,100,'\n');
	while(!uniqueISBN(temp.isbn)) {
		cout << " (ISBN Not unique) Enter ISBN : ";
		cin.getline(temp.isbn,100,'\n');
	}
	cout << " Enter Book Name : ";
	cin.getline(temp.name,100,'\n');
	cout << " Enter Author Name : ";
	cin.getline(temp.aname,100,'\n');
	cout << " Enter Publisher Name : ";
	cin.getline(temp.pname,100,'\n');
	cout << " Enter No Of Copies : ";
	cin >> temp.copies;
	cout << " Enter Date Of Issue : ";
	cin >> temp.doi.day >> temp.doi.month >> temp.doi.year;

	cout << endl << endl;

	char ch;

	cout << " Enter y to add record and any other key to Cancel ";

	cin >> ch;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (ch != 'y' && ch != 'Y') {
		cout << "The Record Was Not Added." << endl;
		system("pause");
		return;
	}

	if (uniqueISBN(temp.isbn)) {
		
		if (!isDateCorrect(temp.doi)) {
			cout << "The Record Was Not Added. Date Is Inccorect" << endl;
			system("pause");
			return;
		}
		allBooks[totalBooks] = temp;
		++totalBooks;

		cout << " The Book Was Added.";
	}

	else {
		cout << " The ISBN Was not Unique.";
	}
	cout << endl << endl;

	system("pause");
}

bool uniqueISBN(char str[]) {

	bool isUnique = true;
	for (int i = 0; i < totalBooks; ++i) {
		if (strcmp(str,allBooks[i].isbn) == 0) {
			isUnique = false;
			break;
		}
	}
	return isUnique;

}


/*	-------------------------------------------------	*/

/* Search Book */

void searchBook(bool in,Book *b) {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	cout << "(0) Search By ISBN " << endl;
	cout << "(1) Search By Name " << endl;
	cout << "(2) Search By Author Name " << endl;
	cout << "(3) Search By Publisher Name " << endl;
	cout << "(4) Search By Issue Year " << endl;

	int choice;

	cout << " > ";

	cin >> choice;

	int total = 0;
	Book sBooks[limit];

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	char input[100];
	cin.ignore();
	if (choice == 0) {
		cout << " Enter ISBN ";
		cin.getline(input,100);
		for (int i = 0; i < totalBooks ; ++i) {
			if (strcmp(allBooks[i].isbn,input) == 0) {
				sBooks[total] = allBooks[i];
				++total;
			}
		}
	}
	else if (choice == 1) {
		cout << " Enter Book Name ";
		cin.getline(input,100);
		for (int i = 0; i < totalBooks ; ++i) {
			if (strcmp(allBooks[i].name,input) == 0) {
				sBooks[total] = allBooks[i];
				++total;
			}
		}
	}
	else if (choice == 2) {
		cout << " Enter Author Name ";
		cin.getline(input,100);
		for (int i = 0; i < totalBooks ; ++i) {
			if (strcmp(allBooks[i].aname,input) == 0) {
				sBooks[total] = allBooks[i];
				++total;
			}
		}
	}
	else if (choice == 3) {
		cout << " Enter Publisher Name ";
		cin.getline(input,100);
		for (int i = 0; i < totalBooks ; ++i) {
			if (strcmp(allBooks[i].pname,input) == 0) {
				sBooks[total] = allBooks[i];
				++total;
			}
		}
	}
	else if (choice == 4) {
		int year;
		cout << " Enter Year ";
		cin >> year;
		for (int i = 0; i < totalBooks ; ++i) {
			if (allBooks[i].doi.year == year) {
				sBooks[total] = allBooks[i];
				++total;
			}
		}
	}
	if (total<= 0) {
		cout << "No Result Found Against Your Search." << endl;	
		system("pause");
		if (in)
			strcpy(b->isbn,"-1");
		return;
	}
	displayBooks(sBooks,total,in,b);
}

void displayBooks(Book b[],int t,bool in,Book *bk) {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	cout << " ISBN\t" << "Name\t" << "Author\t" << "Publisher\t" << "DOI" << endl << endl;

	for (int i = 0; i < t; ++i) {
		cout << b[i].isbn << "\t" << b[i].name << "\t" << b[i].aname << "\t" 
		<< b[i].pname << "\t\t" << b[i].doi.day << "/" << b[i].doi.month << "/" << b[i].doi.year 
		<< endl;
	}
	int inp;
	bool flag = true;
	char message[60] = " Enter The Index Of The Book To Select : ";
	if (in) {
		while(flag)
		{
			cout << endl << endl << message;
			cin >> inp;
			if (inp >= t) {
				strcpy(message,"[ Wrong Index ] Enter The Index Of The Book To Select : ");
			}
			else {
				*bk = b[inp];
				flag = false;
			}
		}
	}
	else {
		cout << endl << endl;
		system("pause");
	}
}


/*	-------------------------------------------------	*/

/* Edit Book */

void editBook() {
	Book temp;
	searchBook(true,&temp);
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (strcmp(temp.isbn,"-1") == 0) {
		return;
	}

	cout << " Book OLd Details " << endl << endl;

	char oldisbn[100];
	strcpy(oldisbn,temp.isbn);

	cout << " ISBN : ";
	cout << temp.isbn << endl;
	cout << " Name : ";
	cout << temp.name << endl;
	cout << " Author : ";
	cout << temp.aname << endl;
	cout << " Publisher : ";
	cout << temp.pname << endl;
	cout << " Copies : ";
	cout << temp.copies << endl;
	cout << " DOI : ";
	cout << temp.doi.day << '/' << temp.doi.month << '/' << temp.doi.year << endl;

	cout << endl << endl;

	if (isIssued(oldisbn)) {
		cout << "The Book Is Issued To some user so it can not be Edited.";
		system("pause");
		return;
	}

	cout << " Enter New Details " << endl << endl;

	cin.ignore();
	
	cout << " Enter ISBN : ";
	cin.getline(temp.isbn,100,'\n');

	cout << " Enter Name : ";
	cin.getline(temp.name,100,'\n');

	cout << " Enter Author : ";
	cin.getline(temp.aname,100,'\n');

	cout << " Enter Publisher : ";
	cin.getline(temp.pname,100,'\n');

	cout << " Enter Copies : ";
	cin >> temp.copies;

	cout << " Enter DOI : ";
	cin >> temp.doi.day >> temp.doi.month >> temp.doi.year;

	cout << endl << endl;

	cout << " Do You want To Update Data ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	if (choice == 'y' || choice == 'Y') {
		if (!(strcmp(oldisbn,temp.isbn)==0)) {
			if (!uniqueISBN(temp.isbn)) {
				cout << " ISBN Is Not Unique So Exited!";
				return;
			}
		}
		for (int i = 0; i < totalBooks ; ++i ) {
			if (strcmp(oldisbn,allBooks[i].isbn)==0) {
				if (!isDateCorrect(temp.doi)) {
					cout << "The Record Was Not Added. Date Is Inccorect" << endl;
					system("pause");
					return;
				}
				allBooks[i] = temp;
				cout << " Book Record Update!";
				break;
			}
		}
	}
	else {
		cout << " Book Update Cancelled ";
	}
}

/*	-------------------------------------------------	*/

void deleteBook() {
	Book temp;
	searchBook(true,&temp);
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (strcmp(temp.isbn,"-1") == 0) {
		return;
	}

	cout << " Book Details " << endl << endl;

	cout << " ISBN : ";
	cout << temp.isbn << endl;
	cout << " Name : ";
	cout << temp.name << endl;
	cout << " Author : ";
	cout << temp.aname << endl;
	cout << " Publisher : ";
	cout << temp.pname << endl;
	cout << " Copies : ";
	cout << temp.copies << endl;
	cout << " DOI : ";
	cout << temp.doi.day << '/' << temp.doi.month << '/' << temp.doi.year << endl;

	cout << endl << endl;


	if (isIssued(temp.isbn)) {
		cout << "The Book Is Issued To some user so it can not be deleted.";
		system("pause");
		return;
	}

	cout << " Do You want To Delete Book ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	if (choice == 'y' || choice == 'Y') {
		for (int i = 0; i < totalBooks; ++i) {
			if (strcmp(temp.isbn,allBooks[i].isbn)==0) {
				strcpy(allBooks[i].isbn,"-1");
				cout << "The Book Was Removed.";
				saveData();
				loadData();
				break;
			}
		}
	}
	else {
		cout << " Book Delete Cancelled ";
	}
	system("pause");
}

/*	-------------------------------------------------	*/


/* Add User */

void addUser() {
system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;
	
	char passW[10];
	
	char message[60] = " Enter Password To Continue : ";
	
	int countPass = 4;
	int tcountPass = countPass;
	
	while (countPass--) {
		cout << message << endl;
		cin.ignore();
		cin.getline(passW,10,'\n');
		
		if (strcmp(passW,pass) == 0) break;
		else {
			strcmp(message," [ Wrong Password ] Enter Password To Continue : ");
			if (countPass <= 0) {
				cout << endl << endl << "You Entered Wrong Password More Than " << tcountPass << " Times." << endl;
				system("pause");
				return;
			}
		}
	}
	
	if (totalUsers >= limit) {
		cout << " New User Can't Be Added Because Limit is already filled.";
		return;
	}	
	User temp;
	cout << " Enter User ID : ";
	cin >> temp.userId;
	cout << " Enter First Name : ";
	cin.ignore();
	cin.getline(temp.fName,100,'\n');
	cout << " Enter Last Name : ";
	cin.getline(temp.lName,100,'\n');
	cout << " Enter Cetagory : ";
	cin.getline(temp.cat,100,'\n');
	cout << " Enter Date Of Birth : ";
	cin >> temp.dob.day >> temp.dob.month >> temp.dob.year;

	cout << endl << endl;

	char ch;

	cout << " Enter y to add record and any other key to Cancel ";

	cin >> ch;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (ch != 'y' && ch != 'Y') {
		cout << "The Record Was Not Added." << endl;
		system("pause");
		return;
	}

	if (uniqueId(temp.userId)) {
		
		if (!isDateCorrect(temp.dob)) {
			cout << "The Record Was Not Added. Date Is Inccorect" << endl;
			system("pause");
			return;
		}
		allUsers[totalUsers] = temp;
		++totalUsers;

		cout << " The User Data Was Added.";
	}

	else {
		cout << " The ID Was not Unique.";
	}
	system("pause");
}

bool uniqueId(int id) {

	bool isUnique = true;
	for (int i = 0; i < totalUsers; ++i) {
		if (allUsers[i].userId == id) {
			isUnique = false;
			break;
		}
	}
	return isUnique;

}

/* ----------------------------------------------------- */

/* Search Book */

void searchUser(bool in,User *b) {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	cout << "(0) Search By Id " << endl;
	cout << "(1) Search By First Name " << endl;
	cout << "(2) Search By Last Name " << endl;
	cout << "(3) Search By Category " << endl;

	int choice;

	cout << " > ";

	cin >> choice;

	int total = 0;
	User sUsers[limit];

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	char input[100];
	cin.ignore();
	if (choice == 0) {
		int inp;
		cout << " Enter ID ";
		cin >> inp;
		for (int i = 0; i < totalUsers ; ++i) {
			if (allUsers[i].userId == inp) {
				sUsers[total] = allUsers[i];
				++total;
			}
		}
	}
	else if (choice == 1) {
		cout << " Enter First Name ";
		cin.getline(input,100);
		for (int i = 0; i < totalUsers ; ++i) {
			if (strcmp(allUsers[i].fName,input) == 0) {
				sUsers[total] = allUsers[i];
				++total;
			}
		}
	}
	else if (choice == 2) {
		cout << " Enter Last Name ";
		cin.getline(input,100);
		for (int i = 0; i < totalUsers ; ++i) {
			if (strcmp(allUsers[i].lName,input) == 0) {
				sUsers[total] = allUsers[i];
				++total;
			}
		}
	}
	else if (choice == 3) {
		cout << " Enter Category ";
		cin.getline(input,100);
		for (int i = 0; i < totalUsers ; ++i) {
			if (strcmp(allUsers[i].cat,input) == 0) {
				sUsers[total] = allUsers[i];
				++total;
			}
		}
	}
	
	if (total<= 0) {
		cout << "No Result Found Against Your Search." << endl;	
		system("pause");
		if (in)
			b->userId = -1;
		return;
	}
	
	displayUsers(sUsers,total,in,b);
}

void displayUsers(User b[],int t,bool in,User *bk) {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	cout << " ID\t" << "First Name\t" << "Last Name\t" << "Category\t" << "DOB" << endl << endl;

	for (int i = 0; i < t; ++i) {
		cout << b[i].userId << "\t" << b[i].fName << "\t" << b[i].lName << "\t" 
		<< b[i].cat << "\t\t" << b[i].dob.day << "/" << b[i].dob.month << "/" << b[i].dob.year 
		<< endl;
	}
	int inp;
	bool flag = true;
	char message[60] = "Enter The Index Of The User To Select";
	if (in) {
		while(flag)
		{
			cout << endl << endl << message;
			cin >> inp;
			if (inp >= t) {
				strcpy(message,"[ Wrong Index ] Enter The Index Of The User To Select : ");
			}
			else {
				*bk = b[inp];
				flag = false;
			}
		}
	}
	else {
		cout << endl << endl;
		system("pause");
	}
}


/*	-------------------------------------------------	*/


/* Edit Book */

void editUser() {
	User temp;
	searchUser(true,&temp);
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (temp.userId == -1) {
		return;
	}

	cout << " User OLd Details " << endl << endl;

	int oldid = temp.userId;

	cout << " ID : ";
	cout << temp.userId << endl;
	cout << " First Name : ";
	cout << temp.fName << endl;
	cout << " Last Name : ";
	cout << temp.lName << endl;
	cout << " Category : ";
	cout << temp.cat << endl;
	cout << " DOB : ";
	cout << temp.dob.day << '/' << temp.dob.month << '/' << temp.dob.year << endl;

	cout << endl << endl;


	if (userHasBook(temp.userId)) {
		cout << "The User has Issued some books so it can not be edited.";
		cout << endl << endl;
		system("pause");
		return;
	}

	cout << " Enter New Details " << endl << endl;

	cout << " Enter ID : ";
	cin >> temp.userId;

	cout << " Enter First Name : ";
	cin.ignore();
	cin.getline(temp.fName,100,'\n');

	cout << " Enter Last Name : ";
	cin.getline(temp.lName,100,'\n');

	cout << " Enter Category : ";
	cin.getline(temp.cat,100,'\n');

	cout << " Enter DOB : ";
	cin >> temp.dob.day >> temp.dob.month >> temp.dob.year;

	cout << endl << endl;

	cout << " Do You want To Update Data ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	if (choice == 'y' || choice == 'Y') {
		if (!(oldid == temp.userId)) {
			if (!uniqueId(temp.userId)) {
				cout << " ISBN Is Not Unique So Exited!";
				cout << endl << endl;
				system("pause");
				return;
			}
		}
		for (int i = 0; i < totalUsers ; ++i ) {
			if (oldid==allUsers[i].userId) {
				if (!isDateCorrect(temp.dob)) {
					cout << "The Record Was Not Added. Date Is Inccorect" << endl;
					system("pause");
					return;
				}
				allUsers[i] = temp;
				cout << " Book Record Update!";

				cout << endl << endl;

				break;
			}
		}
	}
	else {
		cout << " Book Update Cancelled ";

		cout << endl << endl;
	}
	system("pause");
}

/*	-------------------------------------------------	*/

void deleteUser() {
	User temp;
	searchUser(true,&temp);
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (temp.userId == -1) {
		return;
	}

	cout << " Book Details " << endl << endl;

	cout << " ISBN : ";
	cout << temp.userId << endl;
	cout << " First Name : ";
	cout << temp.fName << endl;
	cout << " Last Name : ";
	cout << temp.lName << endl;
	cout << " Category : ";
	cout << temp.cat << endl;
	cout << " DOB : ";
	cout << temp.dob.day << '/' << temp.dob.month << '/' << temp.dob.year << endl;

	cout << endl << endl;



	if (userHasBook(temp.userId)) {
		cout << "The User has Issued some books so it can not be deleted.";
		system("pause");
		return;
	}

	cout << " Do You want To Delete Book ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	if (choice == 'y' || choice == 'Y') {
		for (int i = 0; i < totalBooks; ++i) {
			if (temp.userId == allUsers[i].userId) {
				allUsers[i].userId = -1;
				cout << "The Book Was Removed.";

				cout << endl << endl;
				saveData();
				loadData();
				break;
			}
		}
	}
	else {
		cout << " Book Delete Cancelled ";

		cout << endl << endl;
	}
	system("pause");
}

/*	-------------------------------------------------	*/


void issueBook() {
	Book temp;
	User uTemp;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;


	cout << " Search The Book You Want To Issue " << endl;
	cout << ' ' ;
	system("pause");

	searchBook(true,&temp);

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (strcmp(temp.isbn,"-1") == 0) {
		return;
	}

	cout << " Book Details " << endl << endl;

	cout << " ISBN : ";
	cout << temp.isbn << endl;
	cout << " Name : ";
	cout << temp.name << endl;
	cout << " Author : ";
	cout << temp.aname << endl;
	cout << " Publisher : ";
	cout << temp.pname << endl;
	cout << " Copies : ";
	cout << temp.copies << endl;
	cout << " DOI : ";
	cout << temp.doi.day << '/' << temp.doi.month << '/' << temp.doi.year << endl;

	cout << endl << endl;

	cout << " Search The User You Want To Issue The Book " << endl;
	cout << ' ' ;
	system("pause");

	searchUser(true,&uTemp);

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (uTemp.userId == -1) {
		return;
	}

	cout << " Book Details " << endl << endl;

	cout << " ISBN : ";
	cout << temp.isbn << endl;
	cout << " Name : ";
	cout << temp.name << endl;
	cout << " Author : ";
	cout << temp.aname << endl;
	cout << " Publisher : ";
	cout << temp.pname << endl;
	cout << " Copies : ";
	cout << temp.copies << endl;
	cout << " DOI : ";
	cout << temp.doi.day << '/' << temp.doi.month << '/' << temp.doi.year << endl;

	cout << endl << endl;

	cout << " User Details " << endl << endl;

	cout << " ID : ";
	cout << uTemp.userId << endl;
	cout << " Name : ";
	cout << uTemp.fName << ' ' << uTemp.lName << endl;
	cout << " Category : ";
	cout << uTemp.cat << endl;
	cout << " DOB : ";
	cout << uTemp.dob.day << '/' << uTemp.dob.month << '/' << uTemp.dob.year << endl;

	cout << endl << endl;

	issuedBook iTemp;

	iTemp.userId = uTemp.userId;
	strcpy(iTemp.isbn,temp.isbn);
	cout << " Do You Want To Issue The Following Book ";
	char ch;

	cin >> ch;

	if (ch == 'y' || ch == 'Y') {
		Date dIss,dLast;
		cout << " Enter Date Of Issue : ";
		cin >> dIss.day >> dIss.month >> dIss.year;
		if (!isDateCorrect(dIss)) {
			cout << "The Record Was Not Added. Date Is Inccorect" << endl;
			system("pause");
			return;
		}
		if (strcmp(uTemp.cat,"student")==0) {
			dLast.month = dIss.month + stdLimit;
		}
		else {
			dLast.month = dIss.month + empLimit;
		}
		dLast.day = dIss.day;
		dLast.year = dIss.year;
		if (dLast.month > 12) {
			++dLast.year;
			dLast.month = dLast.month - 12;
		}
		iTemp.issueDate = dIss;
		iTemp.lastDate = dLast;
		allIssuedBooks[totalIBooks] = iTemp;
		++totalIBooks;
		cout << " The Book Has Been Issued." ;
		cout << endl;
	}
	else {
		cout << " The Book Was Not Issued." << endl;
		system("pause");
		return;
	}
	system("pause");
}

void deleteIssuedBook() {
	int userId;
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;
	cout << " Enter User ID : ";
	cin >> userId;

	cout << "Book Issued To User With ID " << userId << endl << endl;

	cout << " ISBN\t\t Issue Date\t\t Last Date\t\t " << endl;

	issuedBook* temp[limit];
	int total = 0;

	for (int i = 0; i < totalIBooks; ++i) {
		if (allIssuedBooks[i].userId != userId) continue;
		cout << allIssuedBooks[i].isbn << "\t\t" << allIssuedBooks[i].issueDate.day << '/'
		<< allIssuedBooks[i].issueDate.month << '/' << allIssuedBooks[i].issueDate.year << "\t\t"
		<< allIssuedBooks[i].lastDate.day << '/' << allIssuedBooks[i].lastDate.month << '/'
		<< allIssuedBooks[i].lastDate.year << '/' << endl;
		temp[total] = &allIssuedBooks[i];
		++total;
	 } 

	 cout << endl << endl;

	 int index;

	 cout << " Enter The Index You Wanna Delete : ";
	 cin >> index;

	 if (index < total) {
	 	strcpy(temp[index]->isbn,"-1");
	 	cout << " The Book Was Deleted";
	 }
	 else cout << " The Entered Index Was Not in-range";

	 system("pause");
}

bool isIssued(char isbn[]) {
	for (int i = 0; i < totalIBooks; ++i)
	{
		if (strcmp(allIssuedBooks[i].isbn,isbn) == 0) return true;
	}
	return false;
}

bool userHasBook(int id) {
	for (int i = 0; i < totalIBooks; ++i)
	{
		if (allIssuedBooks[i].userId == id) return true;
	}
	return false;
}

bool isDateCorrect(Date d) {
	
	if (d.year < 1700 || d.year > 2021) return false;
	
	if (d.month < 1 || d.month > 12) return false;
	
	if (d.day < 1) return false;
	
	int mnth = d.month;
	
	if (mnth == 1 || mnth == 3 || mnth == 5) {
		if (d.day > 31) return false;
	}
	
	else if (mnth == 4 || mnth == 6) {
		if (d.day > 30) return false;
	}
	
	else if (mnth == 2 && d.year % 4 == 0 && d.day > 29) return false;
	else if (mnth == 2 && d.year % 4 != 0 && d.day > 28) return false;
	
	return true;
}

/* Save Data */

void saveData() {
	ofstream bookFile("Books.txt");

	for (int i = 0; i < totalBooks; ++i){
		if (strcmp(allBooks[i].isbn,"-1")==0) continue;
		bookFile << allBooks[i].isbn << '-' << allBooks[i].name << '-'
		<< allBooks[i].aname << '-' << allBooks[i].pname << '-'
		<< allBooks[i].copies << ' ' << allBooks[i].doi.day << ' '
		<< allBooks[i].doi.month << ' ' << allBooks[i].doi.year << endl;    
	}

	bookFile.close();

	ofstream userFile("issuedbooks.txt");

	for (int i = 0; i < totalIBooks; ++i){
		if(strcmp(allIssuedBooks[i].isbn,"-1")==0) continue;
		userFile << allIssuedBooks[i].userId << ' ' << allIssuedBooks[i].isbn << '-'
		<< allIssuedBooks[i].issueDate.day << ' ' << allIssuedBooks[i].issueDate.month << ' ' << allIssuedBooks[i].issueDate.year
		<< ' ' << allIssuedBooks[i].lastDate.day << ' ' << allIssuedBooks[i].lastDate.month << ' ' << allIssuedBooks[i].lastDate.year << endl;    
	}

	userFile.close();

	ofstream iBookFile("Users.txt");

	for (int i = 0; i < totalUsers; ++i){
		if (allUsers[i].userId == -1) continue;
		iBookFile << allUsers[i].userId << ' ' << allUsers[i].fName << '-'
		<< allUsers[i].lName << '-' << allUsers[i].cat << '-'
		<< allUsers[i].dob.day << ' ' << allUsers[i].dob.month << ' ' << allUsers[i].dob.year << endl;    
	}

	iBookFile.close();
}

/*	-------------------------------------------------	*/
