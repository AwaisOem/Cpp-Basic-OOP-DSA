#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
using namespace std;


struct medicine{
	string name;
	string formula;
	int price;
    int expiry_date;
	int code;
};

void main_menu();
void manage();
void search();
void reports();
void exit();
void adddata();
void updatedata();
void deletedata();
void displaydata();
void dexit();
void expiredm();



int main()
{
main_menu();
   return 0;
}
void main_menu() {
 system("cls");
  int ch;
	system("color A");
cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<"Enter 1 to 4 for required feild....."<<endl<<endl;
cout<<"1) Manage data"<<endl;
cout<<"2) Search"<<endl;
cout<<"3) Reports"<<endl;
cout<<"4) Exit"<<endl;
cin>>ch;
if(ch==1)
{system("cls");
 manage();
}
else if(ch==2)
{  system("cls");  
   search();
}
else if(ch==3)
{  system("cls");  
   reports();
}
else if(ch==4)
{  system("cls");  
   exit();
}

}
void manage()
{  char B;
		system("color F");
cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______MANAGE DATA_______ "<<endl<<endl;
cout<<endl;
cout<<"Enter a to e for required feild....."<<endl<<endl;
cout<<"a) Add data"<<endl;
cout<<"b) Update data"<<endl;
cout<<"c) Delete data"<<endl;
cout<<"d) Display"<<endl;
cout<<"e) Exit"<<endl;

cin>>B;
cout<<"Enter:";
if(B=='a')
{system("cls");
 adddata();
}
else if(B=='b')
{  system("cls");  
   updatedata();
}
else if(B=='c')
{  system("cls");  
  deletedata();
}
else if(B=='d')
{  system("cls");  
  displaydata();
  }
  else if(B=='e')
{  system("cls");  
  dexit();
  }
}
void search(){
	loop:
	char ch;
			system("color E");
cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______SEARCH_______ "<<endl<<endl;
cout<<endl;
int cde;
string new_b_n;
string mf;
medicine obj;
	
cout<<"Enter a to d for required feild....."<<endl<<endl;
cout<<"a) Search medicine through name"<<endl;
cout<<"b) Search medicine through formula"<<endl;
cout<<"c) Search medicine through code"<<endl;
cout<<"d) Exit"<<endl;

    cin>>ch;
if(ch=='a'){
	system("cls");
	cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______SEARCH_______ "<<endl<<endl;
cout<<endl;
    cout<<"Enter medicine Name : ";
    cin>>new_b_n;
    }
 if(ch=='b'){
 system("cls");
	cout << endl << endl;
	cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______SEARCH_______ "<<endl<<endl;
cout<<endl;
cout<<"Enter medicine formula : ";
    cin>>mf;
 }
  if(ch=='c'){
  	system("cls");
	cout << endl << endl;
	cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______SEARCH_______ "<<endl<<endl;
cout<<endl;
cout<<"Enter medicine code : ";
    cin>>cde;
 }
  if(ch=='d'){
  	int n;
  	system("cls");
	cout << endl << endl;
	cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______SEARCH_______ "<<endl<<endl;
cout<<endl;
cout<<"press 1 enter in main menu:";
cin>>n;
main_menu();
 }
 
	    ifstream medi("medicine.txt");
	
while(medi>>obj.name>>obj.formula>>obj.price>>obj.expiry_date>>obj.code){
		system("cls");
	cout << endl << endl;
	 cout<<"UOS Library Managment System "<<endl<<endl;
  cout<<"Name"<<"   "<<"Formula"<<"   "<<"Price"<<"   "<<"Expiry date"<<"   "<<"code"<<"   "<<endl;

if(cde==obj.code){

     cout<<obj.name<<"    "<<obj.formula<<"      "<<obj.price<<"      "<<obj.expiry_date<<"             "<<obj.code<<""<<endl;
}
else if(new_b_n==obj.name){

        cout<<obj.name<<"    "<<obj.formula<<"      "<<obj.price<<"      "<<obj.expiry_date<<"             "<<obj.code<<""<<endl;
}
else if(mf==obj.formula){

cout<<obj.name<<"    "<<obj.formula<<"      "<<obj.price<<"      "<<obj.expiry_date<<"             "<<obj.code<<""<<endl;
}}

medi.close();
 int h;
 cout<<endl<<endl;
cout<<"---------------------------------------------------------------------------------------------"<<endl<<endl;
cout<<endl<<endl;
cout<<"(1). Search another medicine "<<"   "<<"(2).Return main menu"<<endl;
cin>>h;
if(h==1)
{

    system("cls") ;
	goto loop;
}
if(h==2)
  {
system("cls");
   main_menu();

}}

	

