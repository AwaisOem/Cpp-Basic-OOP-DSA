#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n;
cin>>n;
int i(1);
int r=1;
while(i<=n){
cout<<i<<"\t"<<r<<endl;
r+=i+1;
i++;
}
 return 0;   
}