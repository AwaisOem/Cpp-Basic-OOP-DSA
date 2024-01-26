#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int strToint(char); 
int evenindex(int,int);
int main(){

// for (long long n = 6; n <1000040; n++)
// {long long sum=0;
// for(long long i=1;i<n;i++)
// if (n%i==0)sum+=i;
// if (sum==n)cout<<"\t"<<n;
// }



// string a;
// cin>>a;
// bool arr[a.length()];
// int flag=0;
// for (int i = 0; i <a.length()-1; i++)
// {
//     if (a[i]!=a[i+1]-1)
//     {
//         flag=1;
//     }
// }
// if (flag!=1)
// {
//     cout<<"String is sorted..........."<<endl;
// }else{
//     cout<<"Yawr nhi sorted keh to rha hoon....."<<endl;
// }

// char s[50];
// cin>>s;

// for (int i = 0; i <strlen(s); i++)
// {
//     int n=strToint(s[i]);
//     cout<<evenindex(n,i)<<",";
// }
// cout<<"\b\b";



int a[]={1,2,3,4,5,6,7,8,9};
cout<<min(a[1],a[2])<<endl;
// cout<<max(a);








 return 0;    
}
int strToint(char a)
{   
    if (a=='9')return 6;
    else return int(a)-48;
}
int evenindex(int n,int l){
    if(n%2==0){
        char i=int(l)+48;
        return i;}
}