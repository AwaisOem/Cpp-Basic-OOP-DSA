#include<iostream>
#include<iomanip>
using namespace std;
int main(){


int r(15);
for (int i = r; i >0; i--)  
{
    for (int j = 1; j <=r-i; j++)
    {
        cout<<"*";
    }
    for (int j = 2; j <=2*i-1; j++)
    {
        cout<<" ";
    }
    for (int j = 1; j <=r-i; j++)
    {
        cout<<"*"; 
    }
    cout<<endl;
}

return 0;   
}
// COpyright AWAISOEM 2022 | All right reserved