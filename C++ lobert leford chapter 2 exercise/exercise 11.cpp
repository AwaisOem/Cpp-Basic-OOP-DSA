#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n(13);
  cout<<setiosflags(ios::left);
  cout<<setw(n)<<"Last name"<<setw(n)<<"First name"<<setw(19)<<"Street address"<<setw(n)<<"Town"<<setw(12)<<"State"<<endl;
  cout<<setfill('_')<<setw(67)<<"."<<setfill(' ')<<endl;
cout<<setw(n)<<"Jones"<<setw(n)<<"Bernard"<<setw(19)<<"109 Pine Lane"<<setw(n)<<"Littletown"<<setw(n)<<"MI"<<endl;
cout<<setw(15)<<"O’Brian"<<setw(n)<<"Coleen"<<setw(19)<<"42 E. 99th Ave."<<setw(n)<<"Bigcity"<<setw(n)<<"NY"<<endl;
cout<<setw(n)<<"Wong"<<setw(n)<<"Harry"<<setw(19)<<"121-A Alabama St."<<setw(n)<<"Lakeville"<<setw(n)<<"IL"<<endl;
cout<<setfill('_')<<setw(67)<<"."<<endl;
return 0;}