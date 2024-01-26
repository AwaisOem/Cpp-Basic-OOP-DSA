/// 10 02 - 10 09 30s
#include<bits/stdc++.h>
using namespace std;
class Student{
    char degree[20];
    public:
    Student(char degre[]="")
    {
        strcpy(degree, degre);
    }
    void input()
    {
        cin>>degree;
    }
    void output()
    {
        cout<<degree<<endl;
    }
    ~Student(){}
};
class Person{
    char name[20];
    int id;
    public:
    Person(char nam[]="",int idd=0):id(idd)
    {
        strcpy(name, nam);
    }
    void input()
    {
        cin>>name>>id;
    }
    void output()
    {
        cout<<name<<endl<<id<<endl;
    }
    ~Person(){}

};
class instructor:public Student,public Person
{
    double salary;
    public:
    instructor(char degre[]="",char nam[]="",int idd=0,double salar=0.0):Person(nam,idd),Student(degre),salary(salar){}
    void input()
    {
        Person::input();
        Student::input();
        cin>>salary;
    }
    void output()
    {
        Person::output();
        Student::output();
        cout<<salary<<endl;
    }
    ~instructor(){}
};


int main(){



 return 0;   
}