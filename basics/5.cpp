#include<iostream>
#include<iomanip>
using namespace std;
int main(){
cout<<"Enter your salary:   ";int salary;cin>>salary;
cout<<"Enter service years:    ";int year;cin>>year;
float bonus;
if(year>10){
    bonus=(1.0/10.0)*salary;
}
else if(year<=10 and year>=6){
    bonus=(8.0/100.0)*salary;

}
else if(year<6){
    bonus=(5.0/100.0)*salary;

}else{
    bonus=0;
}

cout<<"Your bonus is "<<bonus<<endl;
cout<<"Your net salary is "<<salary+bonus<<endl;
return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved