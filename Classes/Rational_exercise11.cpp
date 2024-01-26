//Also overload the == and != comparison operators, and use them
// to exit from the loop if the user enters 0/1, 0/1 for the values of the two input fractions.
// You may want to modify the lowterms() function so that it returns the value of its argument
// reduced to lowest terms. This makes it more useful in the arithmetic functions, where it
// can be applied just before the answer is returned
#include <bits/stdc++.h>
using namespace std;
class Rational
{
    int Num, Dnum;
    void refine()
    {
        for (int i = 2; i <= min(Num, Dnum); i++)
        {
            while (Num % i == 0 && Dnum % i == 0)
            {
                Num /= i;
                Dnum /= i;
            }
        }
    }
public:
    Rational(int num = 0, int Dnum = 1) : Num(num), Dnum(Dnum)
    {
        refine();
    }
    void GetRational()
    {
        cout << "Enter Numinator:   ";
        cin >> Num;
        cout << "Enter Denuminator:   ";
        cin >> Dnum;
        refine();
    }
    void ShowRational() const
    {
        cout << "Numerator: " << Num << "\nDenominator: " << Dnum << endl;
    }
    void AddRational(const Rational &r1, const Rational &r2)
    {
        Num = r1.Num * r2.Dnum + r1.Dnum * r2.Num;
        Dnum = r1.Dnum * r2.Dnum;
        refine();
    }
    bool operator ==(const Rational &r1){return ((Num/Dnum)==(r1.Num/r1.Dnum));}
    bool operator !=(const Rational &r1){return ((Num/Dnum)!=(r1.Num/r1.Dnum));}
    Rational operator+(const Rational &r1) const
    {
        Rational temp;
        temp.Num = Num * r1.Dnum + Dnum * r1.Num;
        temp.Dnum = r1.Dnum * Dnum;
        temp.refine();
        return temp;
    }
    Rational operator-(const Rational &r1) const
    {
        Rational temp;
        temp.Num = Num * r1.Dnum - Dnum * r1.Num;
        temp.Dnum = r1.Dnum * Dnum;
        temp.refine();
        return temp;
    }
    Rational operator*(const Rational &r1) const
    {
        Rational temp;
        temp.Num = Num * r1.Num;
        temp.Dnum = r1.Dnum * Dnum;
        temp.refine();
        return temp;
    }
    Rational operator/(const Rational &r1) const
    {
        Rational temp;
        temp.Num = Num * r1.Dnum;
        temp.Dnum = Dnum * r1.Num;
        temp.refine();
        return temp;
    }
    friend ostream &operator<<(ostream &, const Rational &);
    friend istream &operator>>(istream &, Rational &);
};
istream &operator>>(istream &in, Rational &r)
{
    cout << "Enter Numinator:   ";
    in >> r.Num;
    cout << "Enter Denuminator:   ";
    in >> r.Dnum;
    r.refine();
    return in;
}
ostream &operator<<(ostream &os, const Rational &r)
{
    os << setw(1) << r.Num << setw(1) << "/" << setw(4) << r.Dnum;
    return os;
}
int main()
{
    cout << "Enter Denominator:   ";
	int n;
	cin >> n;
	cout << setiosflags(ios::left);
	Rational r1;
	cout << "      ";
	for (int i = 1; i < n; i++)
		cout << setw(5) << Rational(i, n);
	cout << endl;
	for (int i = 1; i < n; i++)
	{
		r1 = Rational(i, n);
		cout << setw(5) << r1;
		for (int j = 1; j < n; j++)
			cout << setw(5) << r1 * Rational(j, n);
		cout << endl;
	}
    return 0;
}