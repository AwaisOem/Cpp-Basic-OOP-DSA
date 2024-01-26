// *Question 4* 
// Create a class Person that has three data members Pid, Pname, PSalary with appropriate data type.
//  Person class also contains the member functions:
//   getdata() function is used to input values,
//    showdata() function is used to display value, 
//    setdata() function is used to set the values of data members using parameters, 
//  getSalary() function is used to return the value of person salary. The program should create three objects of the person class and input values for these objects.
//  The program display the details of highest salary holder person
#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    long Pid;
    string Pname;
    float Psalary;
    public:
    Person():Pid(0),Pname("\0"),Psalary(0){}
    void getdata(){
        cout<<"Enter id,Name,Salary:    "<<endl;
        cin>>Pid;
        cin>>Pname;
        cin>>Psalary;
    }
    void showdata(){
        cout<<"\n";
        cout<<Pid<<endl;
        cout<<Pname<<endl;
        cout<<Psalary<<endl;
    }
    void setdata(long A,string b,float c){Pid=A;Pname=b;Psalary=c;}
    float getsalary(){return Psalary;}
    bool operator >(Person &a){return (Psalary>a.Psalary);}
    bool operator <(Person &a){return (Psalary<a.Psalary);}
    bool operator <=(Person &a){return (Psalary<=a.Psalary);}
    bool operator >=(Person &a){return (Psalary>=a.Psalary);}
    bool operator ==(Person &a){return (Psalary==a.Psalary);}
    bool operator !=(Person &a){return (Psalary!=a.Psalary);}
};
int main(){
    Person p1, p2, p3;
    p1.getdata();
    p2.setdata(11111, "SAQIB", 100000.0f);
    p3.setdata(12345, "AWAIS", 20000.0f);
    if (p1 > p3 && p1 > p2)
        p1.showdata();
    if (p2> p3&& p2 > p1)
        p2.showdata();
    if (p1< p3 && p2< p3)
        p3.showdata();
    return 0;   
}