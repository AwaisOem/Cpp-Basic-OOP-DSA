#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int salary,year,bonus;
cout<<"Enter your Salary:   ";
cin>>salary;
cout<<"Enter your service years:    ";
cin>>year;
if(year>5){
    bonus=(0.05)*salary;
}else{
    bonus=0;
}
cout<<"Your bonus is "<<bonus<<endl;
cout<<"Your total salary is "<<salary+bonus;

 return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved