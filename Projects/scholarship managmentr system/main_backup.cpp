#include "iostream"
#include "fstream"
#include "cstring"

using namespace std;

/* Struct Definitions */

struct Date {
	int day,month,year;
};

struct Scholarship {
	char scCode[100],name[100];
	double amount;
	Date lastDate;
};

struct User {
	int userId;
	char fName[100],lName[100],clas[100];
	Date dob;
};

struct issuedScholarship{
	int userId;
	char scCode[100];
	Date issueDate,lastDate;
};

/*	-------------------------------------------------	*/

/* Global Variables */

const int limit = 20;
const int stdLimit = 2;
Scholarship allScholarships[limit];
User allUsers[limit];
issuedScholarship allIssuedScholarships[limit];
int totalIScholarships = 0;
int totalUsers = 0;
int totalScholarships = 0;
char pass[10] = "groupF";

/*	-------------------------------------------------	*/

/* Function Declarations */

void loadData(); // 82
void mainMenu(); // 145
void addScholarship(); // 206
bool uniqueScholarship_Code(char[]);
void searchScholarship(bool in=false,Scholarship *b = NULL); // 285
void displayScholarships(Scholarship[],int,bool in=false,Scholarship *b = NULL); // 371
void editScholarship(); // 407
void deleteScholarship(); // 495
void addUser(); // 557
bool uniqueId(int); // 615
void searchUser(bool in=false,User *b = NULL); // 632
void displayUsers(User[],int,bool in=false,User *b = NULL); // 707
void editUser(); // 740
void deleteUser(); // 823
void issueScholarship(); // 881
void deleteIssuedScholarship(); // 1008
bool userHasScholarship(int);
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

	ifstream bookFile("Scholarships.txt");

	int i = 0;
	
	while (bookFile) {
		bookFile.getline(allScholarships[i].scCode,100,'-');
		bookFile.getline(allScholarships[i].name,100,'-');
		bookFile >> allScholarships[i].amount;
		bookFile >> allScholarships[i].lastDate.day >> allScholarships[i].lastDate.year >> allScholarships[i].lastDate.year;
		bookFile.ignore();
		++i;
	}
	if (i>0)totalScholarships = i-1;
	else totalScholarships=i;

	bookFile.close();

	ifstream userFile("Users.txt");

	i = 0;

	while (userFile) {
		userFile >> allUsers[i].userId;
		userFile.ignore();
		userFile.getline(allUsers[i].fName,100,'-');
		userFile.getline(allUsers[i].lName,100,'-');
		userFile.getline(allUsers[i].clas,100,'-');
		userFile >> allUsers[i].dob.day >> allUsers[i].dob.year >> allUsers[i].dob.year;
		userFile.ignore();
		++i;
	}
	if (i>0)totalUsers = i-1;
	else totalUsers=i;

	userFile.close();

	ifstream iScholarshipFile("issuedbooks.txt");

	i = 0;

	while (iScholarshipFile) {
		iScholarshipFile >> allIssuedScholarships[i].userId;
		iScholarshipFile.ignore();
		iScholarshipFile.getline(allIssuedScholarships[i].scCode,100,'-');
		iScholarshipFile >> allIssuedScholarships[i].issueDate.day >> allIssuedScholarships[i].issueDate.month >> allIssuedScholarships[i].issueDate.year;
		iScholarshipFile >> allIssuedScholarships[i].lastDate.day >> allIssuedScholarships[i].lastDate.month >> allIssuedScholarships[i].lastDate.year;
		iScholarshipFile.ignore();
		++i;
	}
	if (i>0)totalIScholarships = i-1;
	else totalIScholarships=i;

	iScholarshipFile.close();
}

/*	-------------------------------------------------	*/

/* Main Menu */

