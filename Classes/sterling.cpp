#include <bits/stdc++.h>
using namespace std;
class sterling
{
    long pound;
    int shelling, pence;

public:
    sterling(int p = 0, int sh = 0, int pe = 0) : pound(p), shelling(sh), pence(pe)
    {
        shelling += (pence / 12);
        pence %= 12;
        pound += (shelling / 20);
        shelling %= 20;
    }
    sterling(double p)
    {
        long a = long(p);
        double d = (p - a) * 20.0;
        int e = (d - int(d)) * 12;
        pound = a;
        shelling = int(d);
        pence = e;
    }
    void getSterling()
    {
        cout << "Enter Pounds in format(po:sh:pe):    ";
        char d1, d2;
        cin >> pound >> d1 >> shelling >> d2 >> pence;
    }
    void set(int p, int sh, int pe)
    {
        pound = p;
        shelling = sh;
        pence = pe;
    }
    void putSterling() const
    {
        cout << endl
             << "£" << pound << "." << shelling << "." << pence << endl;
    }
    sterling operator+(sterling s1) const
    {
        return sterling(double(sterling(pound, shelling, pence)) + double(s1));
    }
    sterling operator-(sterling s1) const
    {
        return sterling(double(sterling(pound, shelling, pence)) - double(s1));
    }
    sterling operator*(sterling s1) const
    {
        return sterling(double(sterling(pound, shelling, pence)) * double(s1));
    }
    sterling operator/(sterling s1) const
    {
        return sterling(double(sterling(pound, shelling, pence)) / double(s1));
    }
    sterling operator*(const double &s1) const
    {
        return sterling(double(sterling(pound, shelling, pence)) / s1);
    }
    sterling operator/(const double &s1) const
    {
        return sterling(double(sterling(pound, shelling, pence)) * s1);
    }
    operator double()
    {
        return (pound + (shelling + (pence / 12.0)) / 20.0);
    }
};
int main()
{

    return 0;
}