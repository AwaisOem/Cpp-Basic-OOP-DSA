#include<iostream>
#include<iomanip>
using namespace std;
int main(){

string n;
getline(cin, n);
int vowel(0),con(0),ws(0);
for (int i = 0; i <n.length(); i++)
{
    if (n[i]=='a' || n[i]=='i' ||  n[i]=='o' || n[i]=='e' || n[i]=='u' || n[i]=='A' || n[i]=='I' ||  n[i]=='O' || n[i]=='E' || n[i]=='U')
        vowel++;
    else{
    if (n[i]==' ')
    {
        ws++;
    }else{con++;}
    }
}
cout<<vowel<<"\t"<<con<<"\t"<<ws<<endl;

 return 0;   
}