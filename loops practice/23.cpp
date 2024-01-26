#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int t;
cin>>t;
int i(0);
while(true){
    int sq(1);
    for (int j = 1; j<=i; j++)
    {
        sq*=3;
    }
    if(sq>t){
        break;
    }
    cout<<sq<<"  ";
    i++;
}


return 0;   
}