#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x;
    cin>>x;
    int sum(0);
    for (int i = 0; i <5; i++)
    {
        int sq(1);
        for (int j =1; j<=i; j++)
        {
            sq*=x;
        }
        
    // cout<<(i+1)*sq<<endl;
        sum+=(i+1)*sq;
    }
    
cout<<sum;


return 0;   
}