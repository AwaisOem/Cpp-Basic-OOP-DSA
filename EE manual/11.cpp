// Departmental store offers 20 % discount on shopping of 10,000 Rs. 10 % discount on
// shopping of 5000 Rs. and no discount on shopping of less than 5000 Rs. Write a program that
// accepts total bill of buyer as input and calculates amount to be paid after applying discount
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int a;
cin>>a;
float dis;
if (a>=10000)
{
    dis=(20*a)/100.0;
}
else if(a>=5000)
{
    dis=(10*a)/100.0;
    
}
else
{
    dis=0;
}

cout<<"Bill:    "<<a-dis<<endl;

 return 0;   
}