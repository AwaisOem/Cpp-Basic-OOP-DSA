#include<iostream>
#include<iomanip>
using namespace std;
long fac(int n){
    long long fac(1);
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}

double power(double n,double p){
    double power(1);
    for (int i = 1; i <=p; i++)
        power*=n;
    return power;
}


int main(){

// int e;
// cin>>e;
// double sum(1); 
// int k(1);
// for (double  i = 2; i <=e; i++)
// {  
//     sum+=(i/fac(i))*k;
//     k*=-1;
// }
// cout<<sum;

// int in,p;
// cin>>in>>p;
// cout<<power(in,p);

int in;
int sum(0);
int min(1000000000);
int max(0);
int i(0);

do{
cin>>in;
if(in<0){break;}
sum+=in;
if (in<min)
    min=in;
if (max<in)
    max=in;
i++;
}while(true);

cout<<"\n\n";
cout<<sum<<endl;
cout<<max<<endl;
cout<<min<<endl;
float avg=float(sum)/float(i);
cout<<avg<<endl;


















 return 0;   
}