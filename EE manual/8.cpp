#include<iostream>
#include<string>
using namespace std;
int main(){

string str;
getline(cin, str);
int words,crc,ucl,lcl,nums,sym;
for (int i = 0; i <str.length(); i++)
{
    words++;
    if ((str[i]>='A'  && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
    {
        crc++;
    }
    if ((str[i]>='A' && str[i]<='Z'))
    {
        ucl++;
    }
    if (str[i]>='a' && str[i]<='z')
    {
        lcl++;
    }
    
    if (str[i]>='0' && str[i]<='9')
    {
        nums++;
    }
    if ((str[i]>=33 && str[i]<=47) || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=126))
    {
        sym++;
    }
    
    }

cout<<"Words:   "<<words<<endl;
cout<<"character:   "<<crc<<endl;
cout<<"Upper Case:   "<<ucl<<endl;
cout<<"Lower Case:   "<<lcl<<endl;
cout<<"Numbers:   "<<nums<<endl;
cout<<"Symbols:   "<<sym<<endl;

 return 0;   
}