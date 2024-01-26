#include<iostream>
#include<iomanip>
using namespace std;
class rectangle{
    double height;
    double width;
    public:
        rectangle(int a,int b){
            height=a;
            width=b;
        }
        void showArea(){
            cout<<height*width<<endl;
        } 
        double Area(){
            return height*width;
        } 
};
int main(){
rectangle r1(2,3);
r1.showArea();

 return 0;   
}