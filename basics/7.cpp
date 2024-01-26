#include<iostream>

using namespace std;
int main(){
int a,b,c;
cout<<"Enter length of all sides of triangle:      ";
cin>>a>>b>>c;
switch ((a+b)>c and (b+c)>a and (c+a)>b)
{
case 1:
    cout<<"Triangle is valid......."<<endl;
    break;
case 0:
    cout<<"Triangle is not valid......."<<endl;
    break;
default:
    break;
}
return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved