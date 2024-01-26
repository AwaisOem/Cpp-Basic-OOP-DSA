#include<iostream>
using namespace std;
int main(){do{
       cout<<"Enter any 4 numbers:      ";
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       if(a>b&&a>c&&a>d){
           cout<<"First number \""<<a<<"\""<<" is largest";
       }
if(c>a&&c>b&&c>d){
           cout<<"Third number \""<<c<<"\""<<" is largest";
       }
if(b>a&&b>c&&b>d){
           cout<<"Second number \""<<b<<"\""<<" is largest";
       }
if(d>a&&d>b&&d>c){
           cout<<"Forth number \""<<d<<"\""<<" is largest";
       }

     cout<<endl;

}while(true);
    return 0;

}





