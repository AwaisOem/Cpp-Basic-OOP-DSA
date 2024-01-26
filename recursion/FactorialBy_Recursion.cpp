#include<iostream>
#include<iomanip>
using namespace std;
long long fac(int n){
    if (n<=1)return 1;
    return n*fac(n-1);
}
int main(){
int n;
cin>>n;
cout<<fac(n)<<flush;
 return 0;   
}