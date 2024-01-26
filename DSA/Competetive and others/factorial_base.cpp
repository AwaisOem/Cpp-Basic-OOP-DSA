#include <bits/stdc++.h>
using namespace std;
long long fac(int a){
    if (a==1 || a==0)
        return 1;
    return a*fac(a-1);
}
long long facbase_to_decimal(long long facbase){
    long long decimal=0;
    for(int i=0;facbase>0;facbase/=10,++i)
        decimal+=((facbase%10)*fac(i));
    return decimal;
}
long long decimal_to_facbase(long long decimal){ 
    long long rfacbase =0;
    int count=0;
    for (int i = 1;;++i){
        if( decimal%i==0)count++;
        else break;}
    for (int i = 1;decimal>0;decimal/=i,++i)
        rfacbase= rfacbase*10 +(decimal%i);
    long long facbase=0;
    for(;rfacbase>0;rfacbase/=10)
        facbase= facbase*10 + (rfacbase%10);
    if (count)facbase*= ( 10*count);
    return facbase;
}   
int main()
{
    int a=462; 
    cout<<decimal_to_facbase(a); 
}