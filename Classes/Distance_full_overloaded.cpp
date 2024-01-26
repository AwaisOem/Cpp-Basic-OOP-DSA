#include<bits/stdc++.h>
using namespace std;
class Distance;
class Date{
    int d,m,y;
    void refine(){
        while(d>31){
            d-=31;
            m++;
        }
        while(m>12){
            m-=12;
            y++;
        }
    }
    public:
    Date(int d=0,int m=0,int y=0):d(d),m(m),y(y) {refine();}
    operator Distance();
    friend class Distance;
};
class Distance
{
    int feet; float inches,mf=3.2808f;Date d;
    void refine(){
        while (inches >= 12)
        {
            inches -= 12;
            feet++;
        }
    }
public:
    Distance(int f=0,float n=0.0f,int d=0,int m=0,int y=0) : feet(f), inches(n),d(d,m,y){refine();}
    Distance(float m){
        m=m*mf;
        feet=int(m);
        inches=(m-feet)*12;
    }
operator Distance(){return Distance(feet,inches,d.d,d.m,d.y);}
operator float() {return float((feet+(inches/12.0f))/mf);}
Distance operator %(const Distance&d){
     Distance d1;
        float fltfeet = feet + inches / 12.0;
        float fltfeet2 = d.feet + d.inches / 12.0;
        while(fltfeet>fltfeet2)
            fltfeet -= fltfeet2;
        d1.feet = int(fltfeet);
        d1.inches = (fltfeet - d1.feet) * 12.0;
        return d1;
}
Distance operator %(const float&d){
     Distance d1;
        float fltfeet = feet + inches / 12.0;
        while(fltfeet>d)
            fltfeet -= d;
        d1.feet = int(fltfeet);
        d1.inches = (fltfeet - d1.feet) * 12.0;
        return d1;
}
Distance operator +(const Distance&d)const{
    Distance t;
    t.feet=feet+d.feet;
    t.inches=inches+d.inches;
    t.refine();
    return t;
}
Distance operator -(const Distance&d)const{
    Distance t;
    t.feet=feet-d.feet;
    t.inches=inches-d.inches;
    t.refine();
    return t;
}
Distance operator / (const int& n)const{
        Distance d1;
        float fltfeet = feet + inches / 12.0;
        fltfeet /= n;
        d1.feet = int(fltfeet);
        d1.inches = (fltfeet - d1.feet) * 12.0;
        return d1;
}
Distance operator / (const Distance &n)const{
        Distance d1;
        float fltfeet = feet + inches / 12.0;
        float fltfeet2 = n.feet + n.inches / 12.0;
        fltfeet /= fltfeet2;
        d1.feet = int(fltfeet);
        d1.inches = (fltfeet - d1.feet) * 12.0;
        return d1;
}
Distance operator * (const Distance &n)const{
        Distance d1;
        float fltfeet = feet + inches / 12.0;
        float fltfeet2 = n.feet + n.inches / 12.0;
        fltfeet *= fltfeet2;
        d1.feet = int(fltfeet);
        d1.inches = (fltfeet - d1.feet) * 12.0;
        return d1;
}
Distance operator * (const int &n)const{
        Distance d1;
        float fltfeet = feet + inches / 12.0;
        fltfeet *= n;
        d1.feet = int(fltfeet);
        d1.inches = (fltfeet - d1.feet) * 12.0;
        return d1;
}
Distance operator ++(){Distance t;t.feet=++feet;return t;}
Distance operator --(){Distance t;t.feet=--feet;return t;}
Distance operator ++(int){Distance t;t.feet=feet++;return t;}
Distance operator --(int){Distance t;t.feet=feet--;return t;}
friend ostream& operator<<(ostream&os,const Distance&d);
friend istream& operator>>(istream&in,Distance&d);
friend Date::operator Distance();
};
Date::operator Distance()
{   int a, b;
    cin>>a>>b;
    return Distance(a,b,d,m,y);}
ostream& operator<<(ostream&os,const Distance&d){
    os<<d.feet << "\'" << d.inches << '\"' ;
    return os;
}
istream& operator>>(istream&in,Distance&d){
    cout << "Enter feet: ";
    in >> d.feet;
    cout << "Enter inches: ";
    in >> d.inches;
    d.refine();
    return in;
}
int main(){return 0;}