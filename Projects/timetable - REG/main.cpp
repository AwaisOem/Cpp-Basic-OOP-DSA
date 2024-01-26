#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
void delrecord();
void searchR();
void sbyteacher();
void sbysubject();
void sbytime();
struct Details{
	
	char sname[20],date[20],day[20],teachername[20],classs[20],time[20];
	void add()
	{
		cout<<"Enter name of subject : ";
		cin>>sname;
		cout<<"Enter date : ";
		cin>>date;
		cout<<"Enter Day : ";
		cin>>day;
		cout<<"Enter Time : ";
		cin>>time;
		cout<<"Enter class : ";
		cin>>classs;
		cout<<"Enter teacher name : ";
		cin>>teachername;
		cout<<"\n\nRecord has been added Congratulations";
		
		
	}
	void show()
	{
		cout<<date<<"\t\t"<<day<<"\t\t"<<time<<"\t\t"<<sname<<"\t\t"<<teachername<<"\n\n";
	}



};
void report()
{
	Details data;
	cout<<"Date\t\t\tDay\t\tTime\t\tSubject\t\tTeacher\n";
	ifstream inFile;
	inFile.open("Records.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	
	while(	inFile.read(reinterpret_cast<char*> (&data), sizeof(Details)))
	{
	
	data.show();
	}
	inFile.close();
}
	

void addData()
{
	Details data;
	ofstream outFile;
	outFile.open("Records.dat",ios::binary|ios::app);
	data.add();
	
	outFile.write(reinterpret_cast<char*> (&data), sizeof(Details));
	outFile.close();

}
void modify()
{
	cout<<"Enter Date : ";
	 char date[20],time[20];
	cin>>date;
	cout<<"Enter Time : ";
	cin>>time;
	Details record;

	bool found=false;
	
	fstream File;
	File.open("Records.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
while(File.read(reinterpret_cast<char*> (&record), sizeof(Details)))
	{
	
		
		if((strcmp(date,record.date)==0) and (strcmp(time,record.time)==0) ) 
		{
			cout<<"The existing record is \n";
			record.show();
			
			cout<<"\n\nEnter The New Details of account"<<endl;
		record.add();
			int pos=(-1)*static_cast<int>(sizeof(Details));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char*> (&record), sizeof(Details));
			cout<<"\n\n\t Record Updated";
			found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";

}
void search()
{
		int choice;
cout<<"\n\n\t\t\t\t\t\tWelcome to Time Table Management System in C++\n\t\t\t\t\t\t----------------------------------------------\n";
do
{
	system("cls");
	cout<<"\n\nPlease Have your choice \n\n\t1. Search By Date \n\n\t2. Search by Teacher \n\n\t3. Search by Time  \n\n\t4. Search By subject\n\n\t5. Exit\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			system("cls");
			searchR();
			cout<<"\n press any key to go back \n";
			getch();
			break;
		case 2:
			system("cls");
			sbyteacher();
			cout<<"\n press any key to go back \n";
			getch();
			break;
		case 3:
			system("cls");
			sbytime();
			cout<<"\n press any key to go back \n";
			getch();
			break;
		case 4:
			system("cls");
			sbysubject();
			cout<<"\n press any key to go back \n";
			getch();
			break;
		default :
			return;
		
	}
}
while(choice!=5);
}



void searchR()
{
	
	char tdate[20];
	cout<<"Enter date to search : ";
	cin>>tdate;
	Details record;

	bool found=false;
	
	fstream File;
	File.open("Records.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
		cout<<"Date\t\t\tDay\t\tTime\t\tSubject\t\tTeacher\n";

while(File.read(reinterpret_cast<char*> (&record), sizeof(Details)))
	{
	
		
		if(strcmp(record.date,tdate)==0)
		{
			
			record.show();
		cout<<"\n\n";
	
			found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";

}
void sbyteacher()
{
	
	char tnamet[20];
	cout<<"Enter teacher name  to search : ";
	cin>>tnamet;
	Details record;

	bool found=false;
	
	fstream File;
	File.open("Records.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
		cout<<"Date\t\t\tDay\t\tTime\t\tSubject\t\tTeacher\n";

while(File.read(reinterpret_cast<char*> (&record), sizeof(Details)))
	{
		
		
		if(strcmp(record.teachername,tnamet)==0)
		{
			
			record.show();
		cout<<"\n\n";
	
			found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";

}
void sbysubject()
{
	
	char snamet[20];
	cout<<"Enter subject name to search : ";
	cin>>snamet;
	Details record;

	bool found=false;
	
	fstream File;
	File.open("Records.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
		cout<<"Date\t\t\tDay\t\tTime\t\tSubject\t\tTeacher\n";

while(File.read(reinterpret_cast<char*> (&record), sizeof(Details)))
	{
		
		
		if(strcmp(record.sname,snamet)==0)
		{
			
			record.show();
		cout<<"\n\n";
	
			found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";

}
void sbytime()
{
	
	char timet[20];
	cout<<"Enter time to search : ";
	cin>>timet;
	Details record;

	bool found=false;
	
	fstream File;
	File.open("Records.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
		cout<<"Date\t\t\tDay\t\tTime\t\tSubject\t\tTeacher\n\n";

	while(File.read(reinterpret_cast<char*> (&record), sizeof(Details)))
	{
		
		
		if(strcmp(record.time,timet)==0)
		{
			
			record.show();
		cout<<"\n\n";
	
			found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";

}
void manage()
{
	
	int choice;
cout<<"\n\n\t\t\t\t\t\tWelcome to Time Table Management System in C++\n\t\t\t\t\t\t----------------------------------------------\n";
do
{
	system("cls");
	cout<<"\n\nPlease Have your choice \n\n\t1. Add new class\n\n\t2. Update time table \n\n\t3. Delete from time table \n\n\t4. Display \n\n\t5. Exit";
	cin>>choice;
	switch(choice)
	{
		case 1:
			system("cls");
			addData();
			cout<<"\n press any key to go back \n";
			getch();
			system("cls");
			break;
		case 2:
			system("cls");
			modify();
			cout<<"\n press any key to go back \n";
			getch();
			system("cls");
			break;
		case 3:
			system("cls");
			delrecord();
			cout<<"\n press any key to go back \n";
			getch();
			system("cls");
			break;
		case 4:
			system("cls");
			report();
			cout<<"\n press any key to go back \n";
			getch();
			system("cls");
			break;
		default :
			system("cls");
			return;
		
	}
}
while(choice!=5);
}
void delrecord()
{
	cout<<"Enter date : ";
	char tdate[20],ttime[20];
	cin>>tdate;
	cout<<"Enter time : ";
	cin>>ttime;
	Details record;
	ifstream inFile;
	ofstream outFile;
	inFile.open("Records.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	outFile.open("Temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&record), sizeof(Details)))
	{
		if(!((strcmp(tdate,record.date)==0) and (strcmp(ttime,record.time)==0) ))
		{
			outFile.write(reinterpret_cast<char *> (&record), sizeof(Details));
		}
	}
	inFile.close();
	outFile.close();
	remove("Records.dat");
	rename("Temp.dat","Records.dat");
	cout<<"\n\n\tRecord Deleted ..";
}

main()
{

int choice;
do
{
	system("cls");
	cout<<"\n\n\t\t\t\t\t\tWelcome to Time Table Management System in C++\n\t\t\t\t\t\t----------------------------------------------\n";
	
	cout<<"\n\nPlease Have your choice \n\n\t1. Manage Time Table\n\n\t2. Search from time table \n\n\t3. Report (Show complete time table)\n\n\t4. Exit \n\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			system("cls");
			manage();
			break;
		case 2:
			system("cls");
			search();
			break;
	
		
		case 3:
			system("cls");
			report();
			cout<<"\n\nPress any key to continue \n";
			getch();
			system("cls");
			break;
		default:
			exit(0);
			
	}
	
}
while(choice!=4);


}
