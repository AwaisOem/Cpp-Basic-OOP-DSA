#include<iostream>
#include<iomanip>
using namespace std;
int main(){


int n;
cin>>n;
int a[n],b[n],r[n];
cout<<"**********************************ENter values of array A**********************************"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
cout<<"**********************************ENter values of array B**********************************"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}
int k(0);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j <n; j++)
    {
        if (a[i]==b[j])
        {
            r[k]=a[i];
            k++;
        }
        
    }
    
}



for (int i = 0; i <k; i++)
{
    cout<<"\t"<<r[i];
}



 return 0;   
}