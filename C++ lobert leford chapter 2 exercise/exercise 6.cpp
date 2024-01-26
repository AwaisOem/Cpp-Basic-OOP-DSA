#include<iostream>
using namespace std;
int main(){float USD;
       cout<<"Enter amout in USD:      $";
       cin>>USD;
       cout<<endl;



    const char* cur[5]={"British Pound","French Franc","Germen Deutschemark","Japanese Yen"};
    double val[5]={1.487,0.172,0.584,0.00955};
    for(int i=0; i<=3; i++){
        cout<<"Required Value in "<<cur[i]<<" is:    "<<USD/val[i]<<endl;}
  
   
   return 0;
}