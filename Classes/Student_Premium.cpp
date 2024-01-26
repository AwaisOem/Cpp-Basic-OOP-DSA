#include<iostream>
#include<string>
using namespace std;

class Date {
    int day;
    int month;
    int year;
    public:
    Date(){
        day=4;
        month=11;
        year=2003;
    }
    void setdate(int a,int b,int c){
        day=a;month=b;year=c;
    }
    void showdate()const{ 
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
};
class student{
    private:
        int rollno;
        string name;
        int marks;
        char grade='F';
        Date admit_date;
        void grade_decider(){
            double per=(marks*100)/1100.0;
            if(per>=90 && per<101){
                grade='A';
            }
            else if(per>=80 && per<90){
                grade='B';
            }
            else if(per>=70 && per<80){
                grade='C';
            } 
            else if(per>=60 && per<70){
                grade='D';
            }
            else if(per>=50 && per<60){
                grade='E';
            }
        }
    public:
    student(){
        cout<<"Constructor executed successfully and object created"<<endl;
        name="SAQIB";
        rollno=12345; 
        marks=23;
        grade='F';
    }
        void get_data(){
            int a,b,c;
            cin>>rollno;
            cin>>name;
            cin>>marks;
            cin>>a>>b>>c;
            admit_date.setdate(a,b,c);
            grade_decider();
        }
        friend ostream& operator<<(ostream&os,const student&a);
        friend void edit_name(student &a);
};
ostream& operator<<(ostream&os,const student&a){
            os<<"Name:  "<<a.name<<endl;
            os<<"Roll no:   "<<a.rollno<<endl;
            os <<"Marks:    "<<a.marks<<endl;
            os <<"Grade"<<a.grade<<endl;
            a.admit_date.showdate();
            return os;
}
void edit_name(student &a){
    a.name="AWAIS";
}
int main(){
    student s1;
    // s1.get_data();
    // edit_name(s1);
    cout<<s1;
 return 0;   
}