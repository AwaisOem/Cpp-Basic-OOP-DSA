// Create a class Rational which represents two data members Num and Dnum with type integer. 
// Create members function that get the Num and Dnum from the user and ShowRational () member function that display
//  the rational number in p/q format.
//   Create a default constructor that automatically sets the rational data members to 0 and 1. 
//Create an additional overloaded constructor for this class. 
//   This constructor receives an integer as parameter and assigns the value to the class data members. 
//   Class also include a member function AddRational (Rational) to add two rational objects. 
//   Create a main () function that declared three object of rational, add two rational no’s and then show the sum of two rational by main function. 
//   Makes the appropriate members function as const member function. 
// Demonstrates each function works correctly.
#include<iostream>
using namespace std;
class Rational
{
    int Num,Dnum;
    public:
    Rational():Num(0),Dnum(1) {}
    Rational(int num,int Dnum):Num(num),Dnum(Dnum){}
        void GetRational(){
            cout<<"Enter Numinator:   ";
            cin>>Num;
            cout<<"Enter Denuminator:   ";
            cin>>Dnum;
        }
        void ShowRational() const
        {
            cout<<"Numerator: "<<Num<<"\nDenominator: "<<Dnum<<endl;
        }
        Rational operator +(const Rational &r1) const
        {
            Rational temp;
            temp.Num=Num*r1.Dnum+Dnum*r1.Num;
            temp.Dnum=r1.Dnum*Dnum;
            for (int i =2; i <min(temp.Num,temp.Dnum); i++)
            {
                while (temp.Num%i==0 && temp.Dnum%i==0)
                {
                    temp.Num/=i;
                    temp.Dnum/=i;
                }
            }
            return temp;
        }
        void AddRational(const Rational &r1,const Rational &r2){
            Num=r1.Num*r2.Dnum+r1.Dnum*r2.Num;
            Dnum=r1.Dnum*r2.Dnum;
            for (int i =2; i <min(Num,Dnum); i++)
                while (Num%i==0 && Dnum%i==0)
                {
                    Num/=i;
                    Dnum/=i;
                }
        }
        friend ostream& operator<<(ostream&, const Rational &);
        friend istream& operator >>(istream&, Rational &);
};
    istream& operator >>(istream&in, Rational &r){
        cout<<"Enter Numinator:   ";
        in>>r.Num;
        cout<<"Enter Denuminator:   ";
        in>>r.Dnum;
        return in;
    }
    ostream& operator<<(ostream&os, const Rational &r){
        os<<"Numerator: "<<r.Num<<"\nDenominator: "<<r.Dnum<<endl;
        return os;
    }
int main(){
    const Rational r2(5,8);
    Rational r1,r3;
    cin>>r1;
    cout<<r2;
    r3=r1+r2;
    cout<<r3;
return 0;   
}