//Employee Management Database System
#include<iostream>
#include<fstream.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<graphics.h>

	 class group
	 {
	 private:
		struct person
		{
		 char flag;
		 char empcode[5];
		 char name[40];
		 int age;
		 float sal;
		 int day;
		 int month;
		 int year;
		 }p;
		 fstream file;
		 public:
	group();

	void addrec();
	void listrec();
	void modirec();
	void delrec();
	void recallrec();
	void packrec();
	void exit();
	};


	void main()

	{
	 char choice,v;
	 group g;
	 do
	 {
	 clrscr();
	 struct dosdate_t d;
	_dos_getdate(&d);
		 //	 p.day=d.day;
		//	 p.month=d.month;
		//	 p.year=d.year;
		//	 _dos_getdate(&d);
	 gotoxy(12,5);
	 textcolor(6);
		cprintf("Todays date:");
		printf("%d",d.day);
		cout<<"/";
		printf("%d",d.month);
		cout<<"/";
		cout<<d.year;
		gotoxy(12,9);
	 cout<<"Srknec.corporation pvt.ltd";
	 gotoxy(12,12);
	 cout<<"1.Add record";
	 gotoxy(12,15);
	 cout<<"2.List Record";
	 gotoxy(12,17);
	 cout<<"3.Modify record";
	 gotoxy(12,19);
	 cout<<"4.Delete record";
	 gotoxy(12,21);
	 cout<<"5.Recall record";
	 gotoxy(12,23);
	 cout<<"6.Pack record";
	 gotoxy(12,25);
	 cout<<"0.Exit";
	 gotoxy(12,28);
	 cout<<"Your choice"<<"  ";
	 cin>>choice;
		clrscr();

	 switch(choice)
	 {
	 case '1':
	 g.addrec();
	 break;
	 case'2':
	 g.listrec();
	 break;

	 case'3':
	 g.modirec();
	 break;

	 case'4':
	 g.delrec();
	 break;

	 case'5':
	 g.recallrec();
	 break;

	 case'6':
	 g.packrec();
	 break;

	 case'0':
	 g.exit();
	 exit(1);

	 }
		 }
		 while(choice!=0);
	 }


	 void group::group()
	 {
		file.open("Emp.dat",ios::binary|ios::in|ios::out);
		p.flag=' ';
		if(!file)
		{
		cout<<endl<<"Unable to open file";
		exit();
		}

	 }
		void group::addrec()
	 {
		char ch;
		file.seekp(0L,ios::end);
	struct dosdate_t d;
	 _dos_getdate(&d);
		p.day=d.day;
		p.month=d.month;
		p.year=d.year;

		cout<<"Make shure that no employee has the same code"<<endl;
		do
		{
	 cout<<endl<<"Enter employee  code, name, age & salary 
:"<<endl<<endl;
	 cout<<"OR"<<endl<<endl;
	 cout<<"To return to the Main menu press'm' key else press'a':";
	 cin>>ch;
	 if(ch=='m'||ch=='M')
	 {
		 main();
		}
	 cin>>p.empcode>>p.name>>p.age>>p.sal;
	 p.flag=' ';
	 file.write((char*)&p,sizeof(p));
	 cout<<"Add another record ?(y/n) :";
	 cin>>ch;
	 }
	 while(ch=='y'||ch=='Y');
		 }
		 void group::listrec()
	 {
		int j=0,a;
		file.seekg(0L,ios::beg);

	cout<<"List of records present are as under>>>"<<endl<<endl;
	cout<<"             "<<"|CODE|"<<"           "<<"|NAME|"<<"
"<<"|AGE|"<<" "<<"|SALARY|"<<" "<<"|DATED|"<<endl;
		 //Donot touch Above Line Any Way it is set to give Some Nice Look
		while(file.read((char*)&p,sizeof(p)))
	 {
		if(p.flag!='*')

cout<<endl<<"Record#"<<"
"<<j++<<setw(6)<<p.empcode<<setw(20)<<p.name<<setw(4)<<p.age<<setw(9)<<p.sal<<"
 "<<p.day<<"/"<<p.month<<"/"<<p.year<<endl;
}
file.clear();

if(j==0)
{
 gotoxy(10,10);
 cout<<"No record exit";
 gotoxy(10,11);
 cout<<"Press any key...";
 getch();
}
else
{
 cout<<endl<<"Press any key...";
 getch();
}
}
void group::modirec()
{
char code[5];
int count=0;
long int pos;
cout<<"Enter employee code whose record is to be modified :";
cin>>code;
file.seekg(0L,ios::beg);
while(file.read((char*)&p,sizeof(p)))
{
 if(strcmp(p.empcode,code)==0)
 {
 cout<<endl<<"Enter new record "<<endl;
 cout<<endl<<"Enter employee name,age & salary :"<<endl;
 cin>>p.name>>p.age>>p.sal;
 struct dosdate_t d;
 _dos_getdate(&d);
 p.day=d.day;
 p.month=d.month;
 p.year=d.year;
 p.flag=' ';
 pos=count*sizeof(p);
 file.seekp(pos,ios::beg);
 file.write((char*)&p,sizeof(p));
 return;
}
 count++;
}
cout<<endl<<"No employee in file with code= "<<code;
getch();
file.clear();
}
void group::delrec()
	{
	char code[5];
	long int pos;
	int count=0;
	cout<<"Enter employee code to be deleted :";
	cin>>code;
	file.seekg(0L,ios::beg);
	while(file.read((char*)&p,sizeof(p)))
	{
	 if (strcmp(p.empcode,code)==0)
	 {
	 p.flag='*';
	 pos=count*sizeof(p);
	 file.seekp(pos,ios::beg);
	 file.write((char*)&p,sizeof(p));
	 return;
	 }
	 count++;
	 }
	 cout<<endl<<"No employee in file with code="<<code;
	 cout<<endl<<"Press any key...";
	 getch();
	 file.clear();
	 }
	void group::recallrec()
	 {
		 char code[5];
		 long int pos;
		 int count=0;

		 cout<<"Enter employee code to be recalled :";
		 cin>>code;

		 file.seekg(0L,ios::beg);

		 while(file.read((char*)&p,sizeof(p)))
		 {
		if(strcmp(p.empcode,code)==0)
		{
		p.flag=' ';
		pos=count*sizeof(p);
		file.seekp(pos,ios::beg);
		file.write((char*)&p,sizeof(p));
		return;
		}

		count++;
	}
	cout<<endl<<"No employee in the file with code="<<code;
	cout<<endl<<"Press any key...";
	getch();
	file.clear();
		 }
		 void group::packrec()
		{
		 ofstream outfile;
	outfile.open("TEMP",ios::out);
	file.seekg(0,ios::beg);
	while(file.read((char*)&p,sizeof(p)))
	{
	 if(p.flag!='*')
	 outfile.write((char*)&p,sizeof(p));
	 }
	 outfile.close();
	 file.close();
	 remove("Emp.DAT");
	 rename("TEMP","EMP.DAT");
	 
file.open("EMP.DAT",ios::binary|ios::in|ios::out|ios::nocreate);
 gotoxy(10,10);
 cout<<"Marked records to be deleted are all removed";
 gotoxy(10,11);
 cout<<"press any key....";
 getch();
 }
 void group::exit()
 {
 file.close();
}
