#include <bits/stdc++.h>
#define size 3
using namespace std;
class Distance
{
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0f) {}
    void get()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
        cout << endl;
        while (inches >= 12)
        {
            inches -= 12;
            feet++;
        }
    }
    void show() const
    {
        cout << "\nfeet: " << feet << "\ninches: " << inches << endl;
    }
    void add_dist(const Distance &d1, const Distance &d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        while (inches >= 12)
        {
            inches -= 12;
            feet++;
        }
    }
    void div_dist(const Distance &d1, const int &d)
    {
        float fltfeet = d1.feet + d1.inches / 12.0;
        fltfeet /= d;
        feet = int(fltfeet);
        inches = (fltfeet - feet) * 12.0;
    }
    Distance operator+(const Distance &d)
    {
        Distance t;
        t.feet = feet + d.feet;
        t.inches = inches + d.inches;
        while (t.inches >= 12)
        {
            t.inches -= 12;
            t.feet++;
        }
        return t;
    }
    Distance operator-(const Distance &d)
    {
        if ((feet + inches / 12) >= (d.feet + d.inches / 12))
        {
            Distance t;
            t.feet = feet - d.feet;
            t.inches = inches - d.inches;
            while (t.inches >= 12)
            {
                t.inches -= 12;
                t.feet++;
            }
            return t;
        }
        else
        {
            cout << "ERROR: Distance cann't be negative....." << endl;
            exit(1);
        }
    }
    Distance operator/(int n)
    {
        if (n > 0)
        {
            Distance d1;
            float fltfeet = feet + inches / 12.0;
            fltfeet /= n;
            d1.feet = int(fltfeet);
            d1.inches = (fltfeet - d1.feet) * 12.0;
            return d1;
        }
        else
        {
            cout << "ERROR: Denominator cann't be zero....." << endl;
            exit(1);
        }
    }
    Distance operator*(int n)
    {if(n>0){
        Distance d1;
        float fltfeet = feet + inches / 12.0;
        fltfeet *= n;
        d1.feet = int(fltfeet);
        d1.inches = (fltfeet - d1.feet) * 12.0;
        return d1;}
        else{
            cout<<"ERROR: Invalid Distance cann't be negative...."<<endl;
            exit(1);
        }
    }
    Distance operator++()
    {
        Distance t;
        t.feet = ++feet;
        return t;
    }
    Distance operator--()
    {
        Distance t;
        t.feet = --feet;
        return t;
    }
    Distance operator++(int)
    {
        Distance t;
        t.feet = feet++;
        return t;
    }
    Distance operator--(int)
    {
        Distance t;
        t.feet = feet--;
        return t;
    }
};
int main()
{
    Distance d[size];
    for (int i = 0; i < size; i++)
        d[i].get();
    for (int i = 0; i < size; i++)
        d[i].show();
    Distance temp;
    for (int i = 0; i < size; i++)
        temp = temp + d[i];
    temp.show();
    temp = temp / size;
    temp.show();
    ++temp;
    temp.show();
    temp--;
    temp.show();
    return 0;
}