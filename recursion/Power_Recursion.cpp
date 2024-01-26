#include<iostream>
#include<iomanip>
using namespace std;
long poow(int n,int p) { 
if(p<1)return 1; 
return n*poow(n,p-1);
}
int main(){
cout<<"Enter a number:   ";
int n;cin>>n;
cout<<"Enter power of number:   ";
int p;cin>>p;
cout<<poow(n,p);
 return 0;   
}