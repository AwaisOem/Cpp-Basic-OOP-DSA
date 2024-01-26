#include<iostream>
#include<iomanip>
using namespace std;
int main(){char c,j;
    int h,m,s,e=80;
    cout<<"Enter countdown time(hh:mm:ss):    ";
   cin>>h>>c>>m>>j>>s;
   cout<<endl;
    do{for(int i=1;i<=59;i++){ 
    e-=1;  
    if(e<0){s-=1; e=79;}
    if(s<0){m-=1; s=59;}
    if(m<0){h-=1; m=59;}
    
    system("cls");
  cout<<"\n\n\n\n"; cout<<setw(30)<<h<<":"<<m<<":"<<s;cout<<":"<<e;
    cout<<"\n\n\n\n";}}while(true);
   
   return 0;
}