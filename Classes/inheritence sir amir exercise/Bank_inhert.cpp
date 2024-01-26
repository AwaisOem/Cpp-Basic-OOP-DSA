#include <bits/stdc++.h>
using namespace std;
class Account
{
private:
    long AccountNumber;
    string AccountName;
protected:
    unsigned int AccountBalance;

public:
    void GetAccountInf();
    void ShowAccountInf() const;
};
void Account::GetAccountInf()
{
    cout << "Enter Acc_num   Acc_name   Acc_Balance:  " << endl;
    cin >> AccountNumber >> AccountName >> AccountBalance;
}
void Account::ShowAccountInf() const
{
    cout << "Acc_num : " << AccountNumber << endl
        << "Acc_name : " << AccountName << endl
        << "Acc_Balance:  " << AccountBalance << "\n\n";
}
class Withdraw : Account
{
public:
    void WithdrawAmount();
};
void Withdraw::WithdrawAmount()
{
    cout << "Enter ammount to withdraw:   ";
    int n;
    cin >> n;
    if ((AccountBalance - n) >= 0)
        AccountBalance -= n;
    else
        cout << "Not Enough money...." << endl;
}
class Deposit : Account
{
public:
    void DepositAmount();
};
void Deposit::DepositAmount()
{
    cout << "Enter ammount to Deposit:   ";
    int n;
    cin >> n;
    AccountBalance += n;
}
int main(){return 0;}