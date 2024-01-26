#include<iostream>
#include<iomanip>
using namespace std;
struct person
{   float income;
    int taxRate;
    float Paidtax;
};
void ShowRecord(const person &a){
    cout<<a.income<<endl;
    cout<<a.taxRate<<endl;
    cout<<a.Paidtax<<endl;}
int main(){
    person p1;
    cin>>p1.income;
    cin>>p1.taxRate;
    p1.Paidtax=(p1.taxRate*p1.income)/100;
    ShowRecord(p1);
return 0;
}