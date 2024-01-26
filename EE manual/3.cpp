#include<iostream>
#include<iomanip>
#include<ctype.h>
using namespace std;
int main(){

char s;
cin>>s;
bool a=islower(s);
if (a==1)
{
    cout<<"Lowercase"<<endl;
}else{
    cout<<"UpperCAse"<<endl;
}

 return 0;   
}