#include <iostream>
#include <process.h>
using namespace std;
class Int
{
       int a;

public:
       Int(int s = 0) : a(s) {}
       Int operator+(const Int &s)
       {
              long double d = a + s.a;
              if (d > 2147483648 && d < -2147483648)
              {
                     cout << "ERROR:: Limit exceeded......" << endl;
                     exit(1);
              }
              return Int(d);
       }
       Int operator-(const Int &s)
       {
              long double d = a - s.a;
              if (d > 2147483648 && d < -2147483648)
              {
                     cout << "ERROR:: Limit exceeded......" << endl;
                     exit(1);
              }
              return Int(d);
       }
       Int operator*(const Int &s)
       {
              long double d = a * s.a;
              if (d > 2147483648 && d < -2147483648)
              {
                     cout << "ERROR:: Limit exceeded......" << endl;
                     exit(1);
              }
              return Int(d);
       }
       Int operator/(const Int &s)
       {
              return Int(a / s.a);
       }
       friend ostream &operator<<(ostream &os, const Int &a)
       {
              cout << "this is the number ";
              os << a.a << endl;
              return os;
       }
       friend istream &operator>>(istream &in, Int &a)
       {
              cout << "Enter any number:    ";
              in >> a.a;
              return in;
       }
};
int main()
{
       Int s1, s2;
       cin >> s1>>s2;
       cout << s1+s2<<endl;
       //Int s3=s1+s2;
       //cout<<s3;
       return 0;
}