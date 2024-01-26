#include<iostream>
#include<iomanip>
using namespace std;
int sum(int n)
{
if(n<1)return 0;
return (n%10)+sum(n/10);
}
int main(){
cout<<"Enter the number to calculate sum of digits:     ";
int n;cin>>n;cout<<sum(n)<<endl;
return 0;}