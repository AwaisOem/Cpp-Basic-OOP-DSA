#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int in;
cout<<"Enter the number:   ";
cin>>in;
    if(in%2==0){
        in+=1;
    }
    else if(in%2!=0){
        in-=1;
    }
cout<<in;
 return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved