#include<iostream>
using namespace std;
int main(){int b,a500,a100,a50,a20,a10,a5;
   cout<<"Enter ammount:    ";
   cin>>b;
   cout<<endl;
   a500=b/500;
   b=b%500;
   a100=b/100;
   b=b%100;
   a50=b/50;
   b=b%50;
   a20=b/20;
   b=b%20;
   a10=b/10;
   b=b%10;
   a5=b/5;
   b=b%5;
  
  
   cout<<"500: "<<a500<<endl<<"100: "<<a100<<endl<<"50: "<<a50<<endl<<"20: "<<a20<<endl<<"10: "<<a10<<endl<<"5: "<<a5<<endl<<"1: "<<b;
   
  
   
   return 0;
}