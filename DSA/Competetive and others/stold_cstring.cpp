#include<bits/stdc++.h>
using namespace std;
long double Stold(const string &s){
    string str="";
    long double a=0;
    long long b=0;
    for (int i = 0; i <s.length(); i++)
        if ((s[i] >= '0' && s[i] <= '9') ^ s[i]=='.')
            str.push_back(s[i]);
    for (int i =0; i<str.rfind('.') || i<str.length(); i++)
        b=b*10+(s[i]-48);
    int t=str.length()-str.rfind('.')-1;
    for (int i =str.rfind('.')+1; i<str.length(); i++)
        a=a*10+(s[i]-48);
    a/=(pow(10,t));
    return a+b;
}
long double mstold(const string &str)
{
    string r = "";
    int k = 0;
    for (int i = 0; i < str.length(); i++)
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == '.')
            r[k++] = str[i];
    return Stold(r); //yaha pe pehle builtin tha evein fazool new banvaya
}
string ldtoms(long double n)
{
    string str = "";
    long long a = n;
    long long l = n;
    int _3 = 0;
    while (a > 0)
    {
        int k = a % 10;
        int itost = 0;
        if (_3++ % 3 == 0)
        {
            str.push_back(',');
        }
        for (char s = '0'; s <= '9' || itost <= 9; itost++, s++)
        {
            if (k == itost)
            {
                str.push_back(s);
                break;
            }
        }
        a /= 10;
    }
    str.push_back('$');
    for (int i = 0; i < str.size() / 2; i++)
    {
        char temp = str[i];
        str[i] = str[str.size() - 1 - i];
        str[str.size() - 1 - i] = temp;
    }
    int po = 20 - str.length();
    str.pop_back();
    str.push_back('.');
    string str2 = "";
    long long f = (n - l) * pow(10, po);
    while (f > 0)
    {
        int k1 = f % 10;
        int itost1 = 0;
        for (char s1 = '0'; s1 <= '9' || itost1 <= 9; itost1++, s1++)
        {
            if (k1 == itost1)
            {
                str2.push_back(s1);
            }
        }
        f /= 10;
    }
    for (int i = 0; i < str2.size() / 2; i++)
    {
        char temp = str2[i];
        str2[i] = str2[str2.size() - 1 - i];
        str2[str2.size() - 1 - i] = temp;
    }
    while (str2[str2.length() - 1] == '0')
    {
        str2.pop_back();
    }
    str.append(str2);
    return (str);
}
int main(){
    system("cls");
    char n[30]="#41,234,324,124.2345";
    long double a=41234324124.2345;
    cout<<ldtoms(a)<<endl;
    cout<<setprecision(19)<<mstold(n)<<endl;
return 0;   
}