////////////////////////////////////////////////
//////////////////////////////////////////////////
/////////////////Reports/////////////////
/////////////////////////////////////////////////
///////////////////////////////////////
void reports(){
	char z;
		system("color 5");
cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______REPORTS_______ "<<endl<<endl;
cout<<endl;
cout<<"Enter a to c to check....."<<endl<<endl;
cout<<"a) Expired medicines "<<endl;
cout<<"b) Exit"<<endl<<endl;
cin>>z;
if(z=='a'){
	system("cls");
	expiredm();
}
else if(z=='b'){
	system("cls");
	int a;
	cout<<"press 1 for main menu:"<<endl;
	cin>>a;
	if(a==1){
		main_menu();
	}

}
}
////////////////////////////////////////////////
//////////////////////////////////////////////////
/////////////////EXIT/////////////////
/////////////////////////////////////////////////
///////////////////////////////////////
void exit(){
	exit();
}
////////////////////////////////////////////////
//////////////////////////////////////////////////
/////////////////ADD DATA/////////////////
/////////////////////////////////////////////////
///////////////////////////////////////
void adddata(){
	loop:
cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______ADD DATA_______ "<<endl<<endl; 
   char ch;
   medicine obj;
ofstream myfile("medicine.txt" , ios::app);
cout<<"Enter name of medicine:";
	cin>>obj.name;
	cout<<"Enter Formula of medicine:";
	cin>>obj.formula;
	cout<<"Enter price of medicine:";
	cin>>obj.price;
	cout<<"Enter expiry year(i.e 2019) of medicine:";
	cin>>obj.expiry_date;
	cout<<"Enter unique code of medicine:";
	cin>>obj.code;
	  cout<<"Do you want to add medicine in formation (Y/N): "<<endl;
    cin>>ch;
       cout<<"----------------------------------------------------------------------------------"<<endl<<endl;
    myfile<<obj.name<<"   "<<obj.formula<<"   "<<obj.price<<"   "<<obj.expiry_date<<"   "<<obj.code<<"   "<<endl;
    myfile.close();

    if(ch=='Y' || ch=='y'){
    
	cout << endl << endl;
  cout<< "This medicine is added succesfully. "<<endl;
    }
    if(ch=='N' || ch=='n'){
        cout<< "information cancelled.";
    }
     
     
 int b;
cout<<"---------------------------------------------------------------------------------------------"<<endl<<endl;
cout<<endl<<endl;
cout<<"(1).Add another Medicine "<<"   "<<"(2).Return main menu"<<endl;
cin>>b;
if(b==1)
{

    system("cls") ;
	goto loop;
}
if(b==2)
  {
system("cls");
   main_menu();
}}
void updatedata(){
	loop:
	system("Color D");
system("cls");
cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______update DATA_______ "<<endl<<endl; 
 int choice;
int cde;
char new_b_n[100];
char mf[100];
int expiry;
medicine obj;
	cout<<"Search the Book which you want to Edit(modify)"<<endl<<endl;
	cout<<"Select option from 1 to 4 "<<endl;
    cout<<"(1) code"<<endl<<"(2) Name"<<endl<<"(3) formula"<<endl<<"(4)expiry"<<endl;

cin>>choice;
if(choice==1){
    cout<<"Enter ISBN : ";
    cin>>cde;
    }
 if(choice==2){
    cout<<"Enter formula Name : ";
    cin>>mf;
 }
  if(choice==3){
    cout<<"Enter  Nmae : ";
    cin>>new_b_n;
 }
 
  if(choice==4){
    cout<<"Enter expiry year(i.e 2019) : ";
    cin>>expiry;
 }
ifstream mdfile("medicine.txt");
ofstream um("u_medicine.txt");

while(mdfile>>obj.code>>obj.name>>obj.formula>>obj.price>>obj.expiry_date){

    if(cde==obj.code ){
	
//	|| strcmp(obj.name , new_b_n )==0 || strcmp(mf , obj.formula)==0|| strcmp(expiry , obj.expiry_date)==0){
    cout<<"Enter NEW Name : ";
    cin>>obj.name;
    cout<<"Enter code : ";
    cin>>obj.code;
    cout<<"Enter formula : ";
    cin>>obj.formula;
    cout<<"Enter Price : ";
    cin>>obj.price;
    cout<<" Date of expiry : ";
    cin>>obj.expiry_date;
    }
    else if(obj.name==new_b_n){
    	cout<<"Enter NEW Name : ";
    cin>>obj.name;
    cout<<"Enter code : ";
    cin>>obj.code;
    cout<<"Enter formula : ";
    cin>>obj.formula;
    cout<<"Enter Price : ";
    cin>>obj.price;
    cout<<" Date of expiry : ";
    cin>>obj.expiry_date;
    	
	}
	  else if(mf==obj.formula){
    	cout<<"Enter NEW Name : ";
    cin>>obj.name;
    cout<<"Enter code : ";
    cin>>obj.code;
    cout<<"Enter formula : ";
    cin>>obj.formula;
    cout<<"Enter Price : ";
    cin>>obj.price;
    cout<<" Date of expiry : ";
    cin>>obj.expiry_date;
    	
	}else if(expiry == obj.expiry_date){
	
	 
    	cout<<"Enter NEW Name : ";
    cin>>obj.name;
    cout<<"Enter code : ";
    cin>>obj.code;
    cout<<"Enter formula : ";
    cin>>obj.formula;
    cout<<"Enter Price : ";
    cin>>obj.price;
    cout<<" Date of expiry : ";
    cin>>obj.expiry_date;
    }
        um.close();
        mdfile.close();
          remove( "medicine.txt" ) ;
      rename( "u_medicine.txt"  ,  "medicine.txt" );
}     int ch;
      cout<<"The book data is succeefully Edited..."<<endl;
 int b;
cout<<"---------------------------------------------------------------------------------------------"<<endl<<endl;
cout<<endl<<endl;
cout<<"(1).Edit another book "<<"   "<<"(2).Return main menu"<<endl;
cin>>b;
if(b==1)
{

    system("cls") ;
	goto loop;
}
if(b==2)
  {
system("cls");
   main_menu();
} }
////////////////////////////////////////////////
//////////////////////////////////////////////////
/////////////////delete DATA/////////////////
/////////////////////////////////////////////////
///////////////////////////////////////
void deletedata(){
	loop:
		cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______delete DATA_______ "<<endl<<endl; 
 
	int choice;
int cde;
string new_b_n;
string mf;
string expiry;
medicine obj;
	cout<<"Search the Book which you want to Edit(modify)"<<endl<<endl;
	cout<<"Select option from 1 to 4 "<<endl;
    cout<<"(1) code"<<endl<<"(2) Name"<<endl<<"(3) formula"<<endl<<"(4)expiry"<<endl;

cin>>choice;
if(choice==1){
    cout<<"Enter code: ";
    cin>>cde;
    } if(choice==2){
    cout<<"Enter  Name : ";
    cin>>new_b_n;
 if(choice==3){
    cout<<"Enter formula Name : ";
    cin>>mf;
 }
 
  if(choice==4){
    cout<<"Enter expiry date : ";
    cin>>expiry;
 }
	
	
	ifstream file("medicine.txt");
ofstream edit("u_medicine.txt");
while(file>>obj.name>>obj.formula>>obj.price>>obj.expiry_date>>obj.code){
//if(strcmp(new_b_n,obj.name)!=0){ //here its mean that if given isbn is not equal to stored book isbn then print these books as it is
                         //and if it match then delete this book

        
}
       edit.close();
	           file.close();
         if( remove( "medicine.txt" ) != 0){
        cout<<"File not removed " <<endl;}
      else if(rename( "u_medicine.txt"  ,  "medicie.txt" ) !=0 ){
      cout<<"file not renamed "<<endl;}
       else{
      cout<<"The data is successfully Deleted"<<endl<<endl;
       int b;
cout<<"---------------------------------------------------------------------------------------------"<<endl<<endl;
cout<<endl<<endl;
cout<<"(1).Delete another book "<<"   "<<"(2).Return main menu"<<endl;
cin>>b;
if(b==1)
{
    system("cls") ;
	goto loop;
}
if(b==2)
  {
system("cls");
   main_menu();

}}}}
////////////////////////////////////////////////
//////////////////////////////////////////////////
/////////////////display DATA/////////////////
/////////////////////////////////////////////////
///////////////////////////////////////
   void displaydata(){
   char ch;
   	cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______Display DATA_______ "<<endl<<endl; 
medicine obj;
 cout<<"Name"<<"   "<<"Formula"<<"   "<<"Price"<<"   "<<"Expiry date"<<"   "<<"code"<<"   "<<endl;
ifstream openfile("medicine.txt");
while(openfile>>obj.name>>obj.formula>>obj.price>>obj.expiry_date>>obj.code){
    cout<<obj.name<<"   "<<obj.formula<<"   "<<obj.price<<"   "<<obj.expiry_date<<"   "<<obj.code<<endl;

}
openfile.close();
cout<<"\n\n\nPress R to Go Back to main_menu"<<endl;
cin>>ch;
if(ch=='r' || ch=='R'){
	system("cls");
    main_menu();

   }}
   

   void dexit(){
   	main_menu();
   }
   
   void expiredm(){
   	int tdate;
   	 	cout<<endl<<endl;
cout<<" ______Medicine inventory system_______ "<<endl<<endl;
cout<<endl;
cout<<" ______Expired Medicine_______ "<<endl<<endl; 
medicine obj;

    cout<<"Please enter current year(i.e 2019):"<<endl;
    cin>>tdate;
    if(tdate>obj.expiry_date){
    	cout<<"The expired medicines are:"<<endl;
    	cout<<"Name"<<"   "<<"Formula"<<"   "<<"Price"<<"   "<<"Expiry date"<<"   "<<"code"<<"   "<<endl;
ifstream openfile("medicine.txt");
while(openfile>>obj.name>>obj.formula>>obj.price>>obj.expiry_date>>obj.code){
    cout<<obj.name<<"       "<<obj.formula<<"       "<<obj.price<<"      "<<obj.expiry_date<<"     "<<obj.code<<endl;

}char ch;
openfile.close();
cout<<"\n\n\nPress R to Go Back to main_menu"<<endl;
cin>>ch;
if(ch=='r' || ch=='R'){
	system("cls");
    main_menu();

	} 

}
   else
   cout<<"no medicine found.";
   }