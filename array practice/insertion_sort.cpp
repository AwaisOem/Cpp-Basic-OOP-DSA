#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}


//   4 6 2 1 0
int j,h;
for (int i = 1; i <n; i++)
{
    h=a[i];
    j=i-1;   
    while (a[j]>h && j>=0)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=h;
}



for (int i = 0; i <n; i++)
{
    cout<<a[i]<<" ";
}

 return 0;   
}