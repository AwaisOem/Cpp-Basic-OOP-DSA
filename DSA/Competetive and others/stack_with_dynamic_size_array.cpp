#include <iostream>
using namespace std;
void bound_error();
template <class T>
class LIFO
{
    T *arr;
    unsigned int size;
public:
    LIFO(int a = 0):size(a)
    {
        arr = new T[a];
        if (a > 0)
        {
            cout << "Enter values:: \n";
            for (int i = 0; i < a; i++)
                cin >> arr[i];
        }
    }
    void push_back(T n)
    {
        T a[++size];
        for (int i = 0; i < size - 1; i++)
            a[i] = arr[i];
        a[size - 1] = n;
        delete[] arr;
        arr = new T[size];
        for (int i = 0; i < size; i++)
            arr[i] = a[i];
    }
    void pop_up()
    {
        T a[--size];
        for (int i = 0; i < size; i++)
            a[i] = arr[i];
        delete[] arr;
        arr = new T[size];
        for (int i = 0; i < size; i++)
            arr[i] = a[i];
    }
    T peep()
    {
        return arr[size - 1];
    }
    int Size()
    {
        return size;
    }
    T operator[](unsigned int n)
    {
        if (n < 0 || n >= size)
            bound_error();
        return arr[n];
    }
};
int main()
{
    LIFO<int> w(3);
    w.push_back(1);
    w.push_back(2);
    w.push_back(3);
    w.push_back(4);
    w.push_back(5);
    w.push_back(6);
    w.push_back(7);
    w.push_back(8);
    w.pop_up();
    cout<<w .peep();
    return 0;
}
void bound_error()
{
    cout << "Error::memory out of bound....";
    exit(1);
}