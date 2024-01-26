#include<iostream>
#include<cmath>
using namespace std;
class CAR
{
    string com_name,owner_name,color;
    int carnum,power,value_price,dir[2],sign,rn,ln,dis;
    bool a;
    public:

    CAR():carnum(0),com_name(""),owner_name(""),color(""),power(0),value_price(0),dir{0,0},a(1),sign(1),rn(0),ln(0),dis(0){}
    CAR(int a,string b,string c,string d,int e,int f):
    carnum(a),com_name(b),owner_name(c),color(d),power(e),value_price(f),dir{0,0},a(1),sign(1),rn(0),ln(0),dis(0){}
        void forward(int n){
            if (rn==1)            
                dir[a]+=(n);
            else if (ln==1)
                dir[a]+=(n*-1); 
            else
                dir[a]+=(n*sign);
            dis+=n;
        }
        void back(int n){
            if (rn==1)            
                dir[a]-=(n);
            else if (ln==1)
                dir[a]-=(n*-1);
            else
                dir[a]-=(n*sign);
            dis+=n;
        }
        void right(){
            if (a==1)
                a=0;
            else if (a==0)
                a=1;
            
            rn++;
            if (rn>1)
            {
            sign*=-1;
            }
            ln=0;
        }
        void left(){
            if (a==1)
                a=0;
            else if (a==0)
                a=1;
            ln++; 
            if (ln>1)
            {
            sign*=-1;
            }
            rn=0;
        }
        void showposition(){
            cout<<endl;
            cout<<"X------->"<<dir[0]<<endl;
            cout<<"Y------->"<<dir[1]<<endl;
            cout<<endl;
        }
        int distance(){
            return dis;
        }
        int displacment(){
            int c=(dir[0]*dir[0])+(dir[1]*dir[1]);
            return sqrt(c);
        }
        void showdirection(){
            if (a==1)
            {
                if (sign==-1)
                {
                cout<<"Towards SOUTH......."<<endl;
                }else{
                cout<<"Towards NORTH......."<<endl;
                }
            }
            else if (a==0){
                if (sign==-1)
                {
                cout<<"Towards WEST......."<<endl;
                }else{
                cout<<"Towards EAST......."<<endl;
                }
            }
        }
        void getdata(){
            cout<<"Enter Car Number:    ";
            cin>>carnum;
            cout<<"Enter Car comany name:    ";
            cin.ignore();
            getline(cin,com_name);
            cout<<"Enter Car owner name:    ";
            cin.ignore();
            getline(cin,owner_name);
            cout<<"Enter Car color: ";
            cin>>color;
            cout<<"Enter CAR power:  ";
            cin>>power;
            cout<<"Enter CAR value price:   ";
            cin>>value_price;
        }
        void showdata(){
            cout<<endl;
            cout<<"Car Number:    "<<carnum<<endl;
            cout<<"Car comany name:    "<<com_name<<endl;
            cout<<"Car owner name:    "<<owner_name<<endl;
            cout<<"Car color: "<<color<<endl;
            cout<<"CAR power:  "<<power<<endl;
            cout<<"CAR value price:   "<<value_price<<endl;
            cout<<endl;
        }
        void show_data_in_bar(){
            cout<<carnum<<"  "<<com_name<<"  "<<owner_name<<"  "<<color<<"   "<<power<<"   "<<value_price<<endl;
        }
};
int main(){
CAR c1;
return 0;   
}