#include<iostream>
#include<iomanip>
using namespace std;
void dplyarr(int anal[],int dick);
void bblsrt(int a[],int size);
void slctnsrt(int tapatap[],int wtf);
void instnsrt(int suck[],int ass);


int main(){

int lun;
cout<<"Enter the value of size: ";
cin>>lun;
int pussy[lun];
for (int  l = 0; l <lun; l++)cin>>pussy[l];
cout<<"1Press for insertion sort"<<endl;
cout<<"2Press for bubble sort"<<endl;
cout<<"3Press for Selection sort"<<endl;

int suck;
cout<<"CHoice:      ";cin>>suck;
switch (suck)
{
case 1:
    instnsrt(pussy,lun);
    break;
case 2:
    bblsrt(pussy,lun);
    break;
case 3:
    slctnsrt(pussy,lun);
    break;

default:
cout<<"invalid"<<endl;
    break;
}


 return 0;   
}



void bblsrt(int a[],int size){
    int lun=size;
while (size>1)
{
    for (int  i = 0; i <size-1; i++)
    {
        if (a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        
    }
    size--;
}
dplyarr(a,lun);
}


void slctnsrt(int tapatap[],int wtf){
    for (int i = 0; i <wtf; i++)
    {
        for (int j=i+1; j<wtf; j++)
        {
          if(tapatap[i]>tapatap[j]){
            int temp=tapatap[i];
            tapatap[i]=tapatap[j];
            tapatap[j]=temp;}
        }   
    }
dplyarr(tapatap,wtf);}


void instnsrt(int suck[],int ass){
    int l,key;
    for (int i = 1; i <ass; i++){
        l=i-1;
        key=suck[i];
        while (suck[l]>key and l>=0)
        {
            suck[l+1]=suck[l];
            l--;
        }
        suck[l+1]=key;
    }
    

dplyarr(suck,ass);

}


void dplyarr(int anal[],int dick){
    cout<<"\n\n\n";
    for (int i = 0; i < dick; i++)
    {
        cout<<anal[i]<<"  ";
    }
    cout<<"\n\n\n";
}