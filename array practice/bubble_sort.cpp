#include<iostream>
#include<iomanip>
using namespace std;
int main(){

cout<<"Enter the number of element you want in your array:  ";int n;cin>>n;
int a[n];
for (int i = 0; i <n; i++)
{
    cin>>a[i];
}
// 7 6 3 9 6
while (n>1)
{
    for (int i = 0; i <n; i++)
    {
        if(a[i]>a[i+1]){
            int k=a[i];
            a[i]=a[i+1];
            a[i+1]=k;
        }
    }
    n--;
}


n=sizeof(a)/sizeof(a[0]);
for (int i = 0; i <n; i++)
{
    cout<<a[i]<<" ";
}



 return 0;   
}