#include<iostream>
#include<string>
using namespace std;
int main(){

string a;
getline(cin, a);
for (int i = 0; i <a.length(); i++)
{
    a[i]=tolower(a[i]);
}
cout<<a;

 return 0;   
}