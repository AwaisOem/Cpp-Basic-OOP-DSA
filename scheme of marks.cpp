#include<iostream>
#include<iomanip>
#include<math.h>
#include<cmath>
using namespace std;
float pefs;
int main()
{do{
	int a, b, c;
	float total;
	cout << "Enter numbers of Math:";
	cin >> a;
	cout << "Enter numbers of Physics:";
	cin >> b;
	cout << "Enter numbers of Chemistry:";
	cin >> c;
	float d = {(float)a*2 +(float)b*2 + (float)c*2} ;
	float per = (d / 540) * 100;
	float am= 100 - per;
	float phyPer={(float)b*100/85};
	float chemPer={(float)c*100/85};
	float mathPer={(float)a*100/100}; 
	float phyP=(phyPer/100)*30;
	float chemP=(per/100)*30;
	cout<<endl;
	cout<<"Percentage in Math: "<<setprecision(3)<<mathPer<<"%"<<endl;
	cout<<"Percentage in Physics: "<<setprecision(3)<<phyPer<<"%"<<endl;
	cout<<"Percentage in Chemistry: "<<setprecision(3)<<chemPer<<"%"<<endl;
	
	
	cout<<"Percentage in Total elective subjects: "<<setprecision(3)<<per<<"%"<<endl;
	if (per > 95)
	{
	pefs = per + am;
	}
	else
	{
		pefs = per + 5;
	}
	
//	cout<<pefs;
	 float Eng= (pefs/100)*200; 
	 float Urdu=(pefs/100)*200; 
	 float Pak=(pefs/100)*50;
	 float Isl=(pefs/100)*50;
	  total=d+Eng+Urdu+Pak+Isl+round(phyP)+round(chemP);
	  //cout<<endl<<round(chemP)<<setw(30)<<round(phyP);
	 cout<<endl;
	 cout<<"Otained Marks: "<<setprecision(4)<<round(total)<<endl;
	 cout<<endl;
	float Tp ={(float)total*100/1100};
	 cout<<"Total percentage: "<<Tp<<"%"<<endl;
	 cout<<endl;
	 cout<<"Total Marks: 1100"<<endl;
	 cout<<endl; }while(true);
	return 0;}