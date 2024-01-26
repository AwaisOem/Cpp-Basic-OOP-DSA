#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int r(3);
for(int i=1;i<=r;i++){
    for (int j = 1; j <=r*23; j++)
    {
        if ((i+j)%4==0 || (i==2 and j%2==0))
        {
            cout<<" *";
        }else{
            cout<<"  ";
        }
        
    }
    
cout<<endl;
}

 return 0;   
}