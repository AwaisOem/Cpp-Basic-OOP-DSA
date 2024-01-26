 # include <iostream>
 # include <fstream>
 using namespace std;
 # define max 20
 struct patient
 {
 	string name;
 	long int id;
 	int age;
 	string disease;
 };
 int num=0;
 patient ptt[max];
   void mainmenu ();
   void make ();
   void insert();
   void displaydelete(int i);
   void  report();
   void searchrecordbyid();
   void searchrecordbyname();
   void deleteindex(int i);
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
 	cout<<"\n------------------------Hospital MANAGEMENT SYSTEM----------------------------\n\n\n";
 	cout<<"                      "<<"SELECT OPTION FROMM THE FOLLOWING\n\n\n";
 	cout<<"------------------------------------------------------------------------------\n\n";
 	cout<<" 1 ==> ADD pttLOYYEE DETAILS\n\n";
 	cout<<" 2 ==> INSERT DATA OF NEW patient TO EXISTING hospital RECORD\n\n";
 	cout<<" 3 ==> DELETE DATA OF patient FROM EXISTING RECORD\n\n";
 	cout<<" 4 ==> SEARCH AN patient BY HIS ID\n\n";
 	cout<<" 5 ==> SEARCH AN patient BY HIS NAME\n\n";
 	cout<<" 6 ==> REPORT OF hospital\n\n";
 	cout<<" 7 ==> EXIT THE PROGRAM\n\n";
 	int op;
 	cin>>op;
 	if(op==1)
 	{
 		make ();
	 }
	else if(op==2){
		insert();
	 }
	else if(op==3){
	 	deleterecord();
	 }
	else if(op==4){
	 	searchrecordbyid();
	 }
	else if(op==5){
		searchrecordbyname();
	}
	 else if(op==6){
	 	report();
	 }
	 else if (op==7){
	 	return;
	 }
	 else {
	 	cout<<"\n\n INVALID OPTION \n VALID OPTIONS ARE 1,2,3,4,5\n";
	 }
	  mainmenu();
 }

  void make ()
 { 
 	cout<<"add patient details to the table\n\n";
 	cout<<"maximum number of enteries will be "<<max<<endl;
 	cout<<"\n enter number of entries required\n\n ";
 	cin>>num;
 	cout<<"\n enter following data\n\n";
 	for(int i=0; i<num; i++)
 {
	cout<<"name\n";
     cin>>ptt[i].name;
 	cout<<"patient id\n";
 	cin>>ptt[i].id;
 	cout<<"age of patient\n";
 	cin>>ptt[i].age;
 	cout<<"disease of patient\n";
 	cin>>ptt[i].disease;
 }
  mainmenu();
 }
void insert()
{

	if(num<max){
		int i=num;
		num++;
				cout<<"name\n";
     cin>>ptt[i].name;
 	cout<<"patient id\n";
 	cin>>ptt[i].id;
 	cout<<"age of patient\n";
 	cin>>ptt[i].age;
 	cout<<"disease of patient\n";
 	cin>>ptt[i].disease;
	}
else { 
cout<<"patient table full\n";

}
mainmenu();
}
void deleterecord()
{
	cout<<"enter the patient id to delete record\n\n";
	int id;
	cin>>id;
	for(int i=0;i<num;i++){
	{
	if(ptt[i].id==id);
		deleteindex(i);
	num--;
	break;

}
	}
mainmenu();
}
void deleteindex(int i)
{
	for(int j=i;j<num-1;j++)
	{
		ptt[j].name=ptt[j+1].name;
    	ptt[j].id=ptt[j+1].id;
    	ptt[j].disease=ptt[j+1].disease;
    	ptt[j].age=ptt[j+1].age;
	}
	return;
}
void displaydelete(int i)
{   	cout<<"name\n"<<ptt[i].name;
 	cout<<"\npatient id\n"<<ptt[i].id;
 	cout<<"\nage of patient\n"<<ptt[i].age;
 	cout<<"\ndisease of patient\n"<<ptt[i].disease;
 	return;
}
void searchrecordbyid()
{
	cout<<"\nenter the patient id to search record\n\n";
	int id;
	cin>>id;
	int x=-1;
	for(int i=0;i<num;i++){
		if (ptt[i].id==id){
				cout<<"                         YOUR RECORD FOUND\n\n";
			cout<<"name = "<<ptt[i].name<<endl;
			cout<<"id = "<<ptt[i].id<<endl;
			cout<<"age = "<<ptt[i].age<<endl;
		    cout<<"disease = "<<ptt[i].disease<<endl;
		    x=0;
									
		}
	}
		if(x==-1)
	cout<<"                                      RECORD NOT FOUND\n";
	mainmenu();
}

void searchrecordbyname()
{
	cout<<"\nenter the patient name to search record\n\n";
	string name;
	cin>>name;
	int x=-1;
	for(int i=0;i<num;i++)
	{
		if (ptt[i].name==name)
	
		{	cout<<"                         YOUR RECORD FOUND\n\n";
			cout<<"name = "<<ptt[i].name<<endl;
			cout<<"id = "<<ptt[i].id<<endl;
			cout<<"age = "<<ptt[i].age<<endl;
		    cout<<"disease = "<<ptt[i].disease<<endl;
		    	x=0;
			}
	

	}	
	if(x==-1)
	cout<<"                                  RECORD NOT FOUND\n";

	mainmenu();
}
void  report()
{                

cout<<"record of total patients working in the company\n\n";
for(int i=0;i<num;i++)
{
		cout<<"name = "<<ptt[i].name<<endl;
			cout<<"id = "<<ptt[i].id<<endl;
			cout<<"age = "<<ptt[i].age<<endl;
		    cout<<"disease = "<<ptt[i].disease<<endl;
		    cout<<"\n\n";
}

            mainmenu(); 
}

void file_to_prog(){
	ifstream fil;
	fil.open("patients.txt");
	int i = 0;
	if (fil.is_open())
	{
		while (!fil.eof())
		{
		fil>>ptt[i].name>>ptt[i].id>>ptt[i].age>>ptt[i].disease;
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
	fil.open("patients.txt");
	if (fil.is_open())
	{
		for (int i = 0; i < num; i++)
		{
		fil<<ptt[i].name<<" "<<ptt[i].id<<" "<<ptt[i].age<<" "<<ptt[i].disease<<endl;
				}
	}
	else{
		cout<<"Error to open file................"<<endl;
	}
	fil.close();
}
