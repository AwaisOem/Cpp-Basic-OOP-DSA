#include<iostream>
#include<cmath>
using namespace std;
int main(){
float a,b,c;
float x1,x2;
cin>>a>>b>>c;

x1=(-b+sqrt((b*b)-4.0*a*c))/(2.0*a);
x2=(-b-sqrt((b*b)-4.0*a*c))/(2.0*a);

cout<<"First is "<<x1<<endl;
cout<<"Second is "<<x2<<endl;

 return 0;   
}