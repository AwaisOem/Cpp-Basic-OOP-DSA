#include <iostream>
using namespace std;
int main()
{
    int a, ar= 0;
    cout << "Enter number to find the last prime number";
    cin >>a;
  for(int i= a - 1; i >= 1; i--){
        
        
        
        
        for (int j = 2; j < i; j++) 
        {
    if (i % j == 0)ar++;
           }
               
                
                
                
                
                
                
        if (ar == 0) 
        {
            if (i == 1) 
            {
  cout << "Sorry no prime number";
                break;}
                
                
            cout << i << " is the last prime number before " << a << endl;
            break;
        }
        
        
        
        
        
        
        ar = 0;
    }
    return 0;
}
