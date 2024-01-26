#include<iostream>
#include <time.h>
#include<string>
using namespace std;
int main() 
{ 
time_t timetoday;
time(&timetoday);
string s,y="",d="",m="";
s=asctime(localtime(&timetoday));
for(int i=5;i>0;i--)
    y+=s[s.length()-i];
for(int i=8;i<10;i++)
    d+=s[i];
for(int i=4;i<7;i++)
    m+=s[i];
int year_today=stoi(y);
int day_today=stoi(d);
int month_today=0;
string monthname[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
for (int i = 0; i <12; i++)
    if (m==monthname[i])
        month_today=i+1;
int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(year_today%4==0 && year_today%100!=0){
    monthdays[1]=29;
}else if(year_today%400==0 && year_today%100==0){
    monthdays[1]=29;
}
long int res_today=0;
for (int i = 1; i <=12; i++){
    if (month_today==i)
    {
        res_today=(day_today+(month_today*monthdays[i-1])+(year_today*365));break;
    }}
int d1=4,m1=11,y1=2003;
long int res_DOB=0;
for (int i = 1; i <=12; i++){
    if (m1==i)
    {
        res_DOB=(d1+(m1*monthdays[i-1])+(y1*365));break;
    }}
long int temp=res_today-res_DOB;

int yeara=temp/365;
temp%=365;
int montha=temp/30.42f;
temp%=30;
int daya=temp;
cout<<daya<<"/"<<montha<<"/"<<yeara<<endl;
}