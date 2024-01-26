#include<iostream>
#include<iomanip>
using namespace std;
int main(){

string setence;
getline(cin, setence);


for (int i = 0; i <setence.length(); i++)
{
    // if (setence[i]>='a' && setence[i]<='z')
    if (setence[i]>='A' && setence[i]<='Z')
    {
        // setence[i]-=32;
        setence[i]+=32;
    }
    
}

cout<<setence<<endl;

 return 0;   
}