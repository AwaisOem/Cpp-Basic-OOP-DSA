#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int r;
cin>>r;
for(int i=1;i<=r;i++){
    for (int  j = 1; j <=r-i; j++)
    {
        cout<<" ";
    }
    for (int  j = 1; j <2*i; j++)
    { if (j==1 || j==2*i-1)
    {
        cout<<"*";
    }
    else{
        cout<<" "; 
    }
    
    }
    cout<<endl;
}
for(int i=r;i>0;i--){
    for (int  j = 1; j <=r-i; j++)
    {
        cout<<" ";
    }
    for (int  j = 1; j <2*i; j++)
    { if (j==1 || j==2*i-1)
    {
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