#include<iostream>
using namespace std;
int main(){int mt,qz,ft;
cout<<"Total number is 30+20+50=100"<<endl;
    cout<<"Enter obtained numbers in mid term:    ";
cin>>mt;
cout<<"Enter obtained numbers in quiz:    ";
cin>>qz;
cout<<"Enter obtained numbers in final term:    ";
cin>>ft;
 cout<<endl;
 
 float per=(mt+qz+ft);
  
  float mper=((float(mt)/30)*100);
  float qper= ((float(qz)/20)*100);
  float fper= ((float(ft)/50)*100);
  
  
 // cout<<per;   
   
   float avper=(mper+qper+fper)/3;
   
   cout<<"Your average percentage is "<<avper<<"%"<<endl;
  if(avper<=100 && avper>=90){
   cout<<"Congratulations You got A grade🎉🥳";}
  else if(avper<90 && avper>=70){
   cout<<"Congratulations You got B grade";}
  else if(avper<70 && avper>=50){
   cout<<"You got C grade😬Plz dont lose hope";}
   else if(avper<50){
   cout<<"World doesn't there its doesn't matter either you get F grade or A";}
   else{
       cout<<"invalid";}
   
   
   return 0;
}