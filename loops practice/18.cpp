#include<iostream>
#include<iomanip>
using namespace std;
int main(){


int x,n;
cin>>x>>n;
int sum(0);
for (int i =1; i <=n; i++)
{
    int sq(1);
    for (int j = 1; j <=i; j++)
    {
        sq*=x;
    }

    sum+=sq;
    
}
cout<<sum;


return 0;   
}