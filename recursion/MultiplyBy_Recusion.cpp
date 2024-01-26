#include<iostream>
#include<iomanip>
using namespace std;
int multiply(int a,int b){
if (b!=0 && a!=0)
{return a+multiply(a,b-1);}
else
{
    return 0;
}
}
int main(){
int x,y;
cin>>x>>y;
cout<<multiply(x,y);
 return 0;   
}