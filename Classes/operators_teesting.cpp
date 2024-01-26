#include<bits/stdc++.h>
using namespace std;
class Int{
    int a;
    public:
    Int(int n):a(n){}
    Int operator ^(const int &f){
        int pow=1;
        for(int i = 1; i <=f;i++){
            pow*=a;
        }
        return Int(pow);
    }
    Int operator ^(const Int &f){
        int pow=1;
        for(int i = 1; i <=f.a;i++){
            pow*=a;
        }
        return Int(pow);
    }
    
    friend ostream& operator<<(ostream&os, const Int& a){
        os<<a.a;
        return os;
    }
};

int main(){
// Int a(5);
// cout<<(a^2);
int a=4,b=5;






 return 0;   
}