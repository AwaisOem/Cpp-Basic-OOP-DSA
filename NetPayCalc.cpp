#include<iostream>
#include<iomanip>
using namespace std;
int PayCalculate(int basic){

int house_rent=(45*basic)/100;
int medical_allowance,conveyance_allowance;
if (basic>4000)
{
medical_allowance=(5*basic)/100;
conveyance_allowance=153;
}
else if(basic<=4000)
{
medical_allowance=(7*basic)/100;
conveyance_allowance=91;
}
    return (basic+medical_allowance+house_rent+conveyance_allowance);
}
int main(){
int basic=0;
cin>>basic;
cout<<"Your Net pay is "<<PayCalculate(basic)<<flush;
return 0;}