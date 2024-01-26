#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){cout<<"Instructions:\nIf student is Present \"Press P\" and if student is Apsent \"Press A\"."<<endl;
cout<<endl;
  string sjt;
  cout<<"Enter the name of Subject:    ";
  cin>>sjt;
  cout<<endl;
  // array should be filled before running the program
 const  char* stud[51]={};
  
  
  char att[49];
  for(int i=0; i<=49;i++){cout<<"Attendence of \""<<stud[i]<<"\"        (P/A)        ";
      cin>>att[i];
      cout<<endl;
      if((att[i]=='P' || att[i]=='p')    ||    (att[i]=='A' || att[i]=='a')){continue;}else{cout<<"Invalid Plz Try Again:    ";
      cin>>att[i];cout<<endl;}}
 
      cout<<"\n\n\n\n";
   cout<<"**********************\"Attendence of "<<sjt<<"\"**********************";
   cout<<"\n\n";
   
   
   for(int i=0; i<=49;i++){
       
       cout<<left<<setw(21)<<setfill('-')<<stud[i];
//<<att[i]<<endl;
     if(att[i]=='A' || att[i]=='a'){cout<<setw(16)<<setfill('-')<<right<<"Apsent"<<endl;}
     else{
       cout<<setw(16)<<setfill('-')<<right<<"Present"<<endl;
       }
       
   }
   cout<<"\n\n\n\n";
   
   
   char disi;
   cout<<"Do you want to review Attendence:\t(Y/N)\t";cin>>disi;
   cout<<endl;
   if(disi=='Y' || disi=='y'){
   
    for(int i=0;i<=49;i++){
     if(att[i]=='A' || att[i]=='a'){
        cout<<"Attendence of \""<<stud[i]<<"\"        (P/A)        ";     
        cin>>att[i];
      cout<<endl;       
                 }else{continue;}}
      
      
   cout<<"\n\n\n\n";
   cout<<"**********************\"Attendence of "<<sjt<<"\"**********************";
   cout<<"\n\n";
   
   
   for(int i=0; i<=49;i++){
       
       cout<<left<<setw(21)<<setfill('-')<<stud[i];
//<<att[i]<<endl;
     if(att[i]=='A'){cout<<setw(16)<<setfill('-')<<right<<"Apsent"<<endl;}
     else{
       cout<<setw(16)<<setfill('-')<<right<<"Present"<<endl;
       }
       
   }
   cout<<"\n\n\n\n";
   }
       cout<<"\n\n\n\n";
       char disi2;
   cout<<"Do you want to Copy Array: (Y/N) ";cin>>disi2;
   if(disi2=='Y' || disi2=='y'){
       cout<<"\n\n\n\n";
       system("cls");
       cout<<"Copy the array and paste it in main project 023\n\n\n";
cout<<"char att1[]={\'";
for(int e=0;e<=49;e++){
   cout<<att[e]<<"\'\,\'";}
   cout<<"\b\b}"<<endl;}else{
       char disi3;
       cout<<"\n\n\n\n";
       cout<<"Are you sure? (Y/N)    ";
       cin>>disi3;
  if(disi3=='N' || disi3=='n'){
         cout<<"\n\n\n\n";
       system("cls");
       cout<<"Copy the array and paste it in main project 023\n\n\n";
cout<<"char att1[]={\'";
for(int e=0;e<=49;e++){
   cout<<att[e]<<"\'\,\'";}
   cout<<"\b\b}"<<endl;  }
       }
   
   return 0;
}