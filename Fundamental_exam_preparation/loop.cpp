#include<iostream>
#include<iomanip>
using namespace std;
int main(){

// for(int i=1;i<=8;i++){
//     if(i%2!=0){cout<<" ";}
// for(int j=1;j<=8;j++){
//     cout<<"-";
// }
// cout<<"\n"; 
// }


int r=7;
for (int i = 1; i <=r; i++)
{
    for (int  j = 1; j <=r-i+1; j++)
    {
        cout<<j;
    }
    for (int k = 2; k <2*i; k++)
    {
        cout<<" ";
    }
    int m=r-i+1;
    for (int l = 1; l <=r-i+1; l++)
    {
        cout<<;
    }
    
    cout<<endl;
}


 return 0;   
}