void mainMenu() {

	int choice = 0;

	char message[50] = " ";

	while (choice != 5) {

		system("cls");

		cout << endl << endl;
		cout << " University Of Sargodha" << endl << endl;
		cout << " Scholarship Managment Syatem" << endl;
		cout << endl;
		cout << " ----------------------------------------" << endl << endl;

		if ( strcmp(message," ") != 0) {
			cout << message << endl << endl;
			cout << " ----------------------------------------" << endl << endl;
			strcpy(message," ");
		}

		cout << "\t" << "(1) Manage Scholarship Data " << endl; 
		cout << "\t" << "(2) Manage User Data " << endl; 
		cout << "\t" << "(3) Search Data " << endl; 
		 
		cout << "\t" << "(4) Issue Scholarship " << endl;
		cout << "\t" << "(5) Exit " << endl;

		cout << endl << endl;


		cout << endl << " > ";
		if (cin>>choice) {

			system("cls");

			cout << endl << endl;
			cout << " University Of Sargodha" << endl << endl;
			cout << " Scholarship Managment Syatem" << endl;
			cout << endl;
			cout << " ----------------------------------------" << endl << endl;
			if (choice == 1) {
				cout << "\t" << "(1) Add New Scholarship (Total Scholarships # " << totalScholarships << " ) " << endl; 
				cout << "\t" << "(2) Edit Scholarship " << endl; 
				cout << "\t" << "(3) Delete Scholarship " << endl; 
				cout << endl << " > ";
				cin >> choice;
				switch(choice) {
					case 1: addScholarship(); break;
					case 2: editScholarship(); break;
					case 3: deleteScholarship(); break;
					default : strcpy(message,"Please Select From The List"); break;
				}
			}
			else if (choice == 2) {
				cout << "\t" << "(1) Add New User (Total Users # " << totalUsers << " ) " << endl; 
				cout << "\t" << "(2) Edit User " << endl; 
				cout << "\t" << "(3) Delete User " << endl; 
				cout << endl << " > ";
				cin >> choice;
				switch(choice) {
					case 1: addUser(); break;
					case 2: editUser(); break;
					case 3: deleteUser(); break;
					default : strcpy(message,"Please Select From The List"); break;
				}
			}
			else if (choice == 3) {
				cout << "\t" << "(1) Search Scholarship " << endl; 
				cout << "\t" << "(2) Search User " << endl;  
				cout << endl << " > ";
				cin >> choice;
				switch(choice) {
					case 1: searchScholarship(); break;
					case 2: searchUser(); break;
					default : strcpy(message,"Please Select From The List"); break;
				}
			}
			else if (choice == 4) {
				cout << "\t" << "(1) Issue Scholarship (Total Issued Scholarships # " << totalIScholarships << " ) " << endl; 
				cout << "\t" << "(2) Delete Issued Scholarship " << endl;
				cout << endl << " > ";
				cin >> choice;
				switch(choice) {
					case 1: issueScholarship(); break;
					case 2: deleteIssuedScholarship(); break;
					default : strcpy(message,"Please Select From The List"); break;
				}
			}
			else if (choice == 5) {
				system("cls");
				cout << "Program Exited" << endl;
			}
			else {
				strcpy(message," Wrong Input Please Enter Valid Integer Value ! ");
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

/* Add Scholarship */

void addScholarship() {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;
	if (totalScholarships >= limit) {
		cout << " New Scholarship Can't Be Added Because Limit is already filled.";
		return;
	}	
	Scholarship temp;
	cout << " Enter Scholarship_Code : ";
	cin.ignore();
	cin.getline(temp.scCode,100,'\n');
	while(!uniqueScholarship_Code(temp.scCode)) {
		cout << " (Scholarship_Code Not unique) Enter Scholarship_Code : ";
		cin.getline(temp.scCode,100,'\n');
	}
	cout << " Enter Scholarship Name : ";
	cin.getline(temp.name,100,'\n');
	cout << " Enter No Of Amount : ";
	cin >> temp.amount;
	cout << " Enter Date Of Issue : ";
	cin >> temp.lastDate.day >> temp.lastDate.month >> temp.lastDate.year;

	cout << endl << endl;

	char ch;

	cout << " Enter y to add record and any other key to Cancel ";

	cin >> ch;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (ch != 'y' && ch != 'Y') {
		cout << "The Record Was Not Added." << endl;
		system("pause");
		return;
	}

	if (uniqueScholarship_Code(temp.scCode)) {
		
		if (!isDateCorrect(temp.lastDate)) {
			cout << "The Record Was Not Added. Date Is Inccorect" << endl;
			system("pause");
			return;
		}
		allScholarships[totalScholarships] = temp;
		++totalScholarships;

		cout << " The Scholarship Was Added.";
	}

	else {
		cout << " The Scholarship_Code Was not Unique.";
	}
	cout << endl << endl;

	system("pause");
}

bool uniqueScholarship_Code(char str[]) {

	bool isUnique = true;
	for (int i = 0; i < totalScholarships; ++i) {
		if (strcmp(str,allScholarships[i].scCode) == 0) {
			isUnique = false;
			break;
		}
	}
	return isUnique;

}


/*	-------------------------------------------------	*/

/* Search Scholarship */

void searchScholarship(bool in,Scholarship *b) {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	cout << "(0) Search By Scholarship_Code " << endl;
	cout << "(1) Search By Name " << endl;
	cout << "(2) Search By Author Name " << endl;
	cout << "(3) Search By Publisher Name " << endl;
	cout << "(4) Search By Issue Year " << endl;

	int choice;

	cout << " > ";

	cin >> choice;

	int total = 0;
	Scholarship sScholarships[limit];

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	char input[100];
	cin.ignore();
	if (choice == 0) {
		cout << " Enter Scholarship_Code ";
		cin.getline(input,100);
		for (int i = 0; i < totalScholarships ; ++i) {
			if (strcmp(allScholarships[i].scCode,input) == 0) {
				sScholarships[total] = allScholarships[i];
				++total;
			}
		}
	}
	else if (choice == 1) {
		cout << " Enter Scholarship Name ";
		cin.getline(input,100);
		for (int i = 0; i < totalScholarships ; ++i) {
			if (strcmp(allScholarships[i].name,input) == 0) {
				sScholarships[total] = allScholarships[i];
				++total;
			}
		}
	}
	else if (choice == 4) {
		int year;
		cout << " Enter Year ";
		cin >> year;
		for (int i = 0; i < totalScholarships ; ++i) {
			if (allScholarships[i].lastDate.year == year) {
				sScholarships[total] = allScholarships[i];
				++total;
			}
		}
	}
	if (total<= 0) {
		cout << "No Result Found Against Your Search." << endl;	
		system("pause");
		if (in)
			strcpy(b->scCode,"-1");
		return;
	}
	displayScholarships(sScholarships,total,in,b);
}

void displayScholarships(Scholarship b[],int t,bool in,Scholarship *bk) {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	cout << " Scholarship_Code\t" << "Name\t" << "Last Date" << endl << endl;

	for (int i = 0; i < t; ++i) {
		cout << b[i].scCode << "\t" << b[i].name  << "\t\t" << b[i].lastDate.day << "/" << b[i].lastDate.month << "/" << b[i].lastDate.year 
		<< endl;
	}
	int inp;
	bool flag = true;
	char message[70] = " Enter The Index Of The Scholarship To Select : ";
	if (in) {
		while(flag)
		{
			cout << endl << endl << message;
			cin >> inp;
			if (inp >= t) {
				strcpy(message,"[ Wrong Index ] Enter The Index Of The Scholarship To Select : ");
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

/* Edit Scholarship */

void editScholarship() {
	Scholarship temp;
	searchScholarship(true,&temp);
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (strcmp(temp.scCode,"-1") == 0) {
		return;
	}

	cout << " Scholarship OLd Details " << endl << endl;

	char oldscCode[100];
	strcpy(oldscCode,temp.scCode);

	cout << " Scholarship_Code : ";
	cout << temp.scCode << endl;
	cout << " Name : ";
	cout << temp.name << endl;
	cout << " Amount : ";
	cout << temp.amount << endl;
	cout << " Last Date : ";
	cout << temp.lastDate.day << '/' << temp.lastDate.month << '/' << temp.lastDate.year << endl;

	cout << endl << endl;

	if (isIssued(oldscCode)) {
		cout << "The Scholarship Is Issued To some user so it can not be Edited.";
		system("pause");
		return;
	}

	cout << " Enter New Details " << endl << endl;

	cin.ignore();
	
	cout << " Enter Scholarship_Code : ";
	cin.getline(temp.scCode,100,'\n');

	cout << " Enter Name : ";
	cin.getline(temp.name,100,'\n');\

	cout << " Enter Amount : ";
	cin >> temp.amount;

	cout << " Enter Last Date : ";
	cin >> temp.lastDate.day >> temp.lastDate.month >> temp.lastDate.year;

	cout << endl << endl;

	cout << " Do You want To Update Data ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	if (choice == 'y' || choice == 'Y') {
		if (!(strcmp(oldscCode,temp.scCode)==0)) {
			if (!uniqueScholarship_Code(temp.scCode)) {
				cout << " Scholarship_Code Is Not Unique So Exited!";
				return;
			}
		}
		for (int i = 0; i < totalScholarships ; ++i ) {
			if (strcmp(oldscCode,allScholarships[i].scCode)==0) {
				if (!isDateCorrect(temp.lastDate)) {
					cout << "The Record Was Not Added. Date Is Inccorect" << endl;
					system("pause");
					return;
				}
				allScholarships[i] = temp;
				cout << " Scholarship Record Update!";
				break;
			}
		}
	}
	else {
		cout << " Scholarship Update Cancelled ";
	}
}

/*	-------------------------------------------------	*/

void deleteScholarship() {
	Scholarship temp;
	searchScholarship(true,&temp);
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (strcmp(temp.scCode,"-1") == 0) {
		return;
	}

	cout << " Scholarship Details " << endl << endl;

	cout << " Scholarship_Code : ";
	cout << temp.scCode << endl;
	cout << " Name : ";
	cout << temp.name << endl;
	cout << " Amount : ";
	cout << temp.amount << endl;
	cout << " Last Date : ";
	cout << temp.lastDate.day << '/' << temp.lastDate.month << '/' << temp.lastDate.year << endl;

	cout << endl << endl;


	if (isIssued(temp.scCode)) {
		cout << "The Scholarship Is Issued To some user so it can not be deleted.";
		system("pause");
		return;
	}

	cout << " Do You want To Delete Scholarship ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	if (choice == 'y' || choice == 'Y') {
		for (int i = 0; i < totalScholarships; ++i) {
			if (strcmp(temp.scCode,allScholarships[i].scCode)==0) {
				strcpy(allScholarships[i].scCode,"-1");
				cout << "The Scholarship Was Removed.";
				saveData();
				loadData();
				break;
			}
		}
	}
	else {
		cout << " Scholarship Delete Cancelled ";
	}
	system("pause");
}

/*	-------------------------------------------------	*/


/* Add User */

void addUser() {
system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
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
	cin.getline(temp.clas,100,'\n');
	cout << " Enter Date Of Birth : ";
	cin >> temp.dob.day >> temp.dob.month >> temp.dob.year;

	cout << endl << endl;

	char ch;

	cout << " Enter y to add record and any other key to Cancel ";

	cin >> ch;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
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

/* Search Scholarship */

void searchUser(bool in,User *b) {
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
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
	cout << " Scholarship Managment System" << endl;
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
			if (strcmp(allUsers[i].clas,input) == 0) {
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
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	cout << " ID\t" << "First Name\t" << "Last Name\t" << "Category\t" << "DOB" << endl << endl;

	for (int i = 0; i < t; ++i) {
		cout << b[i].userId << "\t" << b[i].fName << "\t" << b[i].lName << "\t" 
		<< b[i].clas << "\t\t" << b[i].dob.day << "/" << b[i].dob.month << "/" << b[i].dob.year 
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


/* Edit Scholarship */

void editUser() {
	User temp;
	searchUser(true,&temp);
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
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
	cout << temp.clas << endl;
	cout << " DOB : ";
	cout << temp.dob.day << '/' << temp.dob.month << '/' << temp.dob.year << endl;

	cout << endl << endl;


	if (userHasScholarship(temp.userId)) {
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
	cin.getline(temp.clas,100,'\n');

	cout << " Enter DOB : ";
	cin >> temp.dob.day >> temp.dob.month >> temp.dob.year;

	cout << endl << endl;

	cout << " Do You want To Update Data ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	if (choice == 'y' || choice == 'Y') {
		if (!(oldid == temp.userId)) {
			if (!uniqueId(temp.userId)) {
				cout << " Scholarship_Code Is Not Unique So Exited!";
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
				cout << " Scholarship Record Update!";

				cout << endl << endl;

				break;
			}
		}
	}
	else {
		cout << " Scholarship Update Cancelled ";

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
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (temp.userId == -1) {
		return;
	}

	cout << " Scholarship Details " << endl << endl;

	cout << " Scholarship_Code : ";
	cout << temp.userId << endl;
	cout << " First Name : ";
	cout << temp.fName << endl;
	cout << " Last Name : ";
	cout << temp.lName << endl;
	cout << " Category : ";
	cout << temp.clas << endl;
	cout << " DOB : ";
	cout << temp.dob.day << '/' << temp.dob.month << '/' << temp.dob.year << endl;

	cout << endl << endl;



	if (userHasScholarship(temp.userId)) {
		cout << "The User has Issued some books so it can not be deleted.";
		system("pause");
		return;
	}

	cout << " Do You want To Delete Scholarship ( y Or Y for yes any other key to cancel) ";

	char choice;

	cin >> choice;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ----------------------------------------" << endl << endl;

	if (choice == 'y' || choice == 'Y') {
		for (int i = 0; i < totalScholarships; ++i) {
			if (temp.userId == allUsers[i].userId) {
				allUsers[i].userId = -1;
				cout << "The Scholarship Was Removed.";

				cout << endl << endl;
				saveData();
				loadData();
				break;
			}
		}
	}
	else {
		cout << " Scholarship Delete Cancelled ";

		cout << endl << endl;
	}
	system("pause");
}

/*	-------------------------------------------------	*/


void issueScholarship() {
	Scholarship temp;
	User uTemp;

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;


	cout << " Search The Scholarship You Want To Issue " << endl;
	cout << ' ' ;
	system("pause");

	searchScholarship(true,&temp);

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (strcmp(temp.scCode,"-1") == 0) {
		return;
	}

	cout << " Scholarship Details " << endl << endl;

	cout << " Scholarship_Code : ";
	cout << temp.scCode << endl;
	cout << " Name : ";
	cout << temp.name << endl;
	cout << " Amount : ";
	cout << temp.amount << endl;
	cout << " Last Date : ";
	cout << temp.lastDate.day << '/' << temp.lastDate.month << '/' << temp.lastDate.year << endl;

	cout << endl << endl;

	cout << " Search The User You Want To Issue The Scholarship " << endl;
	cout << ' ' ;
	system("pause");

	searchUser(true,&uTemp);

	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;

	if (uTemp.userId == -1) {
		return;
	}

	cout << " Scholarship Details " << endl << endl;

	cout << " Scholarship_Code : ";
	cout << temp.scCode << endl;
	cout << " Name : ";
	cout << temp.name << endl;
	cout << " Amount : ";
	cout << temp.amount << endl;
	cout << " Last Date : ";
	cout << temp.lastDate.day << '/' << temp.lastDate.month << '/' << temp.lastDate.year << endl;

	cout << endl << endl;

	cout << " User Details " << endl << endl;

	cout << " ID : ";
	cout << uTemp.userId << endl;
	cout << " Name : ";
	cout << uTemp.fName << ' ' << uTemp.lName << endl;
	cout << " Category : ";
	cout << uTemp.clas << endl;
	cout << " DOB : ";
	cout << uTemp.dob.day << '/' << uTemp.dob.month << '/' << uTemp.dob.year << endl;

	cout << endl << endl;

	issuedScholarship iTemp;

	iTemp.userId = uTemp.userId;
	strcpy(iTemp.scCode,temp.scCode);
	cout << " Do You Want To Issue The Following Scholarship ";
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
	
		iTemp.issueDate = dIss;
		iTemp.lastDate = dLast;
		allIssuedScholarships[totalIScholarships] = iTemp;
		++totalIScholarships;
		cout << " The Scholarship Has Been Issued." ;
		cout << endl;
	}
	else {
		cout << " The Scholarship Was Not Issued." << endl;
		system("pause");
		return;
	}
	system("pause");
}

void deleteIssuedScholarship() {
	int userId;
	system("cls");
	cout << endl << endl;
	cout << " University Of Sargodha" << endl << endl;
	cout << " Scholarship Managment System" << endl;
	cout << endl;
	cout << " ---------------------------------------- " << endl << endl;
	cout << " Enter User ID : ";
	cin >> userId;

	cout << "Scholarship Issued To User With ID " << userId << endl << endl;

	cout << " Scholarship_Code\t\t Issue Date\t\t Last Date\t\t " << endl;

	issuedScholarship* temp[limit];
	int total = 0;

	for (int i = 0; i < totalIScholarships; ++i) {
		if (allIssuedScholarships[i].userId != userId) continue;
		cout << allIssuedScholarships[i].scCode << "\t\t" << allIssuedScholarships[i].issueDate.day << '/'
		<< allIssuedScholarships[i].issueDate.month << '/' << allIssuedScholarships[i].issueDate.year << "\t\t"
		<< allIssuedScholarships[i].lastDate.day << '/' << allIssuedScholarships[i].lastDate.month << '/'
		<< allIssuedScholarships[i].lastDate.year << '/' << endl;
		temp[total] = &allIssuedScholarships[i];
		++total;
	 } 

	 cout << endl << endl;

	 int index;

	 cout << " Enter The Index You Wanna Delete : ";
	 cin >> index;

	 if (index < total) {
	 	strcpy(temp[index]->scCode,"-1");
	 	cout << " The Scholarship Was Deleted";
	 }
	 else cout << " The Entered Index Was Not in-range";

	 system("pause");
}

bool isIssued(char scCode[]) {
	for (int i = 0; i < totalIScholarships; ++i)
	{
		if (strcmp(allIssuedScholarships[i].scCode,scCode) == 0) return true;
	}
	return false;
}

bool userHasScholarship(int id) {
	for (int i = 0; i < totalIScholarships; ++i)
	{
		if (allIssuedScholarships[i].userId == id) return true;
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
	ofstream bookFile("Scholarships.txt");

	for (int i = 0; i < totalScholarships; ++i){
		if (strcmp(allScholarships[i].scCode,"-1")==0) continue;
		bookFile << allScholarships[i].scCode << '-' << allScholarships[i].name << '-'
		<< allScholarships[i].amount << ' ' << allScholarships[i].lastDate.day << ' '
		<< allScholarships[i].lastDate.month << ' ' << allScholarships[i].lastDate.year << endl;    
	}

	bookFile.close();

	ofstream userFile("issuedbooks.txt");

	for (int i = 0; i < totalIScholarships; ++i){
		if(strcmp(allIssuedScholarships[i].scCode,"-1")==0) continue;
		userFile << allIssuedScholarships[i].userId << ' ' << allIssuedScholarships[i].scCode << '-'
		<< allIssuedScholarships[i].issueDate.day << ' ' << allIssuedScholarships[i].issueDate.month << ' ' << allIssuedScholarships[i].issueDate.year
		<< ' ' << allIssuedScholarships[i].lastDate.day << ' ' << allIssuedScholarships[i].lastDate.month << ' ' << allIssuedScholarships[i].lastDate.year << endl;    
	}

	userFile.close();

	ofstream iScholarshipFile("Users.txt");

	for (int i = 0; i < totalUsers; ++i){
		if (allUsers[i].userId == -1) continue;
		iScholarshipFile << allUsers[i].userId << ' ' << allUsers[i].fName << '-'
		<< allUsers[i].lName << '-' << allUsers[i].clas << '-'
		<< allUsers[i].dob.day << ' ' << allUsers[i].dob.month << ' ' << allUsers[i].dob.year << endl;    
	}

	iScholarshipFile.close();
}

/*	-------------------------------------------------	*/
