#include<iostream>
#include<string.h>
using namespace std;
class myclass
{
    static int aa;
    char ch[5];
    static float bb;
    public:
    myclass(int a,char s[],float b){
        aa=aa+a;
        strcpy(ch,s);
        bb=bb+b;
    }
    void show()
    {
        cout<<aa<<"\t"<<ch<<"\t"<<bb<<endl;
    }
    myclass add_fun(myclass);
};
int myclass::aa=2;
float myclass::bb=1.2f;
myclass myclass:: add_fun(myclass ob){
    myclass temp(3,"A",-1.5f);
    aa=temp.aa+ob.aa;
    strcpy(temp.ch,ch);
    strcat(temp.ch,ob.ch);
    bb=temp.bb+ob.bb;
    return temp;
}
int main(){
myclass obj1(1,"Y",1.3f);
obj1.show();
myclass obj2(2,"X",3.1f),obj3(-3,"B",-1.7f);
obj3=obj2.add_fun(obj1);
obj3.show();
return 0;   
}