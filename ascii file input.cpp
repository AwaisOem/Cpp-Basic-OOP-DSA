#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
  const  char para[]="Facilitations and jubilations to everyone on this New Year.May the jovial and covivial carnival, dexterity and zealousness fathom the belligerence of exburence, exhilaration and rhapsody on sagacity and percipience";
                     
                     
    
    
    
    
    
    int ascii[4000];
    
    
 int h =(sizeof(para)/sizeof(para[0]));
/* cout<<setw(23)<<h<<endl;*/
   for(int i=0;i<=h;i++){     
    cout<<int(para[i]);
    }
    
    for(int i=0;true;i++){
    ascii[i]=int(para[i]);
    if(para[i]==para[h]){
        break;}
    }
    cout<<endl;
int s=sizeof(ascii)/4;
/*cout<<setw(23)<<s;*/
    
   
    fstream para1;
    para1.open("Para in ascii.txt",ios::out);
    if(para1.is_open()){
        
    for(int i=0;i<=s;i++){
           para1<<ascii[i];}
    
    }else{
        cout<<"\n\n\nError To Open The File.....";}
    
    
   return 0;
}