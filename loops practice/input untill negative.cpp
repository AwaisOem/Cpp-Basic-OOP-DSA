#include<iostream>
using namespace std;
int main(){
  
  /*Write a program to keep asking for a number until you enter a negative number. At the end, print the sum of all entered numbers*/
  
int n,sum(0);
  do{
      cout<<"Enter the number: ";
      cin>>n;
      sum+=n; 
  }while(n>0);
  
  cout<<"Here is sum of numbers:    "<<sum;
   return 0;
}