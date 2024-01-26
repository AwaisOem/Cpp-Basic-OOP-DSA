#include<iostream>
using namespace std;
int main(){ int year;
  cout<<"Enter the Year:    ";
  cin>>year;
  cout<<endl;
  if(year%4==0 && year%100!=0){
    cout<<"Its a leap year";
   }else{
  if(year%100==0 && year%400==0){
          cout<<"Its a leap year";}else{cout<<"Its Not a leap year....";}}
   return 0;
}