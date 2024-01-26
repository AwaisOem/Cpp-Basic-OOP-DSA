#include<iostream>
#include<cmath>
using namespace std;
int main(){do{float a,b,c;
cout<<"**************program to calculate area of triangle****************";
cout<<endl;

cout<<"Enter the first length:    ";cin>>a;cout<<endl;
cout<<"Enter the second length:    ";cin>>b;cout<<endl;
cout<<"Enter the second length:    ";cin>>c;cout<<endl;
float s=(a+b+c)/2;
float area=sqrt(s*(s-a)*(s-b)*(s-c));

cout<<"Area of triangle is:    "<<area;
cout<<endl;
cout<<endl;
cout<<endl;
}while(true);
    
  
   
   return 0;
}