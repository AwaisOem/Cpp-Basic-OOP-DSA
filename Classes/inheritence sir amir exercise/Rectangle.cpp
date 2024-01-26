#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    protected:
int width, height;
public:
void display()const{cout<<width<<" "<<height<<endl;}
};
class RectangleArea :public Rectangle
{
public:
void read_input(){
    cout<<"Enter Width: ";
    cin>>width;
    cout<<"Enter Height: ";
    cin>>height;
}
void display()const{
    cout<<"Area:    "<<width*height<<endl;}
};
int main(){
RectangleArea r2;
r2.read_input();
r2.display();
r2.Rectangle::display();
return 0;   
}