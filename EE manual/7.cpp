#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int x,y;
cin>>x>>y;
cout<<"Enter opreter:   ";
cout<<"Enter + for plus."<<endl;
cout<<"Enter - for minus."<<endl;
cout<<"Enter * for product."<<endl;
cout<<"Enter / for divid."<<endl;
char op;
cin>>op;
cout<<"Do you wish to continue?(y or n):    "<<endl;
char c;cin>>c;
if (c=='y' || c=='Y')
{
if(op=='+')
    cout<<x+y<<endl;
 
else if(op=='-')
    cout<<x-y<<endl;
   
else if(op=='*')
    cout<<x*y<<endl;
else if(op=='/')
    cout<<x/y<<endl;
else
cout<<"invalid choice"<<endl;
}

 return 0;   
}