#include <bits/stdc++.h>
using namespace std;
long double mstold(const string &str);
long double mstold(const char *str);
string ldtoms(long double n);
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
    bMoney operator + (const bMoney &m1) const
    {
        bMoney t;
        t.money = money + m1.money;
        return t;
    }
    bMoney operator - (const bMoney &m1) const
    {
        return bMoney(money - m1.money);
    }
    bMoney operator / (const bMoney &m1) const
    {
        return bMoney(money / m1.money);
    }
    bMoney operator / (const long double &m1) const
    {
        return bMoney(money / m1);
    }
    bMoney operator * (const long double &m1) const
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
};
int main()
{
    // enter two money strings and a floating point number
    bMoney b1, b2;
    float widgets;
    char ch;
    do
    {
        b1.getmoney();
        b2.getmoney();
        cout << "Enter Widets";
        cin >> widgets;
        bMoney b3 = b1 + b2;
        b3.putmoney();
        b3 = b1 - b2;
        b3.putmoney();
        b3 = b1 / b2;
        b3.putmoney();
        b3 = b1 * widgets;
        b3.putmoney();
        b3 = b1 / widgets;
        b3.putmoney();
        cout << "press K to run again......";
        ch = getche();
        cout << endl;
    } while (ch == 'k');
    return 0;
}
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