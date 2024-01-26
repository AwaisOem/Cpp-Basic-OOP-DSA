/*Make a Employee Management For Any Product of a Company Called SPARK(a company which has employees as well as some spy persons acting like a normal employee)
Make a class SPARK which have static member string product for actual product or facility of company like (SPARK gamming ,SPARK Cosmos) .this class have 2 member function one for set() product property and second for show() and these both are static.
Make another Class Employee inherited from SPARK having properties long id ,name,email,gender,work,Company(strings).Make appropriate constructors for this class every thing this taken from parameters except Company string(company string have value starting with SPARK and then name of product inherited from parent(hint:: concatination)). Make 2 functions getdata() and showdata() with this manner that childs of Employee class can override them.Make member function isFemale() returning true if gender is “Female” || “female”.Make another member function isSPY() returning true if Last Character of name of Empolyee is Capital “S”.
Make an abstract class SIS having two pure virtual members FakeName(string) returning string and idConverter(long) returning long.(implementation of these are in child class).
Make Spy Class inherited from SIS(privately) and Employee(publically) define an additional property string spyWork which store the actual super secret work spy doing for his boss. Implement Fakename function which accept real name as para meter and return reversed name and after name “S” letter(like JohnnhoJS) and implement idConverter function in such way that it returns id multiply be 3/5.Make appropriate constructors keep in mind that name and id stored after converted through these functions override getdata() and showdata() also.overload insertion and extraction operator for this class.
Make a Class Worker which represent normal worker having int salary extra property.override getdata() and showdata() and define appropriate constructors
In Main function give value to SPARK class product member and show welcome msg through static member function of SPARK class (remember no need to make object for this)
 Declare array of pointer of class Employee size 10 and make dynamic objects storing 7 workers and 3 spy persons(one female and 2 males) atleast one spy and one worker’s data input taken from keyboard for other use constructers. Apply Exception Handling on non stringy inputs error thrown from getdata functions and catch from main showing a nice msg and exit().
Make a file “SpyRecord” and store objects through binary method if employee is spy and not female. 
Then Close the file and open through ifstream and read all objects from file and show them on terminal output with showdata().
If any thing is missing or not clear then apply your own common sense there.
*/
#include<bits/stdc++.h>
using namespace std;
class SPARK
{
    protected:
    static string Product;
    public:
    static void setProduct(string p)
    {
        Product = p;
    }
    static void show(){
        cout<<"Welcome to Empolyee Managment Of SPARK "<<Product<<"!"<<endl;
        cout<<endl;
    }
};
string SPARK::Product = "S";
class Employee : public SPARK
{
    protected:
    long id;
    string name;
    string email;
    string gender;
    string work;
    string Company;
    public:
    Employee(long i= 0, string n = "N/a", string e = "N/a", string g = "N/a", string w = "N/a"):id(i), name(n), email(e), gender(g),work(w) 
    {
        Company = "SPARK "+Product; 
    }
    virtual void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter ID: ";
        cin>>id;
        if(cin.fail())
        {
            throw runtime_error("input must be number");
        }
        cout<<"Enter Email: ";
        cin>>email;
        cout<<"Enter Your Gender: ";
        cin>>gender;
        cout<<"Enter Work: ";
        cin>>work;
        
        Company = "SPARK "+Product; 
    }
    // FIXME: virtual required or not
    virtual void showdata()const 
    {
        cout<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Your Gender: "<<gender<<endl;
        cout<<"Work: "<<work<<endl;
        cout<<"Comapany: "<<Company<<endl;
    }
    bool isSpy()const{ return name[name.length()-1]=='S';}
    bool isFemale() const { return (gender == "Female" || gender == "female"); }
    ~Employee(){}
};
class SIS{
    virtual string FakeName(string realName) = 0;
    virtual long idConverter(long a) = 0;
};
class Spy : public Employee , private SIS
{
    string spyWork;
    string FakeName(string realName)
    {
        for (int i = 0; i < realName.length()/2; i++)
        {
            char temp=realName[i];
            realName[i] = realName[realName.length()-i-1];
            realName[realName.length()-i-1] =temp;
        }
        realName+="S";
        return realName;
    }
    long idConverter(long a)
    {
         return (a*3)/5;
    };
    public:
    Spy(long i= 0, string n = "N/a", string e = "N/a", string g = "N/a", string w = "N/a", string sp="N/A")
    :Employee(idConverter(i), FakeName(n) , e , g , w),spyWork(sp) {

    }
    void getdata()
    {
        Employee::getdata();
        cout<<"Enter Your Secret Work :";
        cin>>spyWork;
        this->name = FakeName(name);
        this->id = idConverter(id);
    }
    void showdata()const{
        Employee::showdata();
        cout<<"Secret Work :"<<this->spyWork<<endl;
    }
    friend istream & operator >>(istream &in , Spy &sp);
    friend ostream & operator <<(ostream &out ,const Spy &sp);
    ~Spy(){};
};
istream & operator >>(istream &in , Spy &sp)
{ 
        sp.Employee::getdata();
        cout<<"Enter Your Secret Work :";
        in>>sp.spyWork;
        sp.name = sp.FakeName(sp.name);
        sp.id = sp.idConverter(sp.id);
    return in;
}
ostream & operator <<(ostream &out ,const Spy &sp)
{
    sp.Employee::showdata();
    out<<"Secret Work :"<<sp.spyWork<<endl;
    return out;
}
class Worker : public Employee
{
    int salary;
    public:
    Worker(long i= 0, string n = "N/a", string e = "N/a", string g = "N/a", string w = "N/a")
    :Employee(i, n , e , g , w) , salary(0){}
    void getdata()
    {
        Employee::getdata();
        cout<<"Enter Your Salary: ";
        cin>>salary;
        if(cin.fail())
        {
            throw runtime_error("input must be number");
        }
    }
    void showdata()const{
        Employee::showdata();
        cout<<"Your Salary is "<<salary<<endl; 
    }
    friend istream& operator>>(istream&in , Worker & w);
    friend ostream& operator<<(ostream&out ,const Worker & w);
    ~Worker(){};
};
istream& operator>>(istream&in , Worker & w)
{
        w.Employee::getdata();
        cout<<"Enter Your Salary: ";
        in>>w.salary;
        return in;
}
ostream& operator<<(ostream&out ,const Worker & w)
{
        w.Employee::showdata();
        out<<"Your Salary is "<<w.salary<<endl;
        return out;
}
auto main()->int
{
    SPARK::setProduct("Cosmos");
    SPARK::show();
    Employee * em[10];
    em[1] = new Spy(238452 , "Saad" ,"saad.com","Male","Window Cleaner","keep eye on manager");
    em[0] = new Worker(154314 ,"Aubakar" ,"abubakar.com","Male","C# developer");
    em[2] = new Worker(238452 , "Saqib" ,"saqib.com","Male","Cyber Analyst");
    em[3] = new Worker(238452 , "Zohaib" ,"zohaib.com","Male","Back End developer");
    em[4] = new Worker(238452 , "Ali Abbas" ,"aliabbas.com","Male","Pilot");
    em[5] = new Spy(238452 , "Flutter" ,"flutter.com","Female","App Developer","moniter employees");
    em[6] = new Worker(238452 , "Arham" ,"arham.com","Male","WEB 3 Developer");
    em[7] = new Worker(238452 , "Saqlain" ,"saqlain.com","Male","Designer");
    em[8] = new Worker();
    em[9] = new Spy();
    cout<<"Enter data for new worker"<<endl;
    // while (1)
    // {
        try
        {
            em[8]->getdata();
            cout<<"Enter data for Spy"<<endl;
            em[9]->getdata();
            // break;
        }catch(const runtime_error& err){
            cout<<err.what()<<endl;
        }
    // }
    try
    {
    ofstream file("D:\\SpyRecord.txt",ios::binary);
    if(!file.fail())
    {
        for (int i = 0; i < 10; i++)
            if(!em[i]->isFemale() && em[i]->isSpy())
                file.write((char*)&em[i] ,sizeof(em[i]));
    }
    else
    {
        cout<<"failure in opning file"<<endl;
    }
    file.close();
    ifstream file1;
    file1.open("D:\\SpyRecord.txt",ios::binary);
    Spy *s;
    while (!file1.eof())
    {
        file1.read((char*)&s,sizeof(s));
        s->showdata();
    }
    file1.close();
    }
    catch(...)
    {
        cout<<"Any exception occured"<<endl;
    }

 return 0;
}