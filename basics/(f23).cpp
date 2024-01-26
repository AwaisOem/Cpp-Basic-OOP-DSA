#include<iostream>
using namespace std;
int main(){int hh1,hh2,mm1,mm2,ss1,ss2;
char sym1,sym2,sym3,sym4;
cout<<"Enter first time(hh:mm:ss):    ";cin>>hh1>>sym1>>mm1>>sym2>>ss1;
cout<<endl;
cout<<"Enter second time(hh:mm:ss):    ";cin>>hh2>>sym3>>mm2>>sym4>>ss2;
cout<<endl;
int ssa=ss1+ss2;
int mms=ssa/60;
int ssr=ssa%60; //in
int mmi=mm1+mm2;
int mmh=mmi/60;
int mmr=(mmi%60)+mms; //in
int hhr=hh1+hh2+mmh; //in

    cout<<"Sum of two times:    "<<hhr<<"\:"<<mmr<<"\:"<<ssr<<endl;
    cout<<endl;
  
   
   return 0;
}