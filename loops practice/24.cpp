#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int i=8;
cout<<i<<endl;
while(true){
    i+=4;
    if(i>100){
        break;
    }else{
        cout<<i<<endl;
    }
    i+=5;
    if(i>100){
        break;
    }else{
        cout<<i<<endl;
    }
    i+=7;
    if(i>100){
        break;
    }else{
        cout<<i<<endl;
    }

}
return 0;   
}