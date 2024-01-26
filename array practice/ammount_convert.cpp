#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
long double mstold(string a){
string s="";
for (int i = 0; i <a.length(); i++)
    if ((a[i]>='0' && a[i]<='9') || a[i]=='.')
        s+=a[i];
    return stold(s);
}
int main(){
string a="$1,234,567,890,123.99";
cout<<setprecision(19)<<mstold(a);
return 0;   
}