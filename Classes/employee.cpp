// *Question 5*  Write a class Employee with three data members Eid type int, Ename type string and Esalary type double. It also contains the following member function: 
// •	The get() function is used to input values 
// •	The show() function is used to display values 
// •	The set() function is used to set the values of data members using parameters 
// •	The returnSalary() function is used to return the salary of employee. 
// The program should create two object of the employee class, input the values and display the record of that employee whose monthly salary is greater. 
#include<iostream>
#include<string>
using namespace std;
class Employee
{
    private:
        int Eid;
        string Ename;
        double Esalary;
    public:
    Employee():Eid(0),Ename("\0"),Esalary(0.0){}
    void get(){ 
        cin>>Eid;
        cin>>Ename;
        cin>>Esalary;
    }
    void show()
    {
        cout<<Eid<<endl;
        cout<<Ename<<endl;
        cout<<Esalary<<endl;
    }
    void set(int a,string b,double c)
    { 
        Eid=a;
        Ename=b;
        Esalary=c;
    }
    double returnSalary()
    {
        return Esalary;
    }
};
int main(){
Employee e1,e2;
e1.get();
e2.set(12345,"AWAIS",12000.0);

if(e1.returnSalary() > e2.returnSalary())
{
e1.show();
}
else
{
e2.show();
}
return 0;   
}