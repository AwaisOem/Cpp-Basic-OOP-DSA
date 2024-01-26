#include<iostream>
#include<iomanip>
using namespace std;
int main(){char c;
   int dh,hours,mints=0, sec=0;
   cout<<"Enter current time(hh:mm):    ";
   cin>>dh>>c>>hours;
   cout<<endl;
 while(true){
 for(int i=0;i<60;i++){
    sec+=1;
 if(sec>80){
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
    cout<<"\n\n\n\n";}};
       return 0;}