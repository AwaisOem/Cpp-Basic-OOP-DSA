#include<iostream>
using namespace std;
int main(){int age;
cout<<"Input Your age:    ";cin>>age;cout<<endl;
int d=age*365;
int m=age*12;
int mi=age*525600;
int h=age*8760;
long int s=age*31536000;

cout<<"Age In Months:    "<<m<<endl;
cout<<"Age In Days:    "<<d<<endl;
cout<<"Age In Hours:    "<<h<<endl;
cout<<"Age In Mints:    "<<mi<<endl;
cout<<"Age In Seconds:    "<<s<<endl;
  
  cout<<endl; 
   return 0;
}