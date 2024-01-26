 # include <iostream>
 # include <fstream>
 using namespace std;
 # define max 20
 struct employee
 {
 	string name;
 	long int id;
 	int age;
 	int grade;
 };
 struct salary{
 long int pay;
 long int netsalary;
 };
 int num=0;
 employee emp[max];
 salary s[max];
 void manage();
 void checkid(int i,int c);
   void mainmenu ();
   void bonus();
   void src();
   void make ();
   void insert();
      void  report();
   void searchrecordbyid();
   void searchrecordbyname();
   void deleteindex(int j,int i);
 void deleterecord();
 void prog_to_file();
 void file_to_prog();
 int main ()
 {
 file_to_prog();
 mainmenu ();
 prog_to_file();
 return 0;
 }
 void mainmenu ()
 {

 	cout<<"\n------------------------EMPLOYEE MANAGEMENT SYSTEM----------------------------\n\n\n";
 	cout<<"                      "<<"SELECT OPTION FROMM THE FOLLOWING\n\n\n";
 	cout<<"------------------------------------------------------------------------------\n\n";
 	cout<<" 1 ==> MANAGE DATA\n\n";
  	cout<<" 2 ==> DELETE DATA OF EMPLOYEE FROM EXISTING RECORD\n\n";
 	cout<<" 3 ==> SEARCH AN EMPLOYEE\n\n";
 	cout<<" 4 ==> CHECK YOUR SALARY WITH BONUS\n\n";
 	cout<<" 5 ==> REPORT OF COMPANY\n\n";
 	cout<<" 6 ==> EXIT THE PROGRAM\n\n";
 	int op;
 	cin>>op;
 	if(op==1)
 	{
 	manage();
	 }
	else if(op==2){
		deleterecord();
	 }
	else if(op==3){
	 src();
	 }
	else if(op==4){
	 	 bonus();
	 }
	else if(op==5)
	 {	report();
	 	
	 }
	 else if(op==6){
		  prog_to_file();
	 	exit(0);
	 }
	 else if (op==7){
	 
	 }
	 else {
	 	cout<<"\n\n INVALID OPTION \n VALID OPTIONS ARE 1,2,3,4,5\n";
	 }
	  mainmenu();
 }
 void manage()
 {
 	cout<<"--------------------------SELECT OPTION-----------------------------------\n\n";
 	cout<<"                   ==>1  ADD EMPLOYEES\n\n";
 	cout<<"                   ==>2 INSERT DATA\n\n";
 	int op;
 	cin>>op;
 	if (op==1)
 	{
 		make();
	 }
	 if(op==2){
	 	insert();
	 }
 	
 	
 	
 }
 

  void make ()
 {int i;
 	cout<<"add employee details to the table\n\n";
 	cout<<"maximum number of enteries will be "<<max<<endl;
 	cout<<"\n enter number of entries required\n\n ";
 	cin>>num;
 	cout<<"\n enter following data\n\n";
 	for(int i=0; i<num; i++)
 {
	cout<<"name\n";
     cin>>emp[i].name;
 	cout<<"employee id\n";
 	cin>>emp[i].id;
 	int c=emp[i].id;
    checkid(i,c);
 	cout<<"age of employee\n";
 	cin>>emp[i].age;
 	cout<<"grade of employee\n";
 	cin>>emp[i].grade;
 	cout<<"enter your salary\n\n";
 	cin>>s[i].pay;
 }
  mainmenu();
 }
void insert()
{
	int flag=-1;
	if(num<max){
 	cout<<"employee id\n";
	long int id;cin>>id;
	for (int j = 0; j < num; j++)
	{
		if (id==emp[j].id)
		{
			flag=j;
		}
		
	}
	if (flag==-1)
	{
	int i=num;
	num++;
 	emp[i].id=id;
	cout<<"name\n";
     cin>>emp[i].name;
 	cout<<"age of employee\n";
 	cin>>emp[i].age;
 	cout<<"grade of employee\n";
 	cin>>emp[i].grade;
 		cout<<"enter your salary\n\n";
 	cin>>s[i].pay;
	}else{
		cout<<"Employeee exist already........\n";
	}
	
	}
else {
cout<<"employee table full\n";

}
mainmenu();
}
void checkid(int i,int c)
{
	for(int j=0;j<num;j++)
	{
		if(c==emp[i-1].id)
	{
		cout<<"                  !!!!!!!!!WARNING!!!!!!!!\n\n";
		
		cout<<"an employee with this id alresdy exist\n\n";
		cout<<"try to enter a different one\n\n";
		deleteindex(j,i);
		insert();
	
	}
	}
}
void deleteindex(int j,int i)
{
	for(int j=i;j<num-1;j++)
	{
		emp[j].name=emp[j+1].name;
    	emp[j].id=emp[j+1].id;
    	emp[j].grade=emp[j+1].grade;
    	emp[j].age=emp[j+1].age;
	}
	return;
}

