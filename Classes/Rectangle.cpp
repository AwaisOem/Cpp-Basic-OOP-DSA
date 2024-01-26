#include<iostream>
using namespace std;
class Rectangle
{
private:
    float length,width;
public:
    Rectangle(float l=0.0f,float w=0.0f):length(l),width(w){}
    void setlength(float l){length=l;}
    void setwidth(float);
    void show()const;
    float area()const{return width*length;}
    float perimeter()const{return 2.0f*(width+length);}
    int compare(const Rectangle& r1){if(area()==r1.area())return 1;else return 0;}
    ~Rectangle(){}
};
int main(){
Rectangle r1,r2;
r1.setlength(5.0f);
r1.setwidth(2.5f);
r2.setlength(5.0f);
r2.setwidth(18.9f);
r1.show();
r2.show();
cout<<endl;
cout<<"Parimeter of r1 is "<<r1.perimeter()<<endl;
cout<<"Area of r1 is "<<r1.area()<<endl;
cout<<"Parimeter of r2 is "<<r2.perimeter()<<endl;
cout<<"Area of r2 is "<<r2.area()<<endl;
cout<<endl;
if (r1.compare(r2)==1)
cout<<"Areas of both r1 and r2 are equal "<<endl;
else 
cout<<"Areas of both r1 and r2 are not equal "<<endl;
r1.setlength(15.0f);
r1.setwidth(6.3f);
cout<<endl;
cout<<endl;
cout<<"Parimeter of r1 is "<<r1.perimeter()<<endl;
cout<<"Area of r1 is "<<r1.area()<<endl;
cout<<"Parimeter of r2 is "<<r2.perimeter()<<endl;
cout<<"Area of r2 is "<<r2.area()<<endl;
cout<<endl;
if (r1.compare(r2)==1) 
cout<<"Areas of both r1 and r2 are equal "<<endl;
else 
cout<<"Areas of both r1 and r2 are not equal "<<endl;
return 0;   
}
void Rectangle::setwidth(float w){width=w;}
void Rectangle::show()const{cout<<endl<<"Length:   "<<length<<endl<<"Width:    "<<width<<endl;}