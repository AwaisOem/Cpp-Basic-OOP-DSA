#include <iostream>
#include <time.h>
#include <string>
using namespace std;
class Date;
Date get_accurate_age(const Date& DOB);
class Date
{
    int day, month, year;
    friend Date get_accurate_age(const Date&); 
    public:
    Date(int day = 1, int month = 1, int year = 1700) : day(day), month(month), year(year) {}
    void set(int day, int month, int year){day = day;month = month;year = year;}
    void get(){
        char d1,d2;
        cout<<"Enter Date in (dd/mm/yy) format:   ";
        cin>>day>>d1>>month>>d2>>year;
    }
    int return_year()const{return year;}
    void show()const{cout<<day<<"/"<<month<<"/"<<year;}
    ~Date(){}
};
class HealthProfile
{
    static int counter;
    string fname, lname;
    Date DOB;
    char gender;
    float height, weight;
public:
    HealthProfile(string fn = "", string ln = "", char g = '\0', float h = 0.0f, float w = 0.0f) : fname(fn), lname(ln), gender(g), height(h), weight(w) {counter++;}
    void setDOB(int a,int b,int c){DOB.set(a,b,c);}
    void set(Date d, string fn, string ln, char g, float h, float w)
    {
        DOB=d;
        fname=fn;
        lname=ln;
        gender=g;
        height=h;
        weight=w;
    }
    void set(Date d, string fn, string ln, char g, float h, int w)
    {
        DOB=d;
        fname=fn;
        lname=ln;
        gender=g;
        height=h;
        weight=w*2.205;
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
        cout<<"Enter your Weight in kg:   ";
        int w=0;cin>>w;weight=w*2.205;
        cout<<"DATE OF BIRTH>>>>   ";
        DOB.get();
    }
    void printage()const{
        Date temp=get_accurate_age(DOB);
        cout<<endl<<"Correct age is ";
        temp.show();
        cout<<endl;
    }
    int getAge()const{
        Date temp=get_accurate_age(DOB);
        return temp.return_year();}
    int max_heartbeat()const{return 220-getAge();}
    int target_heartbeat(int n=60)const{return (n/100)*max_heartbeat();}
    float BMI()const{return (weight*703)/(height*height);}
    void report()const{ 
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
    static int getcounter(void){return counter;}
    bool operator==(const HealthProfile&r){return (getAge()==r.getAge())?true:false;}
    bool operator!=(const HealthProfile&r){return (getAge()!=r.getAge())?true:false;}
    bool operator>(const HealthProfile&r){return (getAge()>r.getAge())?true:false;}
    bool operator>=(const HealthProfile&r){return (getAge()>=r.getAge())?true:false;}
    bool operator<(const HealthProfile&r){return (getAge()<r.getAge())?true:false;}
    bool operator<=(const HealthProfile&r){return (getAge()<=r.getAge())?true:false;}
};
int HealthProfile::counter=0;
bool compare_report(const HealthProfile &h1, const HealthProfile &h2){
    if (h1.max_heartbeat()==h2.max_heartbeat())
    {
        if (int(h1.BMI())==int(h2.BMI()))
        {
            if (h1.getAge()>h2.getAge())
            {
                return false;
            }else{
                return true;
            }
        }
        else if (int(h1.BMI())>int(h2.BMI())){
            return false;
        }
        else if (int(h1.BMI())<int(h2.BMI())){
            return true;
        }
        
    }
    else if (h1.max_heartbeat()>h2.max_heartbeat()){
        return false;
    }
    else if (h1.max_heartbeat()<h2.max_heartbeat()){
        return true;
    }
}
int main()
{
    HealthProfile h1;
    h1.setDOB(4,11,2003);
    h1.printage();
    return 0;
}
Date get_accurate_age(const Date &DOB) 
{ 
time_t timetoday;
time(&timetoday);
string s,y="",d="",m="";
s=asctime(localtime(&timetoday));
for(int i=5;i>0;i--)
    y+=s[s.length()-i];
for(int i=8;i<10;i++)
    d+=s[i];
for(int i=4;i<7;i++)
    m+=s[i];
int year_today=stoi(y);
int day_today=stoi(d);
int month_today=0;
string monthname[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
for (int i = 0; i <12; i++)
    if (m==monthname[i])
        month_today=i+1;
int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(year_today%4==0 && year_today%100!=0){
    monthdays[1]=29;
}else if(year_today%400==0 && year_today%100==0){
    monthdays[1]=29;}
    cout<<"TODAY DATE   "<<day_today<<"/"<<month_today<<"/"<<year_today<<endl;
long int res_today=0;
for (int i = 1; i <=12; i++){
    if (month_today==i)
    {
        res_today=(day_today+(month_today*monthdays[i-1])+(year_today*365));break;
    }}
    
cout<<res_today<<endl;
// int d1=4,m1=11,y1=2003;
long int res_DOB=0;
for (int i = 1; i <=12; i++){
    if (DOB.month==i)
    {
        res_DOB=(DOB.day+(DOB.month*monthdays[i-1])+(DOB.year*365));break;
    }}
cout<<res_DOB<<endl;
long int temp=res_today-res_DOB;
cout<<temp<<endl;
Date age;
age.year=temp/365;
temp%=365;
age.month=temp/30;
temp%=30;
age.day=temp;
return age;
}