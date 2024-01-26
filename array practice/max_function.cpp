#include<iostream>
using namespace std;
int maax(int *a,int size){
int max=a[0];
for (int i = 0; i < size; i++)
if (a[i]>max)
max=a[i];
return max;}
int main(){
int n;cin>>n;int a[n];
for (int i = 0; i <n; i++)
cin>>a[i];
cout<<maax(a,n);
 return 0;   }