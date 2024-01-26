// Writes a class Triangle with the data member base, height, area and color. The base,
// height and area are double type and color is type c-string (a c-string is defined as an array of
// type char). The member functions of the class is inputData() for taking base, height and color
// values from the user and findArea() member function to calculate the area of the rectangular
// using formula area=1/2*base*height.
// Create another class name MatchTriangle that overloads (==) operator for comparing class
// objects. Define appropriate constructors of the classes.
// Create two objects of in main (), inputs the values and compare the objects. If the area and
// color of both objects are same then display a message in main () “Matching Triangle”,
// otherwise display a message “Non-Matching Triangle”
#include <iostream>
#include <cstring>
using namespace std;
class Triangle
{
	double base, height, area;
	char color[20];

public:
	Triangle() : base(0), height(0), area(0) 
	{
		strcpy(color, ""); 
	}
	Triangle(double b, double h, const char c[]) : base(b), height(h), area(0.5 * b * h)
	{
		strcpy(color, c);
	}
	void inputData()
	{
		cin >> base >> height >> color;
	}
	double findArea()
	{
		area = 0.5 * base * height;
		return area;
	}
	char *Getcolor() { return color; }
};
class MatchingTriangle
{
	Triangle t;

public:
	MatchingTriangle(const Triangle &w) : t(w) {}
	bool operator==(Triangle &e)
	{
		return (t.findArea() == e.findArea() && (strcmp(t.Getcolor(), e.Getcolor()) == 0));
	}
};
int main()
{
	Triangle t, t1;

	t.inputData();
	
	t1.inputData();
	
	MatchingTriangle temp(t);
	
	if (temp == t1)
	{
		cout << "MatchingTriangle" << endl;
	}
	else
	{
		cout << "NON MatchingTriangle" << endl;
	}
	return 0;
}