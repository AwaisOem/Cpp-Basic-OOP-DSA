// A mail order house sells five different products whose retail prices are:
// Product 1 — 2.98,
// Product 2— 4.50
// Product 3— 9.98
// Product 4— 4.49
// Product 5— 6.87.
// Write a program that reads a pair of numbers as follows:
// a) Product number
// b) Quantity sold for one day
// Your program should use a switch statement to help determine the retail price for each
// product. (total price=retail price*quantity sold)
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
    cout<<"Total price is:  ";
if(a==1)
    cout<<2.98*b<<endl;
else if(a==2)
    cout<<4.50*b<<endl;
else if(a==3)
    cout<<9.98*b<<endl;
else if(a==4)
    cout<<4.49*b<<endl;
else if(a==5)
    cout<<6.87*b<<endl;
else
cout<<endl<<"Invalid product number...."<<endl;



 return 0;   
}