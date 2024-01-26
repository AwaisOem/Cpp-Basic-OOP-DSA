#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int sum(0);
int n,p;
cout<<"Enter a number:  ";
cin>>n;
do{
    p=n%10;
    n/=10;
    sum+=p;

}while(n>0);
cout<<"Here is the sum:   "<<sum;
 return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved