#include<iostream>
using namespace std;
int main(){
    float in;
    cout<<"Enter basic salary:    ";
    cin>>in;
    cout<<endl;
    float da=(35*in)/100;
    float hr=(25*in)/100;
    
    cout<<"Gross salary:    "<<in+da+hr<<endl;
    cout<<endl;
  
   
   return 0;
}