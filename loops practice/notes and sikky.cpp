#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    do{
int i,j,k,l,p,n,o,in;
cout<<"Enter total price in integar:    ";cin>>in;
cout<<endl;

cout<<"500 wale note------>";
i=0;
   if(in>500){
   	while(true){in=in-500;
   	i++;
   	if(in<500){break;}}}
   	cout<<i;
   	
   	cout<<endl;
   	
   	cout<<"100 wale note------>";
   	j=0;
      if(in>100){
   	while(true){in=in-100;
   	j++;
   	if(in<100){break;}}}
   	cout<<j;
   	
   	cout<<endl;
   	
   	cout<<"50 wale note------->";
   	k=0;
   	if(in>50){
   	while(true){in=in-50;
   	k++;
   	if(in<50){break;}}}
   	cout<<k;
   	
   	cout<<endl;
   	
   	cout<<"20 wale note------->";
   	l=0;
   	if(in>20){
   	while(true){in=in-20;
   	l++;
   	if(in<20){break;}}}
   	cout<<l;
   	
   	cout<<endl;
   	
   	cout<<"10 wale note------->";
  	p=0;
   	if(in>=10){
   	while(true){in=in-10;
   	p++;
   	if(in<10){break;}}}
   	cout<<p;
   	
   	cout<<endl;
   	
  	cout<<"5 wale sikky------->";
  	n=0;
   	if(in>=5){
   	while(true){in=in-5;
   	n++;
   	if(in<5){break;}}}
   	cout<<n;
   	
   	cout<<endl;
   	
   	
   	int q=0;
   	cout<<"2 wale sikky------->";
   	if(in>=2){
   	while(true){in=in-2;
   	q++;
   	if(in<2){break;}}}
   	cout<<q;
   	
   	cout<<endl;
   
   	o=0;
   	cout<<"1 wale sikky------->";
   	if(in>=1){
   	while(true){in=in-1;
   	o++;
   	if(in<1){break;}}}
   	cout<<o;
   	
cout<<endl;cout<<endl;}while(true);
   return 0;}