#include<iostream>
using namespace std;
int main(){
    
  float cal,far;
  cout<<"Enter value in Celsius:      ";
  cin>>cal;
 // cout<<"°C";
  far=cal*9;
  far/=5;
  far+=32;
  cout<<endl;
  cout<<"Value in Faranheight is:    "<<far;
  
   
   return 0;
}