#include<bits/stdc++.h>
using namespace std;
class Empolyee{
    protected:
        long long id;
        int scale;
    public:
    void input(){
        cout<<"input"<<endl;
        cin>>id>>scale;
    }
    void show(){
        cout<<"Output"<<endl;
        cout<<id<<"  "<<scale<<endl;
    }
};
class Manager:Empolyee{
    long m_id;
    string department;
    public:
    void input(){
        cout<<"input"<<endl;
        cin>>m_id>>department>>scale;
    }
    void show(){
        cout<<"Output"<<endl;
        cout<<m_id<<"  "<<department<<"  "<<scale<<endl;
    }
};
int main(){
Manager e;
e.show();


 return 0;   
}