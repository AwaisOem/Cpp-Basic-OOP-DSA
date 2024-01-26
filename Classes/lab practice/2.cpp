///10 12 - 10 20
#include<bits/stdc++.h>
using namespace std;
class Person{
    char name[20];
    int age;
    public:
    Person(char nam[]="",int ag=0):age(ag){
        strcpy(name,nam);
    }
    void input()
    {
        cin>>name>>age;
    }
    void show()
    {
        cout<<name<<age<<endl;
    }
    ~Person(){}
};
class Student
{
    int marks;
    public:
    Student(int mark=0):marks(mark){}
    void input()
    {
        cin>>marks;
    }
    void show()
    {
        cout<<marks<<endl;
    }
    ~Student(){}
};
class Scholarship:private Student,private Person
{
    char scholarshipName[20];
    public:
    Scholarship(char nam[]="",int ag=0,int mark=0,char snam[]=""):Person(nam,ag),Student(mark){
        strcpy(scholarshipName,snam);
    }
    void input()
    {
        Person::input();
        Student::input();
        cin>>scholarshipName;
    }
    void show()
    {
        Person::show();
        Student::show();
        cout<<scholarshipName<<endl;
    }
    ~Scholarship(){}
};
int main(){



 return 0;   
}