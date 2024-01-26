#include<iostream>
using namespace std;
int main(){
   float n;
  //factorial
cout<<"Enter the number:    ";
  cin>>n;
  float fac=1;
  for(float i=1;i<=n;i++){
    fac*=i;}
    
cout<<"Here is factorial of this number:    "<<fac;


   
   return 0;
}