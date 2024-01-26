#include<iostream>
#include<unistd.h>
using namespace std;


//inline int deposit(int a,int b){return a+b;}
    


void menu(){
    cout<<"*********************************Menu******************************"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit ammount"<<endl;
    cout<<"3.Withdraw"<<endl;
   // cout<<"4."
    cout<<"4.Exit"<<endl;    
}



int main(){
    int balance(30000),choice,i,da,wd;
 // do{ 
 line:
   menu();
    cout<<endl;
    cout<<"Enter your choice:    ";
    cin>>choice;
   
    switch(choice){
      case 1 : 
       cout<<"\n";
       cout<<"Your Current Balance is Rs"<<balance;    
    break;
      case 2 :
  cout<<"Enter Ammount to Deposit:    ";cin>>da;
  cout<<"\n";
  balance+=da;
      cout<<"\n";
      cout<<"....Done....";
     
    break;
      case 3 :
     cout<<"Enter Ammount you want to Withdraw:    ";
     cin>>wd;
     cout<<"\n";
     balance-=wd;
     cout<<"Rs"<<wd<<" was withdrew.Please Recieve it!";
   
    break;
     case 4 :
      i=0;
      goto linen;
     break;
     default :   
    cout<<"Invalid entry😔";
    
  }cout<<"\n\n\n";
  
 // }while(i!=0);
 int z;
 cout<<"For open menu again Press 0:     ";
 cin>>z;
 if(z==0){
  system("clear");
  goto line;
  
  
  
  
  }
   linen:
   return 0;
}