#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n;
cin>>n;
long sum(0);
for (int i = 1; i <=n; i++)
{
    long fac(1);
    for (int j = 1; j<=i; j++)
    {
        fac*=j;
    }
sum+=fac;
}
cout<<sum;

return 0;   
}