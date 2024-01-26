#include<iostream>
#include<cstring>
using namespace std;
int main(){

char a[50]="0";
char b[50]="1";	
char nxt[50];


for (int i = 0; i <10; i++)
{
    for (int j= 0; j< strlen(a); j++)
        nxt[j] =a[j];
    for (int j= strlen(a); j< strlen(a)+strlen(b); j++)
        nxt[j] =b[j-strlen(a)];
    nxt[strlen(a)+strlen(b)] = '\0';
    for (int k = 0; k < strlen(nxt); k++)
        cout<<nxt[k];
    cout<<endl;
    for (int j = 0; j <strlen(a)||j<strlen(b); j++)
        a[j]=b[j];
    for (int j = 0; j <strlen(b)||j<strlen(nxt); j++)
        b[j]=nxt[j];
}
return 0;   
}