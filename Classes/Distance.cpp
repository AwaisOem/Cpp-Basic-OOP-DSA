#include<iostream>
#include<iomanip>
using namespace std;
class Distance{
    private:
        int feets;
        float inches;
        void p(){
        int x=inches/12;
        feets+=x;
        inches-=(12*x);
        }
    public:
    void Getdist(int x,int y){
        feets=x;
        inches=y;
        p();
    }
    void Showdist();
};
void Distance::Showdist(){
    cout<<feets<<"\'"<<inches<<"\""<<endl;
}
int main(){
Distance x1,x2;
x1.Getdist(2,11);
x2.Getdist(7,21);
x1.Showdist();
x2.Showdist();
 return 0;   
}