void deleterecord()
{
	cout<<"enter the employee id to delete record\n\n";
	int id;
	cin>>id;
	for(int i=0;i<num;i++)
	{
	if(emp[i].id==id)
    {for(int j=i;j<num-1;j++)
	{
		emp[j].name=emp[j+1].name;
    	emp[j].id=emp[j+1].id;
    	emp[j].grade=emp[j+1].grade;
    	emp[j].age=emp[j+1].age;
	}
	num--;
	cout<<"\t\t\t\t\tData Deleted";
	ofstream file;
	file.open("Employees.txt");
		for (int i = 0; i < num; i++)
		{
		file<<emp[i].name<<" "<<emp[i].id<<" "<<emp[i].age<<" "<<emp[i].grade<<" ";
				}
file.close();
	break;}
}
mainmenu();
}
void src()
{
    cout<<"select search option from the following\n\n";
    cout<<"1==> search by id\n\n";
    cout<<"2==> search by name\n\n";
    int option;
    cin>>option;
    if(option==1)
    {
        searchrecordbyid();

    }
    if(option==2)
    {
        searchrecordbyname();
    }
}
void searchrecordbyid()
{
	cout<<"\nenter the employee id to search record\n\n";
	int id;
	cin>>id;
	int x=-1;
	for(int i=0;i<num;i++){
		if (emp[i].id==id){
				cout<<"                         YOUR RECORD FOUND\n\n";
			cout<<"name = "<<emp[i].name<<endl;
			cout<<"id = "<<emp[i].id<<endl;
			cout<<"age = "<<emp[i].age<<endl;
		    cout<<"grade = "<<emp[i].grade<<endl;
		    cout<<"salary = "<<s[i].pay;
 	
		    x=0;

		}
	}
		if(x==-1)
	cout<<"                                      RECORD NOT FOUND\n";
	
	mainmenu();
}void bonus()
{ long int id,grade,bonus;
	cout<<"enter your id\n\n";
	cin>>id;
	for(int i=0;i<num;i++)
	{
	if (emp[i].id==id){
		cout<<"                         YOUR RECORD FOUND\n\n";
			cout<<"name = "<<emp[i].name<<endl;
			cout<<"id = "<<emp[i].id<<endl;
			cout<<"age = "<<emp[i].age<<endl;
		    cout<<"grade = "<<emp[i].grade<<endl;
		    cout<<"salary = "<<s[i].pay;
		
    grade=emp[i].grade;

	cout<<"as your grade is  "<<grade<<"\n\n";
	cout<<"and your salary without bonus is"<<s[i].pay<<"\n\n";
		if(grade>=7 && grade<=10){
	 bonus=(s[i].pay*5/100);
	s[i].netsalary=s[i].pay+bonus;
	cout<<"your salary with bonus is ="<<s[i].netsalary<<endl;
	break;}
		else if(grade>=11 && grade<=16){
	 bonus=(s[i].pay*10/100);
	s[i].netsalary=s[i].pay+bonus;
	cout<<"your salary with bonus is ="<<s[i].netsalary<<endl;
	break;}
	else (grade>=17 && grade<=22);
	{
			 bonus=(s[i].pay*15/100);
	s[i].netsalary=s[i].pay+bonus;
	cout<<"your salary with bonus is ="<<s[i].netsalary<<endl;
	break;
	}

	}
	}





	mainmenu();
}
void searchrecordbyname()
{
	cout<<"\nenter the employee name to search record\n\n";
	string name;
	cin>>name;
	int x=-1;
	for(int i=0;i<num;i++)
	{
		if (emp[i].name==name)

		{	cout<<"                         YOUR RECORD FOUND\n\n";
			cout<<"name = "<<emp[i].name<<endl;
			cout<<"id = "<<emp[i].id<<endl;
			cout<<"age = "<<emp[i].age<<endl;
		    cout<<"grade = "<<emp[i].grade<<endl;
		    cout<<"salary = "<<s[i].pay;
		    	x=0;
			}


	}
	if(x==-1)
	cout<<"                                  RECORD NOT FOUND\n";

	mainmenu();
}
void  report()
{

cout<<"record of total employees working in the company\n\n";
for(int i=0;i<num;i++)
{
		cout<<"name = "<<emp[i].name<<endl;
			cout<<"id = "<<emp[i].id<<endl;
			cout<<"age = "<<emp[i].age<<endl;
		    cout<<"grade = "<<emp[i].grade<<endl;
		    cout<<"salary without bonus = "<<s[i].pay;
		    cout<<"salary with bonus = "<<s[i].netsalary;
		    cout<<"\n\n";
}

            mainmenu();
}

void file_to_prog(){
	ifstream fil;
	fil.open("Employees.txt");
	int i = 0;
	if (fil.is_open())
	{
		while (!fil.eof())
		{
		fil>>emp[i].name>>emp[i].id>>emp[i].age>>emp[i].grade;
		i++;
		}
		num=i;
	}
	else{
		cout<<"Error to open file................"<<endl;
	}
	fil.close();
}
void prog_to_file(){
	ofstream fil;
	fil.open("Employees.txt");
	if (fil.is_open())
	{
		for (int i = 0; i < num; i++)
		{
		fil<<emp[i].name<<" "<<emp[i].id<<" "<<emp[i].age<<" "<<emp[i].grade<<endl;
				}
	}
	else{
		cout<<"Error to open file................"<<endl;
	}
	fil.close();
}
