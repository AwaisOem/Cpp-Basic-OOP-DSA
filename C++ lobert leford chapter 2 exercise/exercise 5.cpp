#include<iostream>
#include<CTYPE.H>
using namespace std;
int main()
{char p;
    int r;
    cout<<"Enter any character:";cin>>p;
    r=islower(p);
    if(r!=0){
        cout<<"******************This is a Lowercase******************"<<endl;}else{
        cout<<"****************This is Uppercase******************"<<endl;}
    return 0;
}