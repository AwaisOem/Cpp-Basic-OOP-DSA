// (Account Class) Create an Account class that a bank might use to represent customers’ bank
// accounts. Include a data member of type int to represent the account balance. [Note: In subsequent
// chapters, we’ll use numbers that contain decimal points (e.g., 2.75)—called floating-point values—
// to represent dollar amounts.] Provide a constructor that receives an initial balance and uses it to initialize the data member. The constructor should validate the initial balance to ensure that it’s greater
// than or equal to 0. If not, set the balance to 0 and display an error message indicating that the initial
// balance was invalid. Provide three member functions. Member function credit should add an
// amount to the current balance. Member function debit should withdraw money from the Account
// and ensure that the debit amount does not exceed the Account’s balance. If it does, the balance

// should be left unchanged and the function should print a message indicating "" Member function getBalance should return the current balance. Create a
// program that creates two Account objects and tests the member functions of class Account.
#include<iostream>
#include<iomanip>
using namespace std;
class Account{
    int balance;
    public:
    Account(int balance=0):balance(balance){
        if (balance < 0) {
            balance=0;
            cout<<"Invalid balance........"<<endl;
            }
    }
    void credit(int c=-1){
        if(c==-1)cin>>c;
        balance+=c;
    }
    void withdraw(int c=-1){
        if(c==-1)cin>>c;
        if(balance>=c){
        balance-=c;
        }
        else
            cout<<"Debit amount exceeded account balance..."<<endl;
    }
    int getbalance(){
        return balance;
    }
};
int main(){
 return 0;   
}