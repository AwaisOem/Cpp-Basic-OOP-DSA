#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter number of rows:    ";cin>>r;
    
  for(int i=3;i<=r;i++){
     for(int j=0;j<=r-i;j++){cout<<" ";}
   for(int k=0;k<=i;k++){cout<<"❤️";}
   for(int l=1;l<=2*r-i-i;l++){cout<<" ";}
   for(int k=0;k<=i;k++){cout<<"❤️";}
   cout<<endl;}
   
   for(int i=2*r;i>=0;i--){
     for(int j=0;j<=2.1*r-i;j++){cout<<" ";}
   for(int k=0;k<=i;k++){cout<<"❤️";}
   cout<<endl;}
   
   
  
   
   return 0;
}