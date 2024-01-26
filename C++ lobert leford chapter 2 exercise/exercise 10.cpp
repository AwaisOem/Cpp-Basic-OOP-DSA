#include<iostream>
using namespace std;
int main(){
    int pd,sh,pen;
    cout<<"Enter Pounds:    ";cin>>pd;cout<<endl;
    cout<<"Enter Shilling:   ";cin>>sh;cout<<endl;
    cout<<"Enter Pence:      ";cin>>pen;cout<<endl;
float btp=(((float(pen)/12)+float(sh))/20)+float(pd);
cout<<"Decimal Pounds:        £"<<btp; 
return 0;}