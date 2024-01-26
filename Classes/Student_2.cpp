// *Question 6* 
//Write a program that declare a class Student with five data members to store five subject mark of student.
// Class also includes three member function for input marks,
// Sum() to calculate and return the sum of five subject and Avg() to calculate and return the average marks of five subject. 
//Each subject has a maximum of 100 marks. Use this class in your program.
#include<iostream>
using namespace std;
class Student
{
private:
    int Math,Physic,Prog,ICT,Islamiat;
public:
    Student():Math(0),Physic(0),Prog(0),ICT(0),Islamiat(0){}
    void input_marks()
    {
        cout<<"Enter number of Math:   ";
        cin>>Math;
        cout<<"Enter number of Physic:   ";
        cin>>Physic;
        cout<<"Enter number of Programming:   ";
        cin>>Prog;
        cout<<"Enter number of ICT:   ";
        cin>>ICT;
        cout<<"Enter number of Islamiat:   ";
        cin>>Islamiat;
    }
    int Sum(){
        return (Math+Physic+Prog+ICT+Islamiat);
    }
    double Avg(){
        return (Math+Physic+Prog+ICT+Islamiat)/5.0;
    }
};
int main()
{
    Student Zeeshan,Saqib;
    cout<<"************************Enter marks of Zeeshan************************"<<endl;
    Zeeshan.input_marks();
    cout<<"************************Enter marks of Saqib************************"<<endl;
    Saqib.input_marks();
    cout<<"\n";
    if(Saqib.Sum()>Zeeshan.Sum())
        cout<<"SAQIB HAS HIGHER MARKS THAN ZEESHAN"<<endl;
    else
        cout<<"ZEESHAN HAS HIGHER MARKS THAN SAQIB"<<endl;
    cout<<"\n";
    if(Saqib.Avg()>Zeeshan.Avg())
        cout<<"SAQIB HAS HIGH Average THAN ZEESHAN"<<endl;
    else
        cout<<"ZEESHAN HAS HIGH Average THAN SAQIB"<<endl;
 return 0;   
}