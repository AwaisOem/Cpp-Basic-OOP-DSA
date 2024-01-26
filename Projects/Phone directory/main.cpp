#include<iostream>
using namespace std;
#define max 50
 struct customer
 {
 	string name;
 	long int id;
 	long int telephonenumber;
 	string adress;
 };
 customer cs[max];
void mainmenu ();
int n=0;
 void add();
 void insertdata();
 void  searchdata();
  void deletedata();
  void report();
   void deleteindex(int i);
    void prog_to_file();
 void file_to_prog();
int main ()
{
     file_to_prog();
    mainmenu();
     prog_to_file();
    return 0;
}
void mainmenu ()
{
system("cls");
int op;
    cout<<"*********************TELEPHONE DIRECTORY SYSTEM*******************************\n\n";
    cout<<"select one option from the following\n\n";
    cout<<"1==> Add records\n\n";
    cout<<"2==> Insert new record\n\n";
    cout<<"3==> Search the customer by telephone number\n\n";
    cout<<"4==> Delete customer record\n\n";
    cout<<"5==> Reports\n\n";
    cout<<"6==> Exit the Program\n\n";
    cin>>op;
    if(op==1)
    {
        add();
    }
else if(op==2)
{
    insertdata();
}
else if(op==3)
{
    searchdata();
}
else if(op==4){
    deletedata();
}
else if(op==5)
{
    report();
}
else if(op==6){
    return;
}
else{
cout<<"invalid option valid options are 1,2,3,4,5,6\n\n";
}

}

void add()
{
       cout<<"you can enter maximum"<<"  "<<max<<"   "<<"records"<<"\n\n";
    cout<<"enter the required number of records\n\n";
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cout<<"name\n";
     cin>>cs[i].name;
 	cout<<"Customer id\n";
 	cin>>cs[i].id;
 	cout<<"customer telephonenumber\n";
 	cin>>cs[i].telephonenumber;
 	cout<<"customer address\n";
 	cin>>cs[i].adress;


    }
mainmenu ();
}

void insertdata()
{
	if(n<max){
		int i=n;
		n++;
    cout<<"name\n";
     cin>>cs[i].name;
 	cout<<"customer id\n";
 	cin>>cs[i].id;
 	cout<<"customer telephonenumber\n";
 	cin>>cs[i].telephonenumber;
 	cout<<"customer address\n";
 	cin>>cs[i].adress;

}
else {
cout<<"Customer table full\n";

}
mainmenu();
}
void deletedata()
{
	cout<<"enter the customer id to delete record\n\n";
	int id;
	cin>>id;
	for(int i=0;i<n;i++)
	{
	if(cs[i].id==id);
		deleteindex(i);
	n--;
	break;

}
mainmenu();
	}
void deleteindex(int i){

    	for(int j=i;j<n-1;j++)
	{
		cs[j].name=cs[j+1].name;
    	cs[j].id=cs[j+1].id;
    	cs[j].telephonenumber=cs[j+1].telephonenumber;
	}
	return;
}
 void  searchdata()

     {
	cout<<"\nenter the customer id to search record\n\n";
	int id;
	cin>>id;
	int x=-1;
	for(int i=0;i<n;i++){
		if (cs[i].id==id){
				cout<<"                         YOUR RECORD FOUND\n\n";
			cout<<"name = "<<cs[i].name<<endl;
			cout<<"id = "<<cs[i].id<<endl;
			cout<<"telephone number = "<<cs[i].telephonenumber;
		    x=0;

		}
	}
		if(x==-1)
	cout<<"                                      RECORD NOT FOUND\n";
	mainmenu();}
void report()
{

cout<<"record of total employees working in the company\n\n";
for(int i=0;i<n;i++)
{
		cout<<"name = "<<cs[i].name<<endl;
			cout<<"id = "<<cs[i].id<<endl;
			cout<<"telephone number = "<<cs[i].telephonenumber;
		    cout<<"\n\n";
}

            mainmenu();
}
void file_to_prog(){
	ifstream fil;
	fil.open("customer.txt");
	int i = 0;
	if (fil.is_open())
	{
		while (!fil.eof())
		{
		fil>>cs[i].name>>cs[i].id<<" "<<cs[i].telephonenumber<<" "<<cs[i].adress;;
		i++;
		}
        n=i;
	}
	else{
		cout<<"Error to open file................"<<endl;
	}
	fil.close();
}
void prog_to_file(){
	ofstream fil;
	fil.open("customer.txt");
	if (fil.is_open())
	{
		for (int i = 0; i < n; i++)
		{
		fil<<cs[i].name<<" "<<cs[i].id<<" "<<cs[i].telephonenumber<<" "<<cs[i].adress<<endl;
				}
	}
	else{
		cout<<"Error to open file................"<<endl;
	}
	fil.close();
}

