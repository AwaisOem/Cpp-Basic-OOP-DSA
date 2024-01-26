#include<iostream>
#include<cmath>
using namespace std;
int main(){int x1,y1,x2,y2,a,b;
cout<<"Enter value of x1:    ";cin>>x1;
cout<<"Enter value of y1:    ";cin>>y1;
cout<<"Enter value of x2:    ";cin>>x2;
cout<<"Enter value of y2:    ";cin>>y2;  
cout<<endl;
double D;
a=(x2-x1)*(x2-x1);
b=(y2-y1)*(y2-y1);
D=sqrt(double(a)+double(b));

cout<<"Here is distance b/w points:    "<<D;
cout<<endl;
   return 0;
}