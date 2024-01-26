#include<iostream>
using namespace std;
long long f(int n)
{
    long long res=1;
    for(int i=1; i<=n;)
        res*=i++;
    return res;
}
main()
{
    int rowLimit;
    cout<<"Enter the Number of Rows: ";
    cin>>rowLimit;
    for(int i=0; i<rowLimit; i++)
    {
        for(int c=rowLimit-1; c>i; c--)
            cout<<" ";
        for(int c=0; c<=i; c++)
            cout<<" "<<f(i)/(f(c)*f(i-c));
        cout<<endl;
        }
    return 0;
}