// 9:47-9:53
#include<iostream>
#include<process.h>
using namespace std;
class Account
{
    protected:
    int Acc_Num,Acc_bal;
    string Acc_name;
    public:
    Account(int A=0,string b="",int c=0):Acc_Num(A), Acc_name(b), Acc_bal(c){}
    void Getinf(){
        cout<<"Enter Account number:    ";
        cin>>Acc_Num;
        cout<<"Enter Account name:    ";
        cin>>Acc_name;
        cout<<"Enter Account initial Balance:    ";
        cin>>Acc_bal;
    }
    void Showinf(){
        cout<<"Enter Account number:    "<<Acc_Num<<endl
        <<"Enter Account name:    "<<Acc_name<<endl
        <<"Enter Account initial Balance:    "<<Acc_bal<<endl;
    }
};
class Withdraw:public Account
{
    public:
    void Withdraw_acc(int n){
        if((Acc_bal-n)<0){cout<<"Invalid";exit(1);}
        else
            Acc_bal-=n;
    }
};
class Deposit:public Account
{
    public:
    void Deposit_acc(int n){
            Acc_bal+=n;
    }
};
int main(){
    return 0;}