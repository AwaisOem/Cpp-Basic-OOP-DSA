#include<iostream>
#include<iomanip>
using namespace std;
int main(){char a,b,c,d;
cout<<"Enter three values:    ";
cin>>a>>b>>c;
cout<<endl;
d=a;
a=b;
b=c;
c=d;
    cout<<setw(10)<<a<<endl<<setw(10)<<b<<endl<<setw(10)<<c<<endl;
  
   
   return 0;
}