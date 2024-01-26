#include <iostream>
using namespace std;
void bound_error();
template<class T>
class FIFO
{
    T *arr;
    int size;
public:
    FIFO(int a = 0):size(a)
    {
        arr = new T[a];
        if (a > 0)
        {
            cout << "Enter values:: \n";
            for (int i = 0; i < a; i++)
                cin >> arr[i];
        }
    }
    void enqueue(int n)
    {
        T a[++size];
        for (int i = 0; i < size - 1; i++)
            a[i] = arr[i];
        a[size - 1] = n;
        delete[] arr;
        arr = {};
        arr = new T[size];
        for (int i = 0; i < size; i++)
            arr[i] = a[i];
    }
    void dequeue()
    {
        T a[--size];
        for (int i = 0; i < size; i++)
            a[i] = arr[i+1];
        delete[] arr;
        arr = {};
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
    FIFO<int> w;
    w.enqueue(1);
    w.enqueue(2);
    w.enqueue(3);
    w.enqueue(4);
    w.enqueue(5);
    w.enqueue(6);
    w.enqueue(7);
    w.enqueue(8);
    w.dequeue();
    cout<<w[0];
    return 0;
}
void bound_error()
{
    cout << "Error::memory out of bound....";
    exit(1);
}