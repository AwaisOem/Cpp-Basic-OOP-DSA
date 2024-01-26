#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int n;
cin>>n;
if(n>=90){
    cout<<"A grade"<<endl;
}
else{
    if (n>=80)
    {
        cout<<"B grade"<<endl;
    }
    else{
        if (n>=70)
        {
            cout<<"C grade"<<endl;
        }
        else{
            if (n>=60)
            {
                cout<<"D grade"<<endl;
            }else{
                cout<<"F grade"<<endl;
            }
            
        }
        
    }
    
}

 return 0;   
}