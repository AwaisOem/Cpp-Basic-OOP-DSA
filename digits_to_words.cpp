#include <iostream>
using namespace std;
class CustomSimpleArray
{
    int Arr[11];
    int len;
public:
    CustomSimpleArray() : Arr{},len(0) {}
    void push(int n)
    {
        Arr[len++]=n;
    }
    int returnlen(){
        return len;
    }
    void show()
    {
        cout<<"\n";
        for(int i=0;i<len;i++)
            cout<<" "<<Arr[i];
        cout<<"\n";
    }
    int operator [](int n)
    {
        if(n<0 || n>=len){
            cout<<"index out of range\n"<<n;
            exit(0);
        }
        return Arr[n];
    }

};
auto main() -> int
{
    long long n;
    cin >> n;
    string arr[] =
        {"", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine", "dummy",
         " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen","dummy"
         " Ten", " Twenty", " Thirty", " Fourty", " Fifty", " Sixty", " Seventy", " Eighty", " Ninety",
         };
    string arr2[] = {" Hundred", " Thousand", " Lac", " Caror", " Arab"};
    CustomSimpleArray digit;
    while (n > 0)
    {
        digit.push(n % 10);
        n /= 10;
    }
    string sol = "";
    for (int i = 0; i < digit.returnlen(); i++)
    {
        if(i==2)
            sol=arr2[0]+sol;
        else if(i==3)
            sol=arr2[1]+sol;
        else if(i==5)
            sol=arr2[2]+sol;
        else if(i==7)
            sol=arr2[3]+sol;
        else if(i==9)
            sol=arr2[4]+sol;
        
        if(i==1 || i==4 || i==6 || i==8 || i==10)
        {
            if(digit[i]==1 && digit[i-1]!=0)
                sol=arr[10+digit[i-1]]+sol;
            else
                sol=arr[20+digit[i]-1]+sol;
        }
        else
        {
            if(!(i==1 ||i==2||i==4 || i==6 || i==8 || i==10))
                if(i+1<digit.returnlen())
                    if(digit[i+1]==1 && digit[i]!=0)
                        continue;
            sol=arr[digit[i]]+sol;
        }
    }
    cout<<sol;
    return 0;
}