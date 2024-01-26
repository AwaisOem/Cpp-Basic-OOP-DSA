#include<bits/stdc++.h>
using namespace std;
class Student
{
    char degree[20];
    public:
    Student(char degre[]=""){
        strcpy(degree,degre);
    }
    void input(){
        cin>>degree;
    }
    void show(){
        cout<<degree<<endl;
    }
};
class Person
{
    char name[20];
    int id;
    public:
    Person(char nam[]="",int n=0):id(n){
        strcpy(name,nam);
    }
    void input(){
        cin>>name>>id;
    }
    void show(){
        cout<<name<<endl<<id<<endl;
    }

};
class instructor:public Person,public Student
{
    double salary;
public:
instructor(double sal=0.0,char nam[]="",int n=0,char degre[]=""):Person(nam,n),Student(degre),salary(sal){}
    void input(){
        Person::input();
        Student::input();
        cin>>salary;
    }
    void show(){

        Person::show();
        Student::show();
        cout<<salary<<endl;
    }

};
int main(){
    system("cls");
instructor i;
i.input();
i.show();
return 0;   
}