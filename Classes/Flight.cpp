// *Question 10*
// Define a class Flight in C++ with following description:
// Private Members
// A data member Flight number of type integer
// A data member Destination of type string
// A data member Distance of type float
// A data member Fuel of type float
// A member function CALFUEL() to calculate the value of Fuel as per the following criteria
// Distance			Fuel
// <=1000			500
// more than 1000 and <=2000 		1100
// more than 2000 			2200
// Public Members
// A function FEEDINFO() to allow user to enter values for Flight Number, Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel
// A function SHOWINFO() to allow user to view the content of all the data members 
#include<iostream>
#include<string>
using namespace std;
class Flight
{
    private:
        int Flight_number;
        string Destination;
        float Distance;
        float Fuel;
        void CALFUEL()
        {
            if (Distance<=1000)
            {
                Fuel=500;
            }
            else if (Distance<=2000 && Distance>1000)
            {
                Fuel=1100;
            }
            else
            {
                Fuel=2200;
            }
        }
    public:
    Flight():Flight_number(0),Distance(0),Fuel(0),Destination("\0"){}
        void FEEDINFO()
        {
            cout << "Enter Flight Number:     ";
            cin >> Flight_number;
            cout << "Enter Destination:   ";
            cin.ignore();
            getline(cin, Destination);
            cout << "Enter Distance:     ";
            cin >>Distance;
            CALFUEL();
            cout<<"\n";
        }
        void SHOWINFO()
        {
            cout << "Flight Number:    "<<Flight_number<<endl;
            cout << "Destination:   "<<Destination<<endl;
            cout << "Distance:     "<<Distance<<endl;
            cout<<"Fuel:    "<<Fuel<<endl;
            cout<<"\n";
        }
        ~Flight(){cout<<"I am destructor\n";}
};
int main(){
Flight f1;
f1.FEEDINFO();
f1.~Flight(); /// FIXME: calling desstructor cann't destroy object but execute what is inside this
f1.SHOWINFO();
 return 0;   
}