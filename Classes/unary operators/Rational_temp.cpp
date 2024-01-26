#include <iostream>
using namespace std;
class Rational
{
    int Num, Dnum;
public:
    Rational(int num = 0, int Dnum = 1) : Num(num), Dnum(Dnum) {}
    void GetRational()
    {
        cout << "Enter Numinator:   ";
        cin >> Num;
        cout << "Enter Denuminator:   ";
        cin >> Dnum;
    }
    void ShowRational() const
    {
        cout <<"    "<< Num << "/" << Dnum << endl;
    }
    Rational operator++(int)
    {
        int n=Num;
        Num += Dnum;
        return Rational(n, Dnum);
    }
    Rational operator++()
    {
        return Rational(Num + Dnum, Dnum);
    }
    Rational operator--(int)
    {
        int n=Num;
        Num -= Dnum;
        return Rational(n, Dnum);
    }
    Rational operator--()
    {
        return Rational(Num - Dnum, Dnum);
    }
};
int main()
{
    Rational r1(3,2);





    // r1.ShowRational();
    return 0;
}