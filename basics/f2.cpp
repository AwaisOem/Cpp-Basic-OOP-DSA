#include<iostream>
using namespace std;
int main(){const float pi=3.14;
    double r;
    cout<<"Enter the radius:    ";
    cin>>r;
    double v=(r*r*r*pi*4)/3;
    double SA=4*pi*r*r;
   
   cout<<endl;
   cout<<"Volume of Sphere:    "<<v<<endl;
   cout<<"Surface Area of Sphere:    "<<SA;


   
  
   return 0;
}