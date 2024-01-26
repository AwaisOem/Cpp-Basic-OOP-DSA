// Question 3 
//Create a class named TIME that has hours, minutes and seconds data members as integer.
//  The class has settime (int, int, int) to set the specified value in object, showtime () to display time object in hh:mm:ss format. 
// Write main () function to create two time objects. Set the value in two objects and display all time objects.
#include<iostream>
using namespace std;
class TIME{
private:
    int hours;
    int minutes;
    int seconds;
public:
    TIME(int a=0,int b=0,int c=0):hours(a),minutes(b),seconds(c){}
    void settime(int a,int b,int c){
        hours=a;minutes=b;seconds=c;
        minutes+=(seconds/60);
        seconds%=60;
        hours+=(minutes/60);
        minutes%=60;
    }
    TIME operator +(const TIME &t)const{
        TIME temp;
        temp.hours=hours+t.hours;
        temp.minutes=minutes+t.minutes;
        temp.seconds=seconds+t.seconds;
        temp.minutes+=(temp.seconds/60);
        temp.seconds%=60;
        temp.hours+=(temp.minutes/60);
        temp.minutes%=60;
        return temp;
            }
    TIME operator ++(){
        return TIME(++hours,++minutes,++seconds);
    }
    TIME operator --(){
        return TIME(--hours,--minutes,--seconds);
    }
    TIME operator ++(int){
        return TIME(hours++,minutes++,seconds++);
    }
    TIME operator --(int){
        return TIME(hours--,minutes--,seconds--);
    }
//     Add to the time class of Exercise 5 the ability to subtract two time values using the 
// overloaded (-) operator, and to multiply a time value by a number of type float, using
// the overloaded (*) operator
    TIME operator -(const TIME &t)const{
        TIME temp;
        temp.hours=hours-t.hours;
        temp.minutes=minutes-t.minutes;
        temp.seconds=seconds-t.seconds;
        temp.minutes+=(temp.seconds/60);
        temp.seconds%=60;
        temp.hours+=(temp.minutes/60);
        temp.minutes%=60;
        return temp;
            }
    TIME operator*(const float &d){
        float f=hours+minutes/60.0+seconds/float(60*60);
        f*=d;
        int a=int(f);
        float b=(f-int(f))*60.0;
        int c=(b-int(b))*60.0;
        return TIME(a,int(b),c);
    }
    void showtime()const{
        cout<<"Time:    "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};
int main(){
TIME x1,x2;
x1.settime(2,67,45);
x2.settime(4,34,56);
x1.showtime();
x2.showtime();
 return 0;   
}