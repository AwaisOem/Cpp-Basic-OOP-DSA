#include<iostream>
using namespace std;
int main(){
int n,count;
cout<<"Enter the number:    ";
cin>>n;
while(n>0){

    n/=10;
    count++;
}

cout<<"Number of digits are "<<count;


    return 0;
}