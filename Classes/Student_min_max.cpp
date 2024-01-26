#include<bits/stdc++.h>
using namespace std;
class Student
{
    long roll;
    char name[20],subject[3][20];
    int max_mark,min_mark,marks[3];
    public:
    void input()
    {
        cout<<"Enter roll no: ";
        cin>>roll;
        cout<<"Enter Name: ";
        cin>>name;
        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter subject-"<<i+1<<" name: ";
            cin>>subject[i];
            cout<<"Enter marks of "<<subject[i]<<" :    ";
            cin>>marks[i];
        }
        min_mark=(((marks[0]<marks[1])?marks[0]:marks[1])>marks[2])? marks[2]:((marks[0]<marks[1])?marks[0]:marks[1]);
        max_mark=(((marks[0]>marks[1])?marks[0]:marks[1])<marks[2])? marks[2]:((marks[0]<marks[1])?marks[0]:marks[1]);
    }
    void show()
    {
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        for (int i = 0; i < 3; i++)
            cout<<"Marks of "<<subject[i]<<" :  "<<marks[i]<<endl;
        cout<<"Minimum marks are "<<min_mark<<endl;
        cout<<"Maximum marks are "<<max_mark<<endl;
        cout<<"percentage is "<<(((marks[0]+marks[1]+marks[2])/300.0)*100.0)<<endl;
    }
};
// class checkconsdes
// {
//     double angle,radius;
// public:
// checkconsdes():angle(0),radius(0){
//     cout<<"Default constructor Invoked"<<endl;
// }
// checkconsdes(double a,double r):angle(a),radius(r)
// {
//     cout<<"Parameterized constructor Invoked"<<endl;
// }
// checkconsdes(const checkconsdes &C )
// {
//     radius = C.radius;
//     angle = C.angle;
//     cout<<"Copy constructor Invoked"<<endl;
// }
// ~checkconsdes()
// {
//     cout<<"Destructor Invoked"<<endl;
// }
// };
int main(){
    Student s1;
    s1.input();
    s1.show();
 return 0;   
}