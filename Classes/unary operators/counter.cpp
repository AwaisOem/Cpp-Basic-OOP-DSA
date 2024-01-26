#include <iostream>
using namespace std;
class Counter
{
protected:
    int count;
public:
    Counter(int n = 0) : count(n) {}
    int get_count() { return count; }
    Counter operator++()
    {
        return Counter(++count);
    }
    Counter operator--()
    {
        return Counter(--count);
    }
    ~Counter() {}
};
class Dcounter : public Counter
{
    // using Counter::operator --;
    // using Counter::operator ++;
public:
    Dcounter(int v = 0) : Counter(v) {}
    Dcounter operator++(int)
    {
        return Dcounter(count++);
    }
    Counter operator--(int)
    {
        return Dcounter(count--);
    }
};
int main()
{
    Dcounter c1(3), c2;

    c1--;
    c2 = c1++;

    cout << c1.get_count() << endl;
    cout << c2.get_count();

    return 0;
}