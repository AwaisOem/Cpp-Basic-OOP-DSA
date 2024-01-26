#include<iostream>
using namespace std;
int main(){int age;char s_x,ms;
 line:
 cout<<"Enter your Age: ";cin>>age;
 cout<<"Your Gender?   (M/F)    ";cin>>s_x;
 cout<<"Are you Married?   (Y/N)    ";cin>>ms;
 cout<<endl;
 if( (age<=60 && age>=20) && (s_x=='M' || s_x=='m' || s_x=='f' || s_x=='F') && (ms=='Y'
|| ms=='y' || ms=='N' || ms=='n')){
if( (s_x=='F' || s_x=='f') || (  (s_x=='M' || s_x=='m') &&(age<=60 && age>=40))){cout<<"You can work only in urban areas......";}else if((s_x=='M' || s_x=='m') && (age<=40 && age>=20)){ cout<<"you can work anywhere.....";}else{
    cout<<"Error.....";}
}else{cout<<"Error try again......"<<endl;
 goto line;}
 return 0;}