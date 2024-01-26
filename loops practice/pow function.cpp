#include<iostream>
using namespace std;
int main(){
   
   float n,pow;
   //square
cout<<"Enter any number:    ";
   cin>>n;
 cout<<"Enter the power:    "; 
   cin>>pow;
   float sq(1);
for(float i=1;i<=pow;i++){
    sq=sq*n;}
    cout<<endl;
 cout<<".    "<<n<<"^"<<pow<<" = "<<sq;
   
   return 0;
}