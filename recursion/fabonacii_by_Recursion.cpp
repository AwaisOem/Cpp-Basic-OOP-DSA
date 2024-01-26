#include<iostream>
#include<iomanip>
using namespace std;
int fib(int n){
    if(n<2)return 1;
    return fib(n-1)+fib(n-2);
}
int main(){

cout<<"Enter number of values you want to print in fabonacii:   ";
int n;cin>>n;
for (int i = 0; i < n; i++)
    cout<<fib(i)<<",";
 return 0;   
}