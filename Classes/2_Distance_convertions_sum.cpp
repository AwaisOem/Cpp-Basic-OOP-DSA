#include <iostream>
using namespace std;
class DB;
class DM
{
    int meter, centi;

public:
    DM() : meter(0), centi(0) {}
    friend DM sumDM(DM a, DB b);
    friend DB sumDB(DB a, DM b);
    void set(int a, int b)
    {
        meter = a;
        centi = b;
        meter = meter + (centi / 100);
        centi %= 100;
    }
    void show() const
    {
        cout << "meter: " << meter << " centi: " << centi << endl;
    }
};
class DB
{
    int feet, inch;

public:
    DB() : feet(0), inch(0) {}
    friend DM sumDM(DM a, DB b);
    friend DB sumDB(DB a, DM b);
    void set(int a, int b)
    {
        feet = a;
        inch = b;
        feet = feet + (inch / 12);
        inch %= 12;
    }
    void show()
    {
        cout << "foots: " << feet << " inch: " << inch << endl;
    }
};
DM sumDM(DM a, DB b)
{
    DM d;
    double t1 = b.feet + (b.inch / 12.0);
    t1 *= 0.305;
    d.meter = a.meter + int(t1);
    t1 -= int(t1);
    d.centi = a.centi + (t1 * 100);
    d.meter = d.meter + (d.centi / 100);
    d.centi %= 100;
    return d;
}
DB sumDB(DB a, DM b)
{
    DB d;
    double t1 = b.meter + (b.centi / 100.0);
    t1 /= 0.305;
    d.feet = a.feet + int(t1);
    t1 -= int(t1);
    d.inch = a.inch + (t1 * 12);
    d.feet = d.feet + (d.inch / 12);
    d.inch %= 12;
    return d;
}
int main()
{
    DM d1;
    DB d2;
    d1.set(5, 120);
    d2.set(5, 45);
    d1.show();
    d2.show();
    DM d3 = sumDM(d1, d2);
    DB d4 = sumDB(d2, d1);
    d3.show();
    d4.show();
    return 0;
}