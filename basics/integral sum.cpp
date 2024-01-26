#include<iostream>
using namespace std;
int main(){
    int in,sum=0,rem;
    cout<<"No: ";cin>>in;
 while(in!=0){
      rem=in%10;
      sum+=rem;
      in/=10;}
    cout<<"Result: "<<sum;
   return 0;
}