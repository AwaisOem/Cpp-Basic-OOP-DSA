#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int mark;
double dis;
cout<<"Enter mark price:    ";
cin>>mark;
if(mark>10000){
dis=(20.0/100.0)*mark;
}
else if(mark<=10000  and mark>7000){
dis=(15.0/100.0)*mark;
}
else if(mark<=7000){
dis=(10.0/100.0)*mark;
}
cout<<"Here is your payable ammount:    "<<mark-dis<<endl;
 return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved