#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


int main(){
	char f;
	float var1,var2;
	cout<<"Enter the function *,-,+,/:";cin>>f;
	cout<<"Enter the first number:";cin>>var1;
	cout<<"Entet the second number:";cin>>var2;
	
	switch (f){
		case '*':   cout<<setw(10)<<var1<<" × "<<var2<<" = "<<var1*var2<<endl;
		break;
		case '+':   cout<<setw(10)<<var1<<" + "<<var2<<" = "<<var1+var2<<endl;
		break;
		case '-':   cout<<setw(10)<<var1<<" - "<<var2<<" = "<<var1-var2<<endl;
		break;
		case '/':   cout<<setw(10)<<var1<<" ÷ "<<var2<<" = "<<var1/var2<<endl;
		break;
		default :   cout<<"please enter a valid operation";
		break;}
		
		return 0;
	}
		