#include <iostream>
#include <cstring>
using namespace std;
struct Book {
	char isbn[100],name[100],aname[100],pname[100];
	int copies;
};
const int limit = 20;
Book allBooks[limit];
int totalBooks = 0;

void mainMenu(); // 145
void addBook(); // 206
void searchBook(bool in=false,Book *b = NULL); // 285
void editBook(); // 407
void deleteBook(); // 495
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
		cout << " BOOk Managment Syatem" << endl;
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
		cout << endl << endl;

		cout << " Press -1 to exit" << endl << endl;


		cout << endl << " > ";
		if (cin>>choice) {
			switch(choice) {
				case 0: addBook(); break;
				case 1: editBook(); break;
				case 2: deleteBook(); break;
				case 3: searchBook(); break;
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
void addBook() {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " BOOk Managment Syatem" << endl;
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
	cout << endl << endl;

	char ch;

	cout << " Enter y to add record and any other key to Cancel ";

	cin >> ch;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " BOOk Managment Syatem" << endl;
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
	cout << " BOOk Managment Syatem" << endl;
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
	cout << " BOOk Managment Syatem" << endl;
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
	cout << " BOOk Managment Syatem" << endl;
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
	cout << endl << endl;

	cout << " Do You want To Update Data ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " BOOk Managment Syatem" << endl;
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
	cout << " BOOk Managment Syatem" << endl;
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
	cout << endl << endl;
	cout << " Do You want To Delete Book ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " BOOk Managment Syatem" << endl;
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