#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Binary
{
    string b;
    int c[16], bit_count, carry;
public:
    Binary(string b = "") : b(b), c{0}, bit_count(0), carry(0)
    {
        for (int i = 0; i < b.size(); i++)
        {
            c[i]=((b[i]=='1')?1:(b[i]=='\0')?0:0);
            bit_count++;
        }
    }
    void get()
    {
        cout << "Enter Binary Number:   ";
        cin >> b;
        for (int i = 0; i < b.size(); i++)
        {
            c[i] = ((b[i]=='1')?1:(b[i]=='\0')?0:0);
            bit_count++;
        }
    }
    void shw() const
    {
        cout << "\nBinary number is:    ";
        for (int i = 0; i < bit_count; i++)
            cout << c[i];
        cout << endl;
    }
    Binary Add(const Binary &d) const
    {
        Binary temp;
        int i = bit_count - 1, j = d.bit_count - 1;
        while (i >= 0 || j >= 0 || temp.carry == 1)
        {
            temp.c[temp.bit_count++] = (c[i] + d.c[j] + temp.carry) % 2;
            temp.carry = (c[i--] + d.c[j--] + temp.carry) / 2;
        }
        for (int i = 0; i < temp.bit_count / 2; i++)
            swap(temp.c[temp.bit_count - 1 - i], temp.c[i]);
        return temp;
    }
    ~Binary() {}
};
int main(){}