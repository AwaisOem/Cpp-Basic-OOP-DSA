// 10 55 -> 11 10
#include<bits/stdc++.h>
using namespace std;
#define con 20
class employee
{
    char name[con];
    long id;
    public:
    employee(char n[]="",long r=0):id(r){
        strcpy(name,n);
    }
    void getdata()
    {
        cin>>name>>id;
    }
    void putdata()const
    {
        cout<<name<<endl<<id<<endl;
    }
    ~employee(){}
};
class student
{
    char school[con];
    char degree[con];
    public:
    student(char n[]="",char d[]=""){
        strcpy(school,n);        
        strcpy(degree,d);        
    }
    void getedu()
    {
        cin>>school>>degree;
    }
    void putedu()const
    {
        cout<<school<<endl<<degree<<endl;
    }
    ~student(){}
};
class manager:public employee ,public student
{
    int salary;
    public:
    manager(int sal=0,char n[]="",char s[]="",char d[]="",long i=0)
    :salary(sal),student(s,d),employee(n,i){}
    void getdata()
    {
        getedu();
        employee::getdata();
        cin>>salary;
    }
    void putdata()const
    {
        putedu();
        employee::putdata();
        cout<<salary<<endl;
    }
    ~manager(){}
};
class scientist:public employee ,public student
{
    char publication[con];
    public:
    scientist(char p[]="",char n[]="",char s[]="",char d[]="",long i=0)
    :student(s,d),employee(n,i){
        strcpy(publication,p);
    }
    void getdata()
    {
        getedu();
        employee::getdata();
        cin>>publication;
    }
    void putdata()const
    {
        putedu();
        employee::putdata();
        cout<<publication<<endl;
    }
    ~scientist(){}
};
class labour:public employee
{
    double  income_per_day;
    public:
    labour(int p=0.0,char n[]="",long i=0)
    :employee(n,i),income_per_day(p){}
    void getdata()
    {
        employee::getdata();
        cin>>income_per_day;
    }
    void putdata()const
    {
        employee::putdata();
        cout<<income_per_day<<endl;
    }
    ~labour(){}
};
int main(){
    system("cls");
cout<<"================================";


 return 0;   
}