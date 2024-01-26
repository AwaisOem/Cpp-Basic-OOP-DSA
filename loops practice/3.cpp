#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int r;
cin>>r;
double sum(0);
int i=1;
int j=1;
do{
    sum+=1.0/double(i);
    i+=4-j;
    j=0;
} while (i<=r);
cout<<"\t"<<sum;

return 0;   
}