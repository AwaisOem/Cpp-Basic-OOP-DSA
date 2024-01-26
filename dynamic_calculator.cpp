#include "iostream"
using namespace std;
int f(char b[],const string &buf,long long a[],int k=0,int start=0){
    int i=start;
    for (i; i<buf.length();i++)
        if (buf[i] >= '0' && buf[i] <= '9')
            a[k]=a[k]*10+(buf[i]-'0');
        else
            break;
    if(buf[i] == '*' || buf[i] == '/' || buf[i] == '+' || buf[i] == '-')
    {
        b[k++]=buf[i];
        f(b,buf,a,k,i+1);
    }
    else
        return k;
}
long double f1(long double a,char b, long double c){  
    if (b=='-')
        return a-c;
    else if (b=='/')
    {
        if (c!=0)
            return a/c;
        else
        {
            cout<<"ERROR::dnumenator cann't be zero....";
            exit(1);
        }
    }
    else if (b=='+')
        return a+c;
    else if (b=='*')
        return a*c;
    else
    {
        cout<<"ERROR::Invalid Operator used..........";
        exit(1);
    }
}
int main(){
    string buf;
    long long a[12]={0};
    char b[11]={};
    cout<<"**********Welcome to Calculator*************\n";
    cin>>buf;
    int k=f(b,buf,a);
    long double result=a[0];
    for (int i = 1; i <=k; i++)
        result=f1(result,b[i-1],a[i]);
    cout<<"Result is "<<result<<endl;
return 0;   
}