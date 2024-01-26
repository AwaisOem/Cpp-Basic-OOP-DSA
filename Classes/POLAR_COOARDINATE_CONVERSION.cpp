#include <iostream>
#include <cmath>
#define pi 3.1415
using namespace std;
class Polar;  /// declaration of polar class cz we use it before it defination in line 30

class Coordinate
{
    int x, y;

public:
    Coordinate(int x1 = 0, int y1 = 0) : x(x1), y(y1) {}
    void get()
    {
        cout << "Enter coordinate X >>";
        cin >> x;
        cout << "Enter coordinate Y >>";
        cin >> y;
    }
    void operator++() { x++; }
    void operator++(int) { y++; }
    void operator--() { x--; }
    void operator--(int) { y--; }
    void show()
    {
        cout << "coordinate X >>" << x << endl;
        cout << "coordinate Y >>" << y << endl;
        cout << endl;
    }
    operator Polar(); // Coordinate to Polar Data conversion
    /// this function declared here and defined at the end of Polar class
    /// because in this we use 2 arg constructor of Polar class and that is note defined yet
    Coordinate operator+(const Coordinate &d)
    {
        return Coordinate(x + d.x, y + d.y);
    }
    ~Coordinate() {}
};
class Polar
{
    float angle;
    int radius;

public:
    Polar(float a = 0.0f, int r = 0) : angle(a), radius(r) {}
    void get()
    {
        cout << "Enter Angle>>";
        cin >> angle;
        cout << "Enter Radius >>";
        cin >> radius;
    }
    void show()
    {
        cout << "Angle >>" << angle << endl;
        cout << "Radius >>" << radius << endl;
        cout << endl;
    }
    operator Coordinate() /// for data conversion of Coordinate to polar
    {
        return Coordinate((radius * cos(angle)), (radius * sin(angle)));
    }
    Polar operator+(const Polar &d)
    {
        return Polar(angle + d.angle, radius + d.radius);
    }
    ~Polar() {}
};
Coordinate::operator Polar()
{
    float r = sqrt(pow(x, 2) + pow(y, 2));
    float a = asin(y / r);
    return Polar(a * (180 / pi), r);
    /// solving as right triangle
}
int main()
{
    Coordinate c1, c2;
    Polar p1;
    c1.get();
    p1.get();
    c2 = p1;
    c2.show();
    p1 = c1;
    p1.show();
    return 0;
}