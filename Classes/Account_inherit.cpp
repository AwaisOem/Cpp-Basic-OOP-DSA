#include<bits/stdc++.h>
using namespace std;
class Account
{
    double  balance;
    public:
    Account(double amount=0.0){
        if(!(amount>=0.0)){cout<<"initial balance was invalid"<<endl;balance=0.0;}
        else balance=amount;
    }
    void credit(int n){
        balance+=n;
    }
    void debit(int n){
        if (n>balance)
            cout<<"Debit amount exceeded account balance."<<endl;
        else
            balance-=n;
    }
    double getBalance(){return balance;}
};
class SavingsAccount:public Account
{
    double interestRate;
    public:
    SavingsAccount(double amount=0.0,double ir=0.0):Account(amount),interestRate(ir){}
    double calculateInterest(){
        return interestRate*getBalance();
    }
};
class CheckingAccount : public Account
{
    double fee_charge;
    public:
    CheckingAccount(double amount=0.0,double ir=0.0):Account(amount),fee_charge(ir){}
    void credit(int n){
        if ((getBalance()+n)<fee_charge)
            cout<<"Invalid fee charge and transection unsuccessfull...."<<endl;
        else
        {
            Account::credit(n-fee_charge);
        }
    }
    void debit(int n){
        if ((n+fee_charge)>getBalance())
            cout<<"Debit amount exceeded account balance or you dont have fee charges...."<<endl;
        else
            Account::debit(n+fee_charge);
    }
};
// [Hint: Define Account’s debit function so that it returns a bool indicating whether money was
// withdrawn. Then use the return value to determine whether a fee should be charged.]
// After defining the classes in this hierarchy, write a program that creates objects of each class
// and tests their member functions. Add interest to the SavingsAccount object by first invoking its
// calculateInterest function, then passing the returned interest amount to the object’s credit
// function.
int main(){



 return 0;   
}

