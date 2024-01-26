#include<iostream>
#include<iomanip>
using namespace std;
int main(){

for (int i =6; i >0; i--)
{
    int sq(1);
    for (int j = 1; j<=i; j++)
    {
        sq*=2;
    }
    
    cout<<sq<<"  ";
}


    return 0;   
}