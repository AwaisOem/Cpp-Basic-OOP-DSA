#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int t;
cin>>t;
double sum(0);
for (int i = 1; i <=t; i++)
{
    double fac(1);
    for (int j = 1; j <=i; j++)
    {
        fac*=j;
    }
  
    sum+=double(i)/fac;
}
cout<<sum;

return 0;   
}