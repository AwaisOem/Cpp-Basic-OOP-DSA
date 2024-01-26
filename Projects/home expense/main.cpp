#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
#include<fstream>
#include<conio.h>
using namespace std;
void add_data();
void menu();
void edit_data();
void delet_data();
void manage_data();
void display_by_month();
void display_all();
void prog_to_file();
void file_to_prog();
void report();

struct expense{
string month;
int income;
int gros_exp;
int edu_exp;
int bill_exp;
 int med_exp;
 float misc;
 float tax;
 float total_exp;
 int save;
 void setdata(string m,int inc,int ge,int ed,int me,float mi,float tx,float te,int sv)
 {
 	 month=m;
	 income=inc;
	 gros_exp=ge;
	 edu_exp=ed;
	 med_exp=me;
	 misc=mi;
	 tax=tx;
	 total_exp=te;
	 save=sv;
 }
 };



 expense a[100];
 int c;
 void menu()
 {
 	int choice=0;
    system("cls");
     cout<<"\n\t\tMain Menu\n";
     cout<<"\n 1: Add expense";
     cout<<"\n 2: Manage Data";
     cout<<"\n 3: Report";
    cout<<"\n 4: Exit\n\n";
    cin>>choice;
switch(choice)
{
case 1:
    {
        system("cls");
        add_data();
        break;
    }
case 2:
    {
        system("cls");
        manage_data(); 
        break;
    }
case 3:
    {
        system("cls");
        report();
        break;
    }
case 4:
    {
    	prog_to_file();
         exit(1);
         break;
    }
}
 }


void add_data()
 {   char ch;
  do
  {
   int inc,gross,edu,bill,med,misc,tax,total,save;
   string m;

   cout<<"\n enter month \n";
   cin>>m;
   cout<<"\n Enter total income \n";
   cin>>inc;
   cout<<"\n Enter Total Groceries Expenses \n ";
   cin>>gross;
   cout<<"\n Enter Educational expenses \n ";
   cin>>edu;
   cout<<"\n Enter Bills Expenses \n";
   cin>>bill;
    cout<<"\n Enter Medical Expenses \n ";
    cin>>med;
    cout<<"\n Enter Other Expenses \n ";
     cin>>misc;
     cout<<"\n Enter Tax Paid \n ";
     cin>>tax;
     total=gross+edu+bill+med+misc+tax;
     save=inc-total;
      cout<<"\n Do you Want to add it? press (y or n ) \n";
     cin>>ch;
     if(ch=='y')
     {
         a[c].month=m;
         a[c].income=inc;
         a[c].edu_exp=edu;
         a[c].bill_exp=bill;
         a[c].med_exp=med;
         a[c].misc=misc;
         a[c].tax=tax;
         a[c].total_exp=total;
         a[c].save=save;
         c++;
     }
     cout<<"\n do you want to add another month expenses press(y or n) \n";
     cin>>ch;
  }
  while(ch=='y');
  menu();
  }



