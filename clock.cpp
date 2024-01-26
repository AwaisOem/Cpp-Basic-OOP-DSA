#include<iostream>
#include<iomanip>
using namespace std;
//for countdown
void cd(){char c,j;
    int h,m,s,e=70;
    cout<<"Enter countdown time(hh:mm:ss):    ";
   cin>>h>>c>>m>>j>>s;
   cout<<endl;
    do{for(int i=1;i<=59;i++){ 
    e-=1;  
    if(e<0){s-=1; e=69;}
    if(s<0){m-=1; s=59;}
    if(m<0){h-=1; m=59;}
    system("cls");
  cout<<"\n\n\n\n"; cout<<setw(30)<<h<<c<<m<<j<<s;cout<<":"<<e;
    cout<<"\n\n\n\n";}}while(true);
          }
          
          
          
//for normal time



void nt(){
    char c;
   int dh,hours,mints=0, sec=0;
   cout<<"Enter current time(hh:mm):    ";
   cin>>dh>>c>>hours;
   cout<<endl;
 while(true){
 for(int i=0;i<60;i++){
    sec+=1;
 if(sec>70){
     ++mints;
     sec=0;}
 if(mints>59){
     ++hours;
      mints=0;}
 if(hours>59){
     ++dh;
      hours=0;}
    system("cls");
       cout<<"\n\n\n\n"; cout<<setw(30)<<dh<<c<<hours<<c<<mints; // cout<<":"<<sec;
    cout<<"\n\n\n\n";}};
    }

//for stopwatch
void sw(){
    //char c;
   int dh=0,hours=0,mints=0, sec=0;
   //cout<<"Enter current time(hh:mm):    ";
//   cin>>dh>>c>>hours;
//   cout<<endl;
 while(true){
 for(int i=0;i<60;i++){
    sec+=1;
 if(sec>70){
     ++mints;
     sec=0;}
 if(mints>59){
     ++hours;
      mints=0;}
 if(hours>59){
     ++dh;
      hours=0;}
    system("cls");
       cout<<"\n\n\n\n"; cout<<setw(30)<<dh<<":"<<hours<<":"<<mints; // cout<<":"<<sec;
    cout<<"\n\n\n\n";}};}





//main

int main(){char k;
    
    cout<<"Press 1 for normal time..."<<endl;
    cout<<"Press 2 for stopwatch..."<<endl;
cout<<"Press 3 for countdown..."<<endl;
cout<<endl;
cout<<"Enter the value:    ";cin>>k;
cout<<endl;


switch(k){
    case '1':nt();break;
    case '2':sw();break;
    case '3':cd();break;
    default : cout<<"Plz enter any valid value😊";cin>>k;};


  
  
   
   return 0;
}