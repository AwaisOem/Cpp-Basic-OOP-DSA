// (Date Class)
#include <iostream>
using namespace std;
class Date
{
    unsigned int day, month, year;

public:
    Date() : day(1), month(1), year(1700) {}
    Date(int day, int month, int year) : day(day), month(month), year(year) {}
    friend std::ostream &operator<<(std::ostream &os, const Date &date);
    friend istream &operator>>(istream &in, Date &d);
};
ostream &operator<<(ostream &os, const Date &d)
{
    cout << d.day << "/" << d.month << "/" << d.year;
    return os;
}
istream &operator>>(istream &in, Date &d)
{
    cout<<"Enter Day Month Year:    "<<endl;
    in >> d.day >> d.month >> d.year;
     if (d.month > 12 || d.month == 0)
        d.month = 1;
    if (d.day > 31 || d.day == 0)
        d.day = 1;
    if (d.year < 1700)
        d.year = 1700;
    return in;
}
int main()
{
    Date d1(2, 3, 2020), d2(3, 4, 2021), d3;
    cin>>d3;
    cout<<d1<<endl;
    cout<<d2<<endl;
    cout<<d3<<endl;
    return 0;
}