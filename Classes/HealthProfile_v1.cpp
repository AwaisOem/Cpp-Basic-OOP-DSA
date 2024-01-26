
// the formula for calculating your maximum heart rate in beats per minute is 220 minus your age in
// years. Your target heart rate is a range that is 50–85% of your maximum heart rate
// Create a class called HeartRates. The class attributes
// should include the person’s first name, last name and date of birth (consisting of separate attributes
// for the month, day and year of birth). Your class should have a constructor that receives this data as
// parameters. For each attribute provide set and get functions. The class also should include a function
// getAge that calculates and returns the person’s age (in years), a function getMaxiumumHeartRate that
// calculates and returns the person’s maximum heart rate and a function getTargetHeartRate that calculates and returns the person’s target heart rate. Since you do not yet know how to obtain the current
// date from the computer, function getAge should prompt the user to enter the current month, day

// and year before calculating the person’s age. Write an application that prompts for the person’s information, instantiates an object of class HeartRates and prints the information from that object—
// including the person’s first name, last name and date of birth—then calculates and prints the person’s
// age in (years), maximum heart rate and target-heart-rate range.
#include<iostream>
#include<string>
#include <ctime>
using namespace std;
class HeartRates
{
 string f_name,l_name;
 int d,m,y;
 public:
    HeartRates(string f="",string l="",int d=1,int m=1,int y=1700) : f_name(f),l_name(l),d(d),m(m),y(y){}
    void setname(string f,string l){f_name = f;l_name = l;}
    void set_DOB(int d,int m,int y){d=d;m=m;y=y;}
    int getAge(){return 2022-y;}
    int getMaxiumumHeartRate(){return (220-getAge());}
    int getTargetHeartRate(int n=60){return (n/100)*getMaxiumumHeartRate();}
    void showreport(){
    cout<<"Report khod banani hai.......\n";
    }

};
int main(){
return 0;   
}