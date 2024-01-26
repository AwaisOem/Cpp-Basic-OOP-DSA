///Longitude is measured from 0 to 180 degrees, east or west Latitude is measured from 0 to 90
// degrees, north or south from the equator to the poles.
// This class can hold either
// a latitude variable or a longitude variable
#include<iostream>
#include<iomanip>
using namespace std;
class angle{
    int degree; // degree
    float minutes;
    char dir; //(N, S, E, or W)
    public:
    angle(int degree=0, float minutes=0, char dir='\0') : degree(degree), minutes(minutes), dir(dir){}
    void get(){
        cout<<"Enter Degree minutes diresction(char)\n";
        cin>>degree>>minutes>>dir;}
    void display(){
        while(minutes>=60){
            minutes-=60;
            degree++;}
        cout<<endl<<degree<<'\xF8'<<minutes<<"' ";
        switch (dir)
        {
        case 'n':
        case 'N':
        case 's':
        case 'S':
            cout<<"Longnitude";
            break;
        case 'e':
        case 'E':
        case 'w':
        case 'W':
            cout<<"Latitude";
            break;
        default:
        cout<<"invalid";
            break;
        }
        cout<<endl;
    }
};
int main(){
angle A(130,70.0f,'E');
A.display();
angle A1;
char dis;
do
{
    A1.get();
    A1.display();
    cout<<"Do you want to add more locations? ";
    cin>>dis;
} while (dis!='N' || dis!='n');
return 0;   
}