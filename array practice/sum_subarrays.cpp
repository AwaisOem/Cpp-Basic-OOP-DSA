#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int n;
cout<<"Sixze of array";
cin>>n;
int a[n];
cout<<"Enter elements:  ";
for (int i = 0; i <n; i++)
{
    cin>>a[i];
}
int sum(0),sum1;
for (int i = 0; i <n; i++)
{sum1=0;
    for (int  j = i; j <n; j++)
    {
        sum1+=a[j];
        cout<<sum1<<endl;
        sum+=sum1;
    }
}




cout<<sum;



















 return 0;   
}