void edit_data()
{   int f=-1;
    string m;
    cout<<"\n Enter MOnth To edit Data \n";
    cin>>m;
    for(int i=0; i<c; i++)
    {
        if(m==a[i].month){
            f=i;break;
        }
    }
    if(f!=-1)
    {
    int inc,gross,edu,bill,med,misc,tax,total,save;
   string m;
   char ch;

   cout<<"\n enter month \n";
   cin>>m;
   cout<<"\n Enter total income \n";
   cin>>inc;
   cout<<"\n Enter Total Groceries Expenses \n ";
   cin>>gross;
   cout<<"\n Enter Educational expenses \n ";
   cin>>edu;
   cout<<"\n Enter Bills Expenses \n";
   cin>>bill;
    cout<<"\n Enter Medical Expenses \n ";
    cin>>med;
    cout<<"\n Enter Other Expenses \n ";
     cin>>misc;
     cout<<"\n Enter Tax Paid \n ";
     cin>>tax;
     total=gross+edu+bill+med+misc+tax;
     save=inc-total;
      cout<<"\n Do you Want to store it? press (y or n ) \n";
     cin>>ch;
     if(ch=='y')
     {
         a[f].month=m;
         a[f].income=inc;
         a[f].edu_exp=edu;
         a[f].bill_exp=bill;
         a[f].med_exp=med;
         a[f].misc=misc;
         a[f].tax=tax;
         a[f].total_exp=total;
         a[f].save=save;
     }
    }
    else{
        cout<<"Don't found...............\n";
    }
cout<<"Enter key to continue.....\n";
cin.get();
cin.ignore();
menu();
  }


    void delet_data()
    {
       int f=-1;
    string m;
    cout<<"\n Enter MOnth To delete Data \n";
    cin>>m;
    for(int i=0; i<c; i++)
    {
        if(m==a[i].month)

            {
                f=i;
                break;
            }
    }
              if(f!=-1)
              {
                  for(int j=f;j<c-1; j++)
                  {
                      a[j]=a[j+1];
                  }
                  c--;
              }
              if(f==-1)
              {
                  cout<<"\n Data Does not Found \n ";
              }
cout<<"Enter key to continue.....\n";
cin.get();
cin.ignore();
menu();
}
void manage_data()
{
        system("cls");

    int a;
    cout<<"\n 1: Edit Data \n";
    cout<<"\n 2: Delete Data \n";
    cout<<"\n 3: Back \n";
    cin>>a;
    switch(a)
    {
    case 1:
        {
          edit_data();
          break;
        }
    case 2:
        {
            delet_data();
            break;
        }
    case 3:
       {
            menu();
        break;
    }

}
}
void display_by_month()
{
     int f=-1;
    string m;
    cout<<"\n Enter MOnth To see expences \n";
    cin>>m;
    for(int i=0; i<c; i++)
    {
        if(m==a[i].month)
            f=i;

    }
    if(f!=-1)
    {
    	cout<<"\n\n\nHome Expense Management System \n\n\n";
        cout.flags(ios::left);
     cout<<setw(7)<<"Month"<<setw(10)<<"income"<<setw(17)<<"Grocery_Expense"<<setw(22)<<"Educational_Expenses"<<setw(15)<<"Bill_Expense"<<setw(20)<<"Medical_Expenses"<<setw(10)<<"Tax"<<setw(17)<<"Total_Expenses "<<setw(10)<<"Saving"<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------------------\n";
		for(int i=0;i<c;i++)
        {
            cout<<setw(7)<<a[i].month<<setw(10)<<a[i].income<<setw(17)<<a[i].gros_exp<<setw(22)<<a[i].edu_exp<<setw(15)<<a[i].bill_exp<<setw(20)<<a[i].med_exp<<setw(10)<<a[i].tax<<setw(17)<<a[i].total_exp<<setw(10)<<a[i].save<<endl;
        }
    }
     else{
        cout<<"Don't found...............\n";
    }
    cout<<"Enter key to continue.....\n";
cin.get();
cin.ignore();
report();
}
void display_all()
      {
        cout<<"\n\n\nHome Expense Management System \n\n\n";
        cout.flags(ios::left);
        cout<<setw(7)<<"Month"<<setw(10)<<"income"<<setw(17)<<"Grocery_Expense"<<setw(22)<<"Educational_Expenses"<<setw(15)<<"Bill_Expense"<<setw(20)<<"Medical_Expenses"<<setw(10)<<"Tax"<<setw(17)<<"Total_Expenses "<<setw(10)<<"Saving"<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------------------\n";
		for(int i=0;i<c;i++)
        {
            cout<<setw(7)<<a[i].month<<setw(10)<<a[i].income<<setw(17)<<a[i].gros_exp<<setw(22)<<a[i].edu_exp<<setw(15)<<a[i].bill_exp<<setw(20)<<a[i].med_exp<<setw(10)<<a[i].tax<<setw(17)<<a[i].total_exp<<setw(10)<<a[i].save<<endl;
        }
        cout<<"Enter key to continue.....\n";
cin.get();
cin.ignore();
report();
}
void report()
{
        system("cls");

    int b;
    cout<<"\n 1: show data BY Month \n";
    cout<<"\n 2: Show All \n";
    cout<<"\n 3: Back \n";
    cin>>b;
    switch(b)
    {
    case 1:
        {
            system("cls");
            display_by_month();
            break;
        }
    case 2:
        {        
            system("cls");
            display_all();
            break;
        }
    case 3:
    {
            menu();
            break;
        }
    }
}
    void file_to_prog(){
	ifstream fil;
	fil.open("Expense.txt",ios::in);
	c = 0;
	string m;
	int inc;
	int ge;
	int ed;
	int me;
	float mi;
	float tx;
	float te;
	int sv;
	if (fil.is_open())
	{
		while (fil>>m>>inc>>ge>>ed>>me>>mi>>tx>>te>>sv)
		{
		a[c].month=m;
		a[c].income=inc;
		a[c].gros_exp=ge;
		a[c].edu_exp=ed;
		a[c].med_exp=me;
		a[c].misc=mi;
		a[c].tax=tx;
		a[c].total_exp=te;
		a[c].save=sv;
		c++;
		}
	}
	else{
		cout<<"Error to open file................"<<endl;
	}
	fil.close();
}
void prog_to_file(){
	ofstream fil;
	fil.open("Expense.txt",ios::app);
	if (fil.is_open())
	{
		for (int i = 0; i <c; i++)
		{
		fil<<a[i].month<<" "<<a[i].income<<" "<<a[i].gros_exp<<" "<<a[i].edu_exp<<" "<<a[i].med_exp<<" "<<a[i].misc<<" "<<a[i].tax<<" "<<a[i].total_exp<<" "<<a[i].save;
				}
	}
	else{
		cout<<"Error to open file................"<<endl;
	}
	fil.close();
}
int main()
{
file_to_prog();
menu();
prog_to_file();
    return 0;
}
