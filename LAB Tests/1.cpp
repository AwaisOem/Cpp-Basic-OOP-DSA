#include <bits/stdc++.h>
using namespace std;
class Rational
{
    int Num, Dnum;
public:
    Rational() : Num(0), Dnum(1) {}
    Rational(int a, int b) : Num(a), Dnum(b) {}
    void get()
    {
        cout << "Input: ";
        cin >> Num >> Dnum;
    }
    void ShowRational() const
    {
        cout << endl << Num << "/" << Dnum << endl;
    }
    Rational operator+(const Rational &r) const
    {
        Rational temp;
        temp.Num = (Num * r.Dnum) + (r.Num * Dnum);
        temp.Dnum = Dnum * r.Dnum;
        for (int i = 2; i < max(temp.Num, temp.Dnum) / 2; i++)
            while (temp.Dnum % i == 0 && temp.Num % i == 0)
            {
                temp.Num /= i;
                temp.Dnum /= i;
            }
        return temp;
    }
    ~Rational() {}
};
int main()
{
    Rational p1(2, 3), p2, p3;
    p2.get();
    p3 = p1 + p2;
    p3.ShowRational();
    return 0;
}