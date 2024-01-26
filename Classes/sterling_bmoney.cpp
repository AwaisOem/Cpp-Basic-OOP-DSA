/*
Write a program having two classes and 2 extra functions
Functions:
    >for string to double convertion
    >for double to string convertion(detail at reference 1)
Class 1::(DollarMoney)
    private:
        double money;
    public:
        3 constructors
            >defualt
            >having parameter string(convert into double and then assign to data member)
            >having parameter double(assign data to data member)
        function:: get to input value in data member(input in string then convert and assign to data member)
        function:: show to show value in string(convert data member to string and then print)
        function:: add having no return type and two parameters of this class(add then and assign them to caller object)
        operator:: + for addition of two class objects
        operator:: - for subtraction of two class objects
        operator:: * for multiplication of two class objects
        operator:: / for division of two class objects
        2nd overload operator:: / for division of class object to double
        2nd overload operator:: * for multiplication of class object to double
        Data convertion:: operator Poundmoney();(for detail check reference 2)
Class 2::(Poundmoney)
    private:
        long pound,int shelling,int pound;
    public:
        2 constructors
            >merged{defualt+3 parameter(take values from 3 parameters *refine it* and store in data members)}
            >having one parameter double (inside constructor convert value to stor in 3 datamembers)
        function:: getold for input in 3 members  
        function:: getnew for input in 1 double variable and then convert
        function:: show for show pounds in p.sh.pe format
        operator:: + for addition of two class objects
        operator:: - for subtraction of two class objects
        operator:: * for multiplication of two class objects
        operator:: / for division of two class objects
        2nd overload operator:: / for division of class object to double
        2nd overload operator:: * for multiplication of class object to double
        operator * for (double * object)(optional if you know freind functions)
        operator / for (double / object)(optional if you know freind functions)
        Data convertion:: operator Dollarmoney();(for detail check reference 2)

Main Function::(for use of main function no restrictions use to check features)
    declare 2,2 objects of both classes
    convert one type to another and vice versa

Note::Make sure classes work in every case (no logical error), check and make some func to const, minimize extra variables
Reference 1::
    convert double into string having dollar sign in start index and comma as international standard like "$3,789,987.234"
    Alert:: remember range of varibles
    HINT::its better to use push_back(built in string mem func)
Reference 2::
    convert between dollar and pound and keep in mind one pound (£1.0.0) equals fifty dollars ($50.00)
    HINT:: declare class at start as like as function prototyping(class Classname;)
other References:: 
    old-style British format (£9:19:11)
    new-style British format (£9.34)
    There were 20 shillings to a pound, and 12 pence to a shilling.
    (hex character constant ‘\x9c’)to represent the pound sign (£). 
*/
#include <bits/stdc++.h>
using namespace std;
long double mstold(const string &str);
long double mstold(const char *str);
string ldtoms(long double n);
class sterling;
class bMoney
{
private:
    long double money;

public:
    bMoney() : money(0) {}
    bMoney(char s[]) : money(mstold(s)) {}
    explicit bMoney(long double s) : money(s) {}
    void madd(bMoney m1, bMoney m2)
    {
        money = m1.money + m2.money;
    }
    bMoney operator+(const bMoney &m1) const
    {
        bMoney t;
        t.money = money + m1.money;
        return t;
    }
    bMoney operator-(const bMoney &m1) const
    {
        return bMoney(money - m1.money);
    }
    bMoney operator/(const bMoney &m1) const
    {
        return bMoney(money / m1.money);
    }
    bMoney operator/(const long double &m1) const
    {
        return bMoney(money / m1);
    }
    bMoney operator*(const long double &m1) const
    {
        return bMoney(money * m1);
    }
    void getmoney()
    {
        string str;
        cout << "Enter money String:  ";
        cin >> str;
        money = mstold(str);
    }
    void putmoney()
    {
        cout << endl
             << ldtoms(money) << endl;
    }
    friend bMoney operator*(long double m, bMoney b)
    {
        return bMoney(m * b.money);
    }
    friend bMoney operator/(long double m, bMoney b)
    {
        return bMoney(m / b.money);
    }
    operator sterling();
};
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
    operator bMoney();
};
long double mstold(const string &str)
{
    string r = "";
    int k = 0;
    for (int i = 0; i < str.length(); i++)
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == '.')
            r[k++] = str[i];
    return stold(r);
}
long double mstold(const char *str)
{
    string r = "";
    int k = 0;
    for (int i = 0; i < strlen(str); i++)
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == '.')
            r[k++] = str[i];
    return stold(r);
}
string ldtoms(long double n)
{
    string str = "";
    long long a = n;
    long long l = n;
    int _3 = 0;
    while (a > 0)
    {
        int k = a % 10;
        int itost = 0;
        if (_3++ % 3 == 0)
        {
            str.push_back(',');
        }
        for (char s = '0'; s <= '9' || itost <= 9; itost++, s++)
        {
            if (k == itost)
            {
                str.push_back(s);
                break;
            }
        }
        a /= 10;
    }
    str.push_back('$');
    for (int i = 0; i < str.size() / 2; i++)
    {
        char temp = str[i];
        str[i] = str[str.size() - 1 - i];
        str[str.size() - 1 - i] = temp;
    }
    int po = 20 - str.length();
    str.pop_back();
    str.push_back('.');
    string str2 = "";
    long long f = (n - l) * pow(10, po);
    while (f > 0)
    {
        int k1 = f % 10;
        int itost1 = 0;
        for (char s1 = '0'; s1 <= '9' || itost1 <= 9; itost1++, s1++)
        {
            if (k1 == itost1)
            {
                str2.push_back(s1);
            }
        }
        f /= 10;
    }
    for (int i = 0; i < str2.size() / 2; i++)
    {
        char temp = str2[i];
        str2[i] = str2[str2.size() - 1 - i];
        str2[str2.size() - 1 - i] = temp;
    }
    while (str2[str2.length() - 1] == '0')
    {
        str2.pop_back();
    }
    str.append(str2);
    return (str);
}

sterling::operator bMoney()
{
    return bMoney(double(sterling(pound, shelling, pence)) * 50.0);
}
bMoney::operator sterling()
{
    return sterling(double(money / 50.0));
}
int main()
{
    sterling s1, s2;
    bMoney b1, b2;
    s1.getSterling();
    b1 = s1;
    b1.putmoney();
    b2.getmoney();
    s2 = b2;
    s2.putSterling();
    return 0;
}
