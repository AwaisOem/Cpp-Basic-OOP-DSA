#include<bits/stdc++.h>
using namespace std;
class Polynomial
{
    double a,b,c;
    public:
    Polynomial(double a = 0,double b = 0,double c = 0):a(a),b(b),c(c) {}
    Polynomial(const Polynomial & s)
    {
        this->a = s.a;
        this->b = s.b;
        this->c = s.c;
    }
    void operator = (const Polynomial &s)
    {
        this->a = s.a;
        this->b = s.b;
        this->c = s.c;
    }
    bool operator==(const Polynomial & s)const
    {
        double r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        double r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        double sr1=(-s.b+sqrt((s.b*s.b)-(4*s.a*s.c)))/(2*s.a);
        double sr2=(-s.b-sqrt((s.b*s.b)-(4*s.a*s.c)))/(2*s.a);
        return (r1==sr1 && r2==sr2);
    }
    Polynomial operator + (const Polynomial &p)const
    {
        return Polynomial(a + p.a,b + p.b,c + p.c);
    }
    Polynomial operator - (const Polynomial &p)const
    {
        return Polynomial(a - p.a,b - p.b,c - p.c);
    }
    Polynomial operator ++()
    {
        return Polynomial(++a,++b,++c);
    }
    Polynomial operator ++(int)
    {
        return Polynomial(a++,b++,c++);
    }
    Polynomial operator --()
    {
        return Polynomial(--a,--b,--c);
    }
    Polynomial operator --(int)
    {
        return Polynomial(a--,b--,c--);
    }
    void showpoly()const
    {
        if (a!=0)
            cout<<a<<"x^2 ";
        if (b>0)
            cout<<"+";
        if (b!=0)
            cout<<b<<"x ";
        if (c>0)
            cout<<"+";
        if (c!=0)
            cout<<c;
        cout<<endl;
    }
    ~Polynomial(){}
};
main(){
return 0;   
}