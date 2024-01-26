#include<iostream>
#include<iomanip>
using namespace std;
int main(){
bool disi;
int n;
int d(0),digit(0);
do{
    cout<<"Enter the number:    ";cin>>n;
    while(n>0){n/=10;
    d++;
    }
    if(digit<=d){
        digit=d;
        d=0;
    }

    cout<<"Do you want to continue?....(1/0)";cin>>disi;
}while(disi==1);

cout<<"Hight digit number have "<<digit<<" digits..."<<endl;

        main();   
}