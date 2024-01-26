#include<iostream>
#include<iomanip>
using namespace std;
int main(){   
  int n,sum(0),s(0);
  cout<<"Enter the nth term:  ";
  cin>>n;
  
    for(int i=1;i<=n;i++){
    s+=i;
    for(int j=1;j<=i;j++){
    sum+=j;   
    cout<<j<<" + ";
    if(j==i){cout<<"\b\b";}
    if(j==i){
  cout<<setw((n*6)-i*4)<<right<<"\b\b\b\b= "<<s<<endl;
    break;}}}
  cout<<"\n";
   cout<<"Sum of series is  = "<<sum;
   return 0;
}