#include <iostream>
using namespace std;
class seq
{
    int arr[10], i;
public:
    seq() : i(0) {}
    void append(int n) { arr[i++] = n; }
    void addAll(int a)
    {
        for (int j = 0; j < i; j++)
            arr[j] += a;
    }
    void multAll(int a)
    {
        for (int j = 0; j < i; j++)
            arr[j] *= a;
    }
    int getIndex(int h)
    {
        if (h < 0 || h >= i)
            return -1;
        return arr[h];
    }
};
int main()
{
    seq s;
    s.append(2);
    s.addAll(3);
    s.append(7);
    s.multAll(2);
    cout << s.getIndex(0) << endl;
    s.addAll(3);
    s.append(10);
    s.multAll(2);
    cout << s.getIndex(0) << endl;
    cout << s.getIndex(1) << endl;
    cout << s.getIndex(2) << endl;
    return 0;
}

