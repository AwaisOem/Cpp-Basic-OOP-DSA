#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int mp,de,mge;
    cout<<"Enter your Monthly Pay:    ";
    cin>>mp;
    cout<<endl;
    cout<<"Enter your online monthly grossary expense:    ";
    cin>>mge;
    cout<<endl;
   cout<<"Enter Daily expense:    ";
   cin>>de;
   cout<<endl;
   
   float tax=(3/100)*mge;
   float tmge=mge+tax;
   int tde=30*de;
   float ms=mp-tde-tmge;
   cout<<"Your total monthly saving is "<<round(ms);
   
   
   
   return 0;
}