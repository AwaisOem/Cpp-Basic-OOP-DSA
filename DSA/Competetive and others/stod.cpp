#include<bits/stdc++.h>
using namespace std;
long double Stold(const string &s){
    string str="";
    long double a=0;
    long long b=0;
    for (int i = 0; i <s.length(); i++)
        if ((s[i] >= '0' && s[i] <= '9') ^ s[i]=='.')
            str.push_back(s[i]);
    for (int i =0; i<str.rfind('.'); i++)
        b=b*10+(s[i]-48);
    int t=str.length()-str.rfind('.')-1;
    for (int i =str.rfind('.')+1; i<str.length(); i++)
        a=a*10+(s[i]-48);
    a/=(pow(10,t));
    return a+b;
}
int main(){
    string n="1234124124.12412412";
    cout<<setprecision(19)<<Stold(n)<<endl;
return 0;   
}