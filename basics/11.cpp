#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int nxt,a(0),b(1);
int ind(1);
while (ind<15)
{ 
    if(ind==1){
        cout<<1<<" ";
        ind++;
        continue;
    }
    nxt=a+b;
    cout<<nxt<<" ";
a=b;
b=nxt;
ind++;
}
return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved