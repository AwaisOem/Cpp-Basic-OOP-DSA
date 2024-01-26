// (Computerization of Health Records) A health care issue that has been in the news lately is
// the computerization of health records. This possibility is being approached cautiously because of
// sensitive privacy and security concerns, among others. [We address such concerns in later exercises.]
// Computerizing health records could make it easier for patients to share their health profiles and histories among their various health care professionals. This could improve the quality of health care,
// help avoid drug conflicts and erroneous drug prescriptions, reduce costs and in emergencies, could
// save lives. In this exercise, you’ll design a “starter” HealthProfile class for a person. The class attributes should include the person’s first name, last name, gender, date of birth (consisting of separate
// attributes for the month, day and year of birth), height (in inches) and weight (in pounds). Your class
// should have a constructor that receives this data. For each attribute, provide set and get functions.
// The class also should include functions that calculate and return the user’s age in years, maximum
// heart rate and target-heart-rate range (see Exercise 3.16), and body mass index (BMI; see
// Exercise 2.30). Write an application that prompts for the person’s information, instantiates an object of class HealthProfile for that person and prints the information from that object—including
// the person’s first name, last name, gender, date of birth, height and weight—then calculates and
// prints the person’s age in years, BMI, maximum heart rate and target-heart-rate range. It should also
// display the “BMI values” chart from Exercise 2.30. Use the same technique as Exercise 3.16 to calculate the person’s age
#include <iostream>
#include <string>
using namespace std;
class Date
{
    int day, month, year;
    public:
    Date(int day = 1, int month = 1, int year = 1700) : day(day), month(month), year(year) {}
    void set(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void get(){
        char d1,d2;
        cout<<"Enter Date in (dd/mm/yy) format:   ";
        cin>>day>>d1>>month>>d2>>year;
    }
    void show(){cout<<day<<"/"<<month<<"/"<<year;}
};
class HealthProfile
{
    string fname, lname;
    char gender;
    Date DOB;
    float height, weight;
public:
    HealthProfile(Date d, string fn = "", string ln = "", char g = '\0', float h = 0.0f, float w = 0.0f) : DOB(d), fname(fn), lname(ln), gender(g), height(h), weight(w) {}
    void set(Date d, string fn, string ln, char g, float h, float w)
    {
        DOB=d;
        fname=fn;
        lname=ln;
        gender=g;
        height=h;
        weight=w;
    }
    void get(){
        cout<<"Enter your First Name:   ";
        cin>>fname;
        cout<<"Enter your Last Name:   ";
        cin>>lname;
        cout<<"Enter your Gender:   ";
        cin>>gender;
        cout<<"Enter your Height:   ";
        cin>>height;
        cout<<"Enter your Weight:   ";
        cin>>weight;
        cout<<"DATE OF BIRTH>>>>   ";
        DOB.get();
    }
    int getAge() { return ;} //editable
    int max_heartbeat(){return 220-getAge();}
    int target_heartbeat(int n=60){return (n/100)*max_heartbeat();}
    float BMI(){return (weight*703)/(height*height);}
    void report(){ 
        cout<<"**********Report*******\n";
        cout<<"Name: "<<(fname+" "+lname)<<endl;
        cout<<"Gender:  "<<gender<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Date of Birth:   ";
        DOB.show();
        cout<<"\nTarget Heartbeat: "<<target_heartbeat()<<endl;
        cout<<"Max Heartbeat: "<<max_heartbeat()<<endl;
        cout<<"BMI:     "<<BMI()<<endl;
        cout<<"You are ";
        if (BMI()<18.5f)cout<<"Underweight";
        else if (BMI()<25 && BMI()>=18.5)cout<<"Normal";
        else if (BMI()<30 && BMI()>=25)cout<<"Overweight";
        else if (BMI()>=30)cout<<"Overweight";
        cout<<"........\n\n";
        cout<<"\nBMI VALUES\nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater\n";
    }
};
int main()
{

    return 0;
}