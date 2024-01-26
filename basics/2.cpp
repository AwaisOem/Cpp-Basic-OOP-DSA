#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c;
cout<<"Enter 3 ages:    ";
cin>>a>>b>>c;
int max=a;
int min=c;
if(a>b and a>c){
max=a;
}
if(b>a and b>c){
max=b;
}
if(c>b and c>a){
max=c;
}
if(a<b and a<c){
min=a;
}
if(b<a and b<c){
min=b;
}
if(c<b and c<a){
min=c;
}

cout<<"Maximum number is "<<max<<endl;
cout<<"Minimum number is "<<min<<endl;
 return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved