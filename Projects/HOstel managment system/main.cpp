# include <iostream>
# include <fstream>
 using namespace std;
 # define max 20
 struct hostelites
 {
 	string name;
 	long int id;
 	int room;
 	int rent;
 };
 int num=0;
 hostelites hst[max];
   void mainmenu ();
   void make ();
   void insert();
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
 	cout<<"\n------------------------Hostel MANAGMENT SYSTEM----------------------------\n\n\n";
 	cout<<"                      "<<"SELECT OPTION FROMM THE FOLLOWING\n\n\n";
 	cout<<"------------------------------------------------------------------------------\n\n";
 	cout<<" 1 ==> ADD hostelite DETAILS\n\n";
 	cout<<" 2 ==> INSERT DATA OF NEW hostelite TO EXISTING hostel RECORD\n\n";
 	cout<<" 3 ==> DELETE DATA OF hostelite FROM EXISTING RECORD\n\n";
 	cout<<" 4 ==> SEARCH AN hostelite BY HIS ID\n\n";
 	cout<<" 5 ==> SEARCH AN hostelite BY HIS NAME\n\n";
 	cout<<" 6 ==> REPORT OF hostel\n\n";
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
	 	cout<<"\n\n INVALID OPTION \n VALID OPTIONS ARE 1,2,3,4,5,6\n";
	 }
	  mainmenu();
 }

  void make ()
 { 
 	cout<<"add hostelite details to the table\n\n";
 	cout<<"maximum number of enteries will be  "<<max<<endl;
 	cout<<"\n enter number of entries required\n\n ";
 	cin>>num;
 	cout<<"\n enter following data\n\n";
 	for(int i=0; i<num; i++)
 {
	cout<<"name\n";
     cin>>hst[i].name;
 	cout<<"hostelite id\n";
 	cin>>hst[i].id;
 	cout<<"room of hostelite\n";
 	cin>>hst[i].room;
 	cout<<"rent of hostelite\n";
 	cin>>hst[i].rent;
 }
  mainmenu();
 }
void insert()
{

	if(num<max){
		int i=num;
		num++;
	cout<<"name\n";
    cin>>hst[i].name;
 	cout<<"hostelite id\n";
 	cin>>hst[i].id;
 	cout<<"room of hostelite\n";
 	cin>>hst[i].room;
 	cout<<"rent of hostelite\n";
 	cin>>hst[i].rent;
	}
else { 
cout<<"hostelite table full\n";

}
mainmenu();
}
void deleterecord()
{
	cout<<"enter the hostelite id to delete record\n\n";
	int id;
	cin>>id;
	for(int i=0;i<num;i++){
	{
	if(hst[i].id==id);
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
		hst[j]=hst[j+1];
    	}
	return;
}

void searchrecordbyid()
{
	cout<<"\nenter the hostelite id to search record\n\n";
	int id;
	cin>>id;
	int x=-1;
	for(int i=0;i<num;i++){
		if (hst[i].id==id){
				cout<<"                         YOUR RECORD FOUND\n\n";
			cout<<"name = "<<hst[i].name<<endl;
			cout<<"id = "<<hst[i].id<<endl;
			cout<<"room = "<<hst[i].room<<endl;
		    cout<<"rent = "<<hst[i].rent<<endl;
		    x=0;
									
		}
	}
		if(x==-1)
	cout<<"                                      RECORD NOT FOUND\n";
	mainmenu();
}
void searchrecordbyname()
{
	cout<<"\nenter the hostelite name to search record\n\n";
	string name;
	cin>>name;
	int x=-1;
	for(int i=0;i<num;i++)
	{
		if (hst[i].name==name)
	
		{	cout<<"                         YOUR RECORD FOUND\n\n";
			cout<<"name = "<<hst[i].name<<endl;
			cout<<"id = "<<hst[i].id<<endl;
			cout<<"room = "<<hst[i].room<<endl;
		    cout<<"rent = "<<hst[i].rent<<endl;
		    	x=0;
			}
	

	}	
	if(x==-1)
	cout<<"                                  RECORD NOT FOUND\n";

	mainmenu();
}
void  report()
{                

cout<<"record of total hostelite staying in the hostel\n\n";
for(int i=0;i<num;i++)
{
		cout<<"name = "<<hst[i].name<<endl;
			cout<<"id = "<<hst[i].id<<endl;
			cout<<"room = "<<hst[i].room<<endl;
		    cout<<"rent = "<<hst[i].rent<<endl;
		    cout<<"\n\n";
}

            mainmenu(); 
}

void file_to_prog(){
	ifstream fil;
	fil.open("hostelites.txt");
	int i = 0;
	if (fil.is_open())
	{
		while (!fil.eof())
		{
		fil>>hst[i].name>>hst[i].id>>hst[i].room>>hst[i].rent;
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
	fil.open("hostelites.txt");
	if (fil.is_open())
	{
		for (int i = 0; i < num; i++)
		{
		fil<<hst[i].name<<" "<<hst[i].id<<" "<<hst[i].room<<" "<<hst[i].rent<<endl;
				}
		
	}
	else{
		cout<<"Error to open file................"<<endl;
	}
	fil.close();
}
