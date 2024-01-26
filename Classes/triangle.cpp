// Write a program to print area n perimeter of triangle having sides of 3,4,5 units by creating a 
//class name are triangle with the constructor having 3 sides as it’s parameter
#include<iostream>
#define __cpp_binary_literals
using namespace std;
class triangle{
    int a,b,c;
    public:
    triangle(int a=0,int b=0,int c=0):a(a),b(b),c(c){}
    int parimeter(){return a+b+c;}
};
int main(){
triangle a(3,4,5);
cout<<a.parimeter()<<endl;
return 0;   
}