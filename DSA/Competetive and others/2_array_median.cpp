#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=5,n=5,o(0),p(0);
    int num1[m]={2,3,4,5,5}, num2[n]={1,4,5,8,9},num3[m+n];
    for (int i = 0;i < m+n; i++)
    {
        if(num1[o] <= num2[p]){
            num3[i]=num1[o++];
            if (o==m-1)
            num3[i]=num1[o];
            }
        else{
            num3[i]=num2[p++];
            if (p==n-1)
            num3[i]=num2[p];
        }
    }
    float median;
    if ((m+n)%2!=0)
        median= num3[(m+n)/2];
    else
        median= (num3[(m+n-1)/2]+num3[(m+n+1)/2])/2.0;
    for (int i = 0; i < m+n; i++)
        cout<<num3[i];
    cout<<endl<<median<<endl;
return 0;   
}