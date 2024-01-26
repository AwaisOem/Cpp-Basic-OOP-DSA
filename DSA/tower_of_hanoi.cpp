#include<bits/stdc++.h>
using namespace std;
void TOH(int n , char S ,char H  , char D , int&c)
{
    if(n<=1){
        cout<<"Moving "<<S<<" to "<<D<<"  "<<c++<<endl;
        return;
    }
    TOH(n-1,S,D,H,c);
    cout<<"Moving "<<S<<" to "<<D<<"  "<<c++<<endl;
    TOH(n-1,H,S,D,c);
}
auto main()->int
{
    int s = 1;
    TOH(5, 'A' , 'B' , 'C' , s); 
    return EXIT_SUCCESS;   
}
//O(2^n) expoetial complexity