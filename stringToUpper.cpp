#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
string name;
getline(cin,name);
for (int i = 0; i <name.length(); i++)
{
name[i]=toupper(name[i]);
// name[i]=tolower(name[i]);
}
cout<<name;

 return 0;   
}