#include<iostream>
using namespace std;
class Bank_Acc{
        string name,acc_type;
        long acc_no;
        int amount;
    public:
    Bank_Acc():name("AWAIS RAZA"),acc_type("HALAL"),acc_no(12345),amount(30000)
    {cout<<"************Welcome to the Bank**************"<<endl;}
    void operator +=(int a){amount+=a;}
    void operator -=(int a){amount-=a;}
    friend ostream& operator<<(ostream&asdf,const Bank_Acc &a);
};
ostream& operator<<(ostream&asdf,const Bank_Acc &a)
{
    asdf<<endl;
    asdf<<a.name<<endl;
    asdf<<a.acc_no<<endl;
    asdf<<a.acc_type<<endl;
    asdf<<a.amount<<endl;
}
int main(){
Bank_Acc awais;
cout<<awais;
awais+=(1000);
cout<<awais;
awais-=1200;
cout<<awais;
return 0;   
}