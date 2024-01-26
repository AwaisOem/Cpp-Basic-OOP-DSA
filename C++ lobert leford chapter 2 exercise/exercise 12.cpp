#include<iostream>
#include<cmath>
using namespace std;
int main(){
float ip,dv,dts,dtt,dtp;
int pound;
cout<<"Enter decimal pounds:     £";
cin>>ip;
cout<<endl;
pound=int(ip);
dv=ip-pound;
dts=dv*20;
dtt=dts-int(dts);
dtp=dtt*12;
cout<<"Equilent in old notation:    £"<<pound<<"\."<<int(dts)<<"\."<<round(dtp);
cout<<endl;
return 0;
}