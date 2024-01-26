#include<iostream>
using namespace std;
int main(){int a,b,c;
cout<<"Enter principal amount:    ";
cin>>a;
cout<<"Enter % of interest:    ";
cin>>b;
cout<<"Enter total time(in months):    ";
cin>>c;
cout<<endl;
float i=(float(b*a))/100;

float iot=i*float(c);

cout<<"Total interest:    "<<int(iot)<<endl;
cout<<"Total amount:    "<<a+int(iot)<<endl;


    
  
   
   return 0;
}