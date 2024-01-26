#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n;cin>>n;
for(int i=n/2;i>=1;i--){ 
for (int j = 1; j < n; j++)
{
    if (j==(i) || j==(n)-i)
    cout<<"&";
    else
    cout<<"*";
}
cout<<endl;
}
 return 0;   
}