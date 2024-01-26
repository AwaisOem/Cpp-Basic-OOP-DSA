#include<iostream>
#include<cmath>
using namespace std;
int main(){          
/*Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
Sample Output:
Input the value for nth term: 5
1/1^1 = 1
1/2^2 = 0.25
1/3^3 = 0.037037
1/4^4 = 0.00390625
1/5^5 = 0.00032
The sum of the above series is: 1.29126  */
    float n,sum,sq;
    cout<<"Enter nth term:    ";
    cin>>n;       
    sum=1;     
    for(int i=2;i<=n;i++){         
    sq= pow(i,i);
    sum=sum+1/sq; }   
    cout<<"\nResult:    "<<sum;
    return 0;
}