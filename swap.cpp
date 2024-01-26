#include<iostream>
#include<iomanip>
using namespace std;
int swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){

int a,b;
cin>>a>>b;
swap(&a,&b);
cout<<a<<b;

 return 0;   
}