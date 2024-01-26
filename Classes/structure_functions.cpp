#include<iostream>
#include<cstring>
using namespace std;
class Ahmad
{
	public:
	char name[100];
	char Aname[100];
	void getName();
	void showName();
};
 void Ahmad ::getName()
{
	cout<<"Enter the name "<<endl;
	cin.getline(name,100);
}
 void Ahmad::showName()
{
cout<<" Nick Name of Aqib is "<<name<<endl;
}
int main()
{
	Ahmad Nickname,Aaqib;
	strcpy(Aaqib.Aname,"Jhvbjj");
	cout<<"My name is "<<Aaqib.Aname<<endl; 
	Nickname. getName();
	Nickname.showName();
}