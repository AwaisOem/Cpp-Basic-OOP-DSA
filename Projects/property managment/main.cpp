#include<iostream>
#include<string>
#include<stdio.h>
#include<fstream>
using namespace std;
struct property
{
	int house_no;
	int price;
	string buyer_name;
	string location;
	string town;
	string phone;
	string area;
	string cnic;
};
void add()
{
	property prop;
	ofstream out;
	out.open("project.txt",ios::app);
	cout<<"Enter house number:";
	cin>>prop.house_no;
	out<<prop.house_no<<endl;
	cout<<"Enter Buyer name: ";
	getline(cin,prop.buyer_name);
	out<<prop.buyer_name<<endl;
	cout<<"Enter Location/Address: ";
	getline(cin,prop.location);
	out<<prop.location<<endl;
	cout<<"Enter Town name:";
	getline(cin,prop.town);
	out<<prop.town<<endl;
	cout<<"Enter Phone number:";
	getline(cin,prop.phone);
	out<<prop.phone;
	cout<<"Enter Area:";
	getline(cin,prop.area);
	out<<prop.area<<endl;
	cout<<"Enter price:";
	cin>>prop.price;
	out<<prop.price<<endl;
	cout<<"Enter CNIC number: ";
	getline(cin,prop.cnic);
	out<<prop.cnic<<endl<<endl<<endl;
	out.close();
}
void update()
{
	property prop;
	ifstream tdata;
	tdata.open("project.txt");
	while(!tdata.eof())
	{
		tdata>>prop.house_no;
		tdata>>prop.buyer_name;
		tdata>>prop.location;
		tdata>>prop.town;
		tdata>>prop.phone;
		tdata>>prop.area;
		tdata>>prop.price;
		tdata>>prop.cnic;
	}
}
 void delet()
{
	property prop;
	ifstream tdata;
	tdata.open("project.txt");
	int n;
	cout<<"Enter house no to delete record:";
	cin>>n;
	ofstream e;
	e.open("new.txt");
	tdata>>prop.house_no;
	tdata>>prop.buyer_name;
	tdata>>prop.location;
	tdata>>prop.town;
	tdata>>prop.phone;
	tdata>>prop.area;
	tdata>>prop.price;
	tdata>>prop.cnic;
	while(!tdata.eof())
	{
		if(prop.house_no!=n)
		{
			e<<prop.house_no<<endl;
			e<<prop.buyer_name<<endl;
			e<<prop.location<<endl;
			e<<prop.town<<endl;
			e<<prop.phone<<endl;
			e<<prop.area<<endl;
			e<<prop.price<<endl;
			e<<prop.cnic<<endl;	
		}
		else
		{
			cout<<endl<<"Record deleted:"<<endl;
		}
	tdata>>prop.house_no;
	tdata>>prop.buyer_name;
	tdata>>prop.location;
	tdata>>prop.town;
	tdata>>prop.phone;
	tdata>>prop.area;
	tdata>>prop.price;
	tdata>>prop.cnic;
	}
	e.close();
	tdata.close();
	remove("project.txt");
	rename("new.txt","project.txt");
}
void display()
{
	string line;
	ifstream in;
	in.open("project.txt");
	cout << "Reading from a text file:" << endl;   
   while (getline (in,line))  
	{  
   		cout << line << endl;  
	}      
   in.close();
   }
void search()
{
    int ch;
    string name;
    int house;
    property prop;
    cout << "(1). Search Property by Name" << endl
         << "(2). Search Property by Adress" << endl;
    cin >> ch;
    if (ch == 1 )
    {
        cout << "Enter Property Name : ";
        cin >> name;
    }
    if (ch == 2)
    {
        cout << "Enter Property Adress : ";
        cin >> house;
    }
    ifstream myfile("project.txt");
    myfile>>prop.house_no ;
	myfile>> prop.buyer_name;
	myfile >> prop.location ;
	myfile>> prop.town ;
	myfile>> prop.phone ;
	myfile>>prop.area;
	myfile >>prop.price;
	myfile >>prop.cnic;
    while (!myfile.eof())
    {
        if (name==prop.buyer_name)
        {
            cout << prop.house_no << "   " << prop.buyer_name << "   " << prop.location << "   " << prop.town << "   " <<prop.phone << "   " <<prop.area<< "   " <<prop.price<< "   " <<prop.cnic;
        }
    myfile>>prop.house_no ;
	myfile>> prop.buyer_name;
	myfile >> prop.location ;
	myfile>> prop.town ;
	myfile>> prop.phone ;
	myfile>>prop.area;
	myfile >>prop.price;
	myfile >>prop.cnic;
    }
    myfile.close();
}
int main()
{
	int choice;
	cout<<"\n\n\t***Property Dealer Mnagement System*\n\n"<<endl;
	cout<<"Enter your Choice from following:"<<endl;
	cout<<"Enter 1 for Manage Data"<<endl;
	cout<<"Enter 2 for Search Data"<<endl;
	cout<<"Enter 3 for Exit"<<endl;
	cin>>choice;
	if(choice==1)
	{
		int choose;
		cout<<"Press 1 to Add Data"<<endl;
		cout<<"Press 2 to Update Data"<<endl;
		cout<<"Press 3 to Delete Data"<<endl;
		cout<<"Press 4 to Display Data"<<endl;
		cin>>choose;
		switch(choose)
		{
			case 1:
				add();
				break;
			case 2:
				update();
				break;
			case 3:
				delet();
				break;
			case 4:
				display();
				break;
			default:
				cout<<"Invalid Choice"<<endl;
		}
	}
	if(choice==2)
	{
		search();
	}
}