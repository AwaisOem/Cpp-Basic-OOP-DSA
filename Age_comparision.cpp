#include<iostream>
using namespace std;
int main(){int a,b,c,d;
   cout<<"Enter 4 ages:    ";
   cin>>a>>b>>c>>d;
   if(a>b && a>c && a>d)
   cout<<"Age 1 is oldest";
   else if(b>a && b>c && b>d)
   cout<<"Age 2 is oldest";
   else if(c>a && c>b && c>d)
   cout<<"Age 3 is oldest";
   else if(d>a && d>c && d>b)
   cout<<"Age 4 is oldest";
   cout<<endl;
   if(b>a && c>a && d>a)
   cout<<"Age 1 is eldest";
   else if(a>b && b<c && b<d)
   cout<<"Age 2 is eldest";
   else if(c<a && c<b && c<d)
   cout<<"Age 3 is eldest";
   else if(d<a && d<c && d<b)
   cout<<"Age 4 is eldest";      
   return 0;}