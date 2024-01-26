#include<bits/stdc++.h>
using namespace std;
class Polar{
    float x,y;
    public:
    Polar(float radius=0,float angle=0):x(radius*cos(angle)),y(radius*sin(angle)){}
    friend istream& operator>>(istream&in,Polar&p){ 
        float r,a;
        cout<<"Enter radius:    ";in>>r;
        cout<<"Enter angle:    ";in>>a;
        p=Polar(r,a);
        return in;
    }
    friend ostream& operator<<(ostream&os,const Polar&p){ 
        float r=sqrt(pow(p.x,2)+pow(p.y,2));
        os<<"Radius: "<<r<<endl;
        os<<"Angle: "<<acos(p.x/r)<<endl;
        return os;
    }
    Polar operator+(const Polar& p) const{
        Polar temp;
        temp.x=x+p.x;
        temp.y=y+p.y;
        return temp;
    }
};
int main(){

//code here

 return 0;   
}