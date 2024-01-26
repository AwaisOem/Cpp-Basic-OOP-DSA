#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string reverse(string);
string intTostring(int);
class Number
{
    short base;
    long long n;
    string x;
    long f1(long n,int b)
    {
        string ans = "";
        if (n == 0)
            ans = "0";
        else
            while (n > 0)
            {ans.append(intTostring(n % b));n /= b;}
        return stol(reverse(ans));
    }
    long hextodeci(string h)
    {
        long ans = 0;
        int size = h.size();
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            if (h[i] >= '0' and h[i] <= '9')
                arr[i] = int(h[i]) - 48;
            else if (h[i] >= 'A' and h[i] <= 'F')
            {
                int k=10;
                for (char j = 'A'; j <='F' && k<16; j++)
                {
                if (h[i] == j){arr[i] =k++;break;}
                }
            }
        }
        for (int i = size - 1, j = 0; i >= 0; i--, j++)
        {
            long pow = 1;
            for (int i = 1; i <= j; i++)
                pow *= 16;
            ans += (arr[i] * pow);
        }
       return ans;
    }
    long todec(long long n,short base){
        long ans=0;
        for (int i=n,j=0;i>0;i/=10,j++)
            ans+=((i%10)*pow(base,j));
        return ans;
    }
    string f2(long long n,int b=16)
    {
        string ans = "";
        if (n == 0)
            ans = "0";
        else
            while (n > 0)
            {ans.append(intTostring(n % b));n /= b;}
        return reverse(ans);
    }
public:
    Number(long n, short base) : base(base), n(n), x("\0") {}
    Number(string x, short base) : base(base), x(x), n(0) {}
    Number()
    {
        cout << "Enter Base of Number:    ";
        cin >> base;
        if (base == 16)
        {
            cout << "Enter Hexadecimal Number:    ";
            cin >> x;
            n = 0;
        }
        else if (base <= 10)
        {
            cout << "Enter Number of base " << base << ":  ";
            cin >> n;
            x = "\0";
        }
    }
    void show()
    {
        if (base == 16)
        {
            cout << "Hexadecimal Number:  " << x << endl;
        }
        else if (base <= 10)
        {
            cout << "Number of base " << base << ": " << n << endl;
        }
    }
    long decimal();
    string binary();
    long octal();
    string hexadecimal();
};
int main(){
    system("cls");
    Number n;
    n.show();
    cout<<n.decimal()<<" "<<n.binary()<<" "<<n.hexadecimal()<<" "<<n.octal()<<endl;
return 0;
}
string Number:: binary()
    {
        if (base <= 10){
            // if (base==2)
            //     {return n;}
            return f2(todec(n,base), 2);}
        else if (base == 16)
            return f2(hextodeci(x), 2);
    }
string Number::hexadecimal(){
    if (base<=10)
        return f2(todec(n,base));
    else if(base == 16)
        return x;
}
long Number::octal(){
    if (base<=10)
        return f1(todec(n,base),8);
    else if(base==16){
        return f1(hextodeci(x),8);
    }
}
long Number::decimal()
{
    if (base<=10)
    {
        return todec(n,base);
    }else if(base==16){
        return hextodeci(x);
    }
}
string intTostring(int x){
    string str="";int i;char k;
    if(x<10){i=0;k='0';}
    else{i=10;k='A';}
    for (i,k;i<16;i++,k++)
    {if (x==i){str.push_back(k);break;}}
    return str;
}
string reverse(string x){
    int size=x.length();
    for(unsigned int i=0;i<(size/2);i++)
    {
        swap(x[i],x[size-i-1]);
    }
    return x;
}