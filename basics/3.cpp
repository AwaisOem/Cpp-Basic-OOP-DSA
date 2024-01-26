#include<iostream>
#include<iomanip>
using namespace std;
int main(){
char in;
cout<<"Enter a letter:  ";
cin>>in;
if(in>='a' and in<='z'){
cout<<"Entered Letter is lowercase....";
}
else if(in>='A' and in<='Z'){
cout<<"Entered Letter is upercase....";
}
else if(in>='0' and in<='9'){
cout<<"This is a number..........";
}
else{
    cout<<"This is Symbol..."<<endl;
}
return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved