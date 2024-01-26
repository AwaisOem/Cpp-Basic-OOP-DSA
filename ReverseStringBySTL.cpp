#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string d;
getline(cin, d);

reverse(d.begin(),d.end());

cout<<d;
 return 0;   
}