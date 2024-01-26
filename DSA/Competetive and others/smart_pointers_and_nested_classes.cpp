#include <bits/stdc++.h>
#include <memory>
using namespace std;
class A
{
    int a;
public:
    class B
    {
        int a = 10;

    public:
        class C
        {
            int a = 8;

        public:
            C() : a(6)
            {
                cout << "created inner inner " << endl;
            }
            void f()
            {
                cout <<"i am C and my value is "<<a<< endl;
            }
            ~C()
            {
                cout << "Destroyed inner inner" << endl;
            }
        };
        B() : a(10)
        {
            cout << "created inner" << endl;
        }
        void f()
        {
            cout <<"i am B and my value is "<<a<< endl;
        }
        ~B()
        {
            cout << "Destroyed inner" << endl;
        }
    };
    A() : a(0)
    {
        cout << "CREATED outer" << endl;
    }
    void print()
    {
        cout << "AWAIS RAZA" << endl;
    }
    ~A()
    {
        cout << "DESTROYED outer" << endl;
    }
};
int main()
{
    // shared_ptr<A> p = make_shared<A>();
    // weak_ptr<A> f = p;
    // unique_ptr<A::B::C> q = make_unique<A::B::C>();
    // q->f();
    int n=10;
    cout<<0<<endl;
    for (int i = 1; i <n; i++)
    {
        int k=n-i,h=n-1;
        for (int j = i; j>0; j--)
            cout<<k++;
        cout<<0;
        for (int j = i; j>0; j--)
            cout<<h--;
        cout<<endl;
    }
    return 0;
}