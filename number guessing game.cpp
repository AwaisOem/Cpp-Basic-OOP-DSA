#include<iostream>
using namespace std;
int main(){int n,g,tc=3, e;
    cout<<"*******************************For Host****************************"<<endl;
    cout<<endl;
    cout<<"Enter the number:    ";
    cin>>n;
    cout<<"        OK    "<<endl;
    cout<<"Press Enter any word to proceed.....";cin>>e;
    system("cls");
cout<<"***************************Guess the number************************";
cout<<endl;
cout<<"You have 3 trys lets go"<<endl;
cout<<"Guess the number:    ";
cin>>g;
tc=0;
cout<<"\n";
while(tc<2){
  //line:
  if(g<n){
   cout<<"Hint: Number is higher than that"<<endl;
   cout<<endl;
   cout<<"Try Again:    ";
   cin>>g;
   cout<<endl;
   //goto line; 
    }
 else if(g>n){
   cout<<"Hint: Number is lower than that"<<endl;
   cout<<endl;
   cout<<"Try Again:    ";
   cin>>g;
   cout<<endl;
  // goto line;
  }
  /*else {
       cout<<"invalid";}*/
   tc++;    };
    cout<<endl;
    if(n==g){
    cout<<"***************************❤️Wow Correct❤️**************************"<<endl;}
    if(n!=g){
cout<<"**************************🙄😕You lose😔😟*****************************"<<endl;
cout<<"Number is "<<n;}
  return 0;
}