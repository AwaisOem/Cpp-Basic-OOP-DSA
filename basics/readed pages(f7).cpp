#include<iostream>
using namespace std;
int main(){
    int p,nod,nopid;
 cout<<"Enter total pages of a book:    ";cin>>p;cout<<endl;
 cout<<"Enter the number of pages person read in one day:";cin>>nopid;
 cout<<endl;
 cout<<"Number of days person read:    ";cin>>nod;cout<<endl;
 
 
 unsigned int rp=nod*nopid;
 unsigned int rip=p-rp;
 
 cout<<endl;
 cout<<"Readed Pages:    "<<rp<<endl;
 cout<<"Remaining Pages:    "<<rip<<endl;
 cout<<endl;
 
  
   
   return 0;
}