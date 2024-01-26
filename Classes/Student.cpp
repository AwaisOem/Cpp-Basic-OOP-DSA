// *Question 7*  
// Define a class student with the following specification
// Private members of class student
// admno	integer
// sname	20 character
// eng. math, science	float
// total	float
// ctotal()	a function to calculate eng + math + science with float return type.
// Public member function of class student
// Takedata()	Function to accept values for admno, sname, eng, science     
//  	and invoke ctotal() to calculate total.
// Showdata()	Function to display all the data members on the screen
#include<iostream>
using namespace std;
class student
{
    private:
        int admno;
        char sname[20];
        float eng,math,science,total;
    float ctotal()
    {
        return eng + math + science;
    }
    public:
    student():admno(0),sname{},eng(0),math(0),science(0),total(0){}
    void Takedata()
    {
        cout<<"Enter Admisssion number of student:  ";
        cin>>admno;
        cout<<"Enter Name of student:  ";
        cin.ignore();
        cin.getline(sname,20);
        cout<<"Enter Marks in English:  ";
        cin>>eng;
        cout<<"Enter Marks in Math:  ";
        cin>>math;
        cout<<"Enter Marks in Science:  ";
        cin>>science;
        total=ctotal();
    }
    void Showdata()
    {
        cout<<"Admisssion number of student:  "<<admno<<endl;
        cout<<"Name of student:  "<<sname<<endl;
        cout<<"Marks in English:  "<<eng<<endl;
        cout<<"Marks in Math:  "<<math<<endl;
        cout<<"Marks in Science:  "<<science<<endl;
        cout<<"Total Marks:  "<<total<<endl;
    }
};
int main()
{
student awais;
awais.Takedata();
awais.Showdata();
 return 0;   
}