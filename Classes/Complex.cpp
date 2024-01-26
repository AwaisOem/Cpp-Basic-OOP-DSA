// Create a class Complex which represents two data members’ real and img with type integer.
//  Create members function that get the real and img from the user and 
//Showcomplex () member function that display the complex number in a+bi format.
//  Create a default constructor that automatically sets the complex data members to 0’s.
//   Create an additional overloaded constructor for this class.
//    This constructor receives an integer as parameter and assigns the value to the class data members.
//     Class also include a member function Addcomplex (Complex) to add two Complex objects. 
//     Create a main () function that declared three object of complex, 
//     add two complex no’s and then show the sum of two complex by main function
// . Makes the appropriate members function as const member function.
//  Demonstrates each function works correctly.
#include<iostream>
#include<iomanip>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex(int a=0,int b=0):real(a),img(b) {}
    void getcomplex(){
        cout<<"ENTER REAL PART:   ";
        cin>>real;
        cout<<"ENTER IMG PART:   ";
        cin>>img;
    }
    void Showcomplex() const
    {
        cout<<"Complx Number: "<<real<<"+"<<img<<"i"<<endl;
    }
        Complex operator +(const Complex &r1) const
        {
            Complex temp;
            temp.real = r1.real+real;
            temp.img = r1.img+img;
            return temp;
        }
        void Addcomplex(const Complex &r1,const Complex &r2){
            real= r1.real+r2.real;
            img= r1.img+r2.img;
        }
};
int main(){
    Complex r1,r3;
    const Complex r2(5,8);
    r1.getcomplex();
    r2.Showcomplex();
    r3=r2+r1;
    r3.Showcomplex();
 return 0;   
}