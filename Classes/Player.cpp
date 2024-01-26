#include<iostream>
#include<iomanip>
using namespace std;
class Player
{
    static int count;
    int id;
    int runs;
    public:
    string name;
    Player(string name="", int id=0, int runs=0):name(name),id(id),runs(runs){
        count++;
    }
    void input(){
        cin>>name>>id>>runs;
    }
    static void number(){
        cout<<++count<<endl;
    }
    void output()const{  
        cout<<name<<endl<<id<<endl<<runs<<endl<<endl;
    }
};
void nameChange(Player o){
    o.name="SAAD";
}
int Player::count=32; 
int main(){
const Player p1("asd",12,23124),p2;
nameChange(p1);
p1.output();
p1.number();
 return 0;   
}