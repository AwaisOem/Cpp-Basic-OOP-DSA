#include<iostream>
#include<cstring>
#include<cstring>
#include<iomanip>
using namespace std;
int main(){
string next,a="A",b="B";
for (int i = 1; i <10; i++)
{
    next=a+b;
    cout<<next<<"\t";
    a=b;
    b=next;
}
return 0;   
}