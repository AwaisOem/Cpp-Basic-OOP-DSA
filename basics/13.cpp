#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int in,p,ne(0);
cout<<"Enter the number:    ";
cin>>in;
do
{
    p=in%10;
    in/=10;
    ne=(ne*10)+p;

} while (in>0);
cout<<"Here is reverse: "<<ne<<endl;

 return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved