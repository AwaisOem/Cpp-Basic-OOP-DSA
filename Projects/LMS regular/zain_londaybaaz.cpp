#include <iostream>
#include <cstring>
using namespace std;
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

void mainMenu(); // 145
void addBook(); // 206
void searchBook(bool in=false,Book *b = NULL); // 285
void editBook(); // 407
void deleteBook(); // 495
void addUser(); // 557
void deleteUser(); // 823
void issueBook(); // 881
void deleteIssuedBook(); // 1008
int main() {
	mainMenu();
}
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
		cout << "\t" << "(6) Delete User " << endl; 
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
				case 6: deleteUser(); break;
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

	
		allBooks[totalBooks] = temp;
		++totalBooks;

		cout << " The Book Was Added.";
	

	
	cout << endl << endl;

	system("pause");
}
void searchBook(bool in,Book *b) {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Library Managment Syatem" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	cout << "(0) Search By ISBN " << endl;
	cout << "(1) Search By Name " << endl;

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
	if (total<= 0) {
		cout << "No Result Found Against Your Search." << endl;	
		system("pause");
		if (in)
			strcpy(b->isbn,"-1");
		return;
	}
	
}
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
		
		for (int i = 0; i < totalBooks ; ++i ) {
			if (strcmp(oldisbn,allBooks[i].isbn)==0) {
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

	
		allUsers[totalUsers] = temp;
		++totalUsers;

		cout << " The User Data Was Added.";



	system("pause");
}
void deleteUser() {
	User temp;
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