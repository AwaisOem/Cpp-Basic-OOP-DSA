#include <iostream>
#define size 100
using namespace std;
class Distance
{
    int feet; float inches;

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
    void show()const
    {
        cout << "\nfeet: " << feet << "\ninches: " << inches << endl;
    }
    void add_dist(const Distance &d1,const Distance &d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        while (inches >= 12)
        {
            inches -= 12;
            feet++;
        }
    }
    void div_dist(Distance d1, int d)
    {
        float fltfeet = d1.feet + d1.inches / 12.0;
        fltfeet /= d;
        feet = int(fltfeet);
        inches = (fltfeet - feet) * 12.0;
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
        temp.add_dist(temp,d[i]);
    temp.div_dist(temp,size);
    temp.show();
    return 0;
}