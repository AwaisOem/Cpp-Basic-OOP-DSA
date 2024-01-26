#include <iostream>
using namespace std;
class Package
{
    string name, address, city, state;
    long ZIP_code;
    double weight, cost;
public:
    Package(string nam, string addres, string cit, string stat, long zip, double weigh, double cos) : ZIP_code(zip), name(nam), address(addres), city(cit), state(stat)
    {
        this->weight= (weigh<0) ? 0 : weigh;
        this->cost= (cos<0) ? 0 : cos;
    }
    double CalculateCost()
    {
        return weight * cost; 
    }
};
class TwoDayPackage : Package
{
    double flat_fee;
public:
    TwoDayPackage(string nam, string addres, string cit, string stat, long zip, double weigh, double cos, double flat_fe)
        : Package(nam, addres, cit, stat, zip, weigh, cos), flat_fee(flat_fe) {}
    double CalculateCost()
    {
        return Package::CalculateCost() + flat_fee; 
    }
};
class OvernightPackage : public Package
{
public:
    OvernightPackage(string nam, string addres, string cit, string stat, long zip, double weigh, double cos, double add_fe)
        : Package(nam, addres, cit, stat, zip, weigh, cos + add_fe) {}
};
int main()
{
    TwoDayPackage o1("TCS", "Sargodha", "Sargodha", "Pakistan", 1234, 34.5, 10, 23);
    cout << o1.CalculateCost() << endl;
    OvernightPackage o2("TCS", "Sargodha", "Sargodha", "Pakistan", 1234, 34.5, 10, 23);
    cout << o2.CalculateCost() << endl;
    return 0;
}