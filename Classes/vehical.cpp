// Write a Program in which class Car, Cycle, HorseCar, Truck
// all having fuel(int) property if needed are inherited from class Vehicle in which
// 3 virtual functions bool HaveEngine() and int Fuel_Capacity() are necessary to be implemented in child classes
// and void input() is optional. 
// Write a main function having 
// array of 4 size stores objects of all child classes and input in for 
//loop only if that vehical have engine and than show fuel capacity of all.
#include<iostream>
using namespace std;
class Vehicle
{
    protected:
    int fuel_capacity;
    public:
    virtual bool HaveEngine()const = 0;
    virtual int Fuel_Capacity()const = 0;
    virtual void input () {};
};
class Car : public Vehicle
{
    public:
    Car(int f=0)
    {
        fuel_capacity = f;
    }
    void input(){cin>>fuel_capacity;}
    bool HaveEngine()const{return true;}
    int Fuel_Capacity()const{return fuel_capacity;}
};
class Truck : public Vehicle
{
    public:
    Truck(int f=0) {
        fuel_capacity = f;
    }
    void input()
    {
        cin>>fuel_capacity;
    }
    bool HaveEngine()const{return true;}
    int Fuel_Capacity()const{return fuel_capacity;}
};
class Cycle : public Vehicle
{
    public:
    bool HaveEngine()const{return false;}
    int Fuel_Capacity()const{return 0;}
};
class HorseCar : public Vehicle
{
    public:
    bool HaveEngine()const{return false;}
    int Fuel_Capacity()const{return 0;}
};
int main()
{
    Vehicle * ptr[4];
    ptr[0] = new Car;
    ptr[1] = new Cycle;
    ptr[2] = new HorseCar;
    ptr[3] = new Truck;
    for (int i = 0; i < 4; i++)
        if (ptr[i]->HaveEngine())
            ptr[i]->input();
    for (int i = 0; i < 4; i++)
        cout<<ptr[i]->Fuel_Capacity()<<"\t";
    return 0;   
}