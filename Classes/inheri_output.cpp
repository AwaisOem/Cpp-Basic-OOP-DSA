#include <iostream>
using namespace std;
class base
{
public:
    base() 
    {
        f("base constructor"); 
    }
    base(const base &x)
    {
        cout << "base copy constructor\n";
    }
    virtual string v() 
    {
        return "base::v()"; 
    }
    void f(string caller)
    {
        cout << "When called from " << caller << ", " << v() << " gets called.\n";
    }
    ~base() 
    {
        f("base destructor"); 
    }
};
class derived : public base
{
public:
    derived() 
    {
        f("derived constructor"); 
    }
    string v() 
    {
        return "derived::v()"; 
    }
    ~derived() 
    {
        f("derived destructor");
    }
};
int main()
{
    derived *d = new derived;
    base *p = d;
    d = NULL;
    delete d;
    delete p;
}