#include<iostream>
#include<conio.h>
using namespace std;
class Cartoll{
    unsigned int car_count;double money;
    public:
    Cartoll(unsigned int c=0,double m=0.0):car_count(c),money(m){}
    void payingCar(){car_count++;money +=0.5;}
    void nopayCar(){car_count++;}
    void display()const{cout<<endl<<"Payment: "<<money<<endl<<"No of Cars: "<<car_count<<endl;}
};
int main(){
char n='\0';
Cartoll t1;
do{ 
    n=getche();
    cout<<endl;
    if (n=='1')
        t1.payingCar();
    else
        t1.nopayCar();
} while (n!=27);
t1.display();
 return 0;   
}