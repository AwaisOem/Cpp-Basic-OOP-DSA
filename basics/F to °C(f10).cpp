#include<iostream>
using namespace std;
int main(){
    
  float cal,far;
  cout<<"Enter value in Faranheight:      ";
  cin>>far;
  cal=far-32;
  cal*=5;
  cal/=9;
  cout<<endl;
  cout<<"Value in Celsius is:    "<<cal<<"°C";
  cout<<endl;
  
   
   return 0;
}