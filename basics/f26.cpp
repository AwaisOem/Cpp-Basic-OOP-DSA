#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Enter marks in first subject:    ";cin>>a;
    cout<<"Enter marks in second subject:    ";cin>>b;
    cout<<"Enter marks in third subject:    ";cin>>c;
    cout<<"Enter marks in forth subject:    ";cin>>d;
    cout<<"Enter marks in fifth subject:    ";cin>>e;
  int  tm=a+b+c+d+e;
  
  cout<<endl;
  cout<<"Obtained marks:    "<<tm<<endl<<"Total marks:    500";
  cout<<endl;
  float per=(float(tm)/500)*100;
  cout<<"Obtained percentage:    "<<per<<"%";
  cout<<endl;
    
  
   
   return 0;
}