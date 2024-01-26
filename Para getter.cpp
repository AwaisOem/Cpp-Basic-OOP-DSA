#include<iostream>
#include<fstream>
#include<string>
#include<unistd.h>
using namespace std;
int main(){string name="awaisoem";
string namein,passin;
string pass="awais123";
cout<<"Enter your id: ";cin>>namein;
cout<<"Enter your Password: ";
cin>>passin;
if(passin==pass && namein==name){
    
    system("clear");
    for( int i=10; i>=0;i--){
     system("clear");
     cout<<"Ok....Wait for ";
     cout<< i <<" sec. We are Processing Your Data"<<endl;
 sleep(1);  
   }
    
    int getascii[400000];
    fstream ascii;
    ascii.open("Para in ascii.txt",ios::in);
if(ascii.is_open()){
  for(int i=0;i<=400001;i++){
        ascii>>getascii[i];}
     
    }else{
        cout<<"Failed to load the file";}
 
 char para[3066];
 //idhar error aa rha hai ke int se ab ascii code ko char me karna hai magar ye logic issy proceed nhi kar rhi
 for(int i=0;i<=3066;i++){
     para[i]=char(getascii[i]);}
 
 for(int i=0;i<=3066;i++)
 {cout<<para[i];}
 //error end
}else{
 cout<<"Sorry your id or password is wrong.....";}
 
 
   
   return 0;
}