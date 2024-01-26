#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int r;
cin>>r;
for (int i = 1; i <=r; i++)
{
    for (int j =1; j<=r; j++)
    {
        if((j==1 || i==1)||(j==r || i==r)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
    
}



    return 0;   
}


