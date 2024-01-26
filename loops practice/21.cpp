#include<iostream>
#include<iomanip>
using namespace std;
int main(){

double sum(0);

for (int i = 1; i < 100; i++)
{
    double r=double(i)/(double(i)+1);
    cout<<r<<endl;
    sum+=r;
}
cout<<sum;




return 0;   
}