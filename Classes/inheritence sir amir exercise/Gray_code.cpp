//Gray code OR XOR code of DLD
#include<bits/stdc++.h>
using namespace std;
string f(string x)
{
    string temp="";
    int i=x.find('1')+1;
    temp.push_back('1');
    for (;i<x.length(); i++)
        if(x[i]==x[i-1])
            temp.push_back('0');
        else
            temp.push_back('1');
    return temp;
}
int main(){
string str;
cin>>str;
cout<<f(str);

 return 0;   
}