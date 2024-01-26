#include <bits/stdc++.h>
using namespace std;
class Triangle
{
protected:
    double base, height, area;
    char color[10];

public:
    Triangle() : base(0), height(0), area(0), color{NULL} {}
    void inputData()
    {
        cout << "Enter    Base   Height    Color  :\n";
        cin >> base >> height;
        cin.ignore();
        cin.getline(color, 10);
    }
    void findArea() { area = 0.5 * base * height; }
};
class MatchTriangle : public Triangle
{
public:
    MatchTriangle() {}
    bool operator==(const MatchTriangle &r)
    {
        return (area == r.area && (strcmp(color, r.color) == 0));
    }
};
int main()
{
    MatchTriangle m1, m2;
    m1.inputData();
    m2.inputData();
    if (m1 == m2)
        cout << "\nMatching Triangle...\n";
    else
        cout << "\nNon-Matching Triangle...\n";
    return 0;
}
