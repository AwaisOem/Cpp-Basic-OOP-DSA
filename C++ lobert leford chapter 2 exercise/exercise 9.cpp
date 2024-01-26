#include<iostream>
using namespace std;
int main(){
    
  int a,b,c,d,result1,result2;
  char by1,by2;
  cout<<"Enter the first fraction:    ";
  cin>>a>>by1>>b;
  cout<<"\n";
  cout<<"Enter second Faraction:    ";
  cin>>c>>by2>>d;
   cout<<"\n";
 // result=(a/b)+(c/d);
   result1=(a*d)+(b*c);
   result2=b*d;
   cout<<"sum:    "<<result1<<by1<<result2;
      
   
   return 0;
}