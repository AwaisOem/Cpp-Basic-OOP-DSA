#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int maxrow=10;
string EmpName[maxrow]={};
string EmpID[maxrow]={};
void openFile(){
	
	string line;
	ifstream myfile;
	myfile.open("employee.txt");
	if(myfile.is_open()){
		int x=0;
		while(getline(myfile,line)){
			
			int l=line.length();
			EmpID[x]=line.substr(0,3);
			EmpName[x]=line.substr(4,l-4);
			x++;
		}
	}
		else
		{
			cout<<"Enable to open the file ! "<<endl;
		}
	
}


void AddRecord(){
	char name[50];
	char empno[5];
	
	cin.ignore();
	 
	cout<<"Employee ID  ";
	cin.getline(empno,5);
	cout<<"Employee Name  ";
	cin.getline(name,50);
	for(int x=0;x<maxrow; x++){
		
		if(EmpID[x]=="\0"){
			EmpID[x]=empno;
			EmpName[x]=name;
			
			break;
		}
	}
	cout<<"Press enter to continue......"<<endl;
	cin.ignore();
}

void ListRecord()
{  
	system ("ClS");
	cout<<"Current Record(s) "<<endl;
	cout<<"======================================"<<endl;
	int counter =0;
	
	cout<<" No.   |    ID     |       NAME    "<<endl<<"-------------------------------------------------\n";
	for(int x=0;x<maxrow;x++){
		if(EmpID[x] !="\0"){
			
			counter++;
			cout<<" "<<counter <<"        "<< EmpID[x]<<"               "<<EmpName[x]<<endl;
			}
	}	
	
	
	if(counter==0)
	{
		
		cout<<"No Record found! "<<endl;
	}
	
	cout<<"======================================="<<endl;
	cout<<"Press enter to continue......"<<endl;
	cin.get();
	cin.ignore();
}

void SearchRecord(string search)
{
	
	system("CLS");
	cout<<"Current Record(s) "<<endl;
	cout<<"======================================="<<endl;
	int counter=0;
	for(int x=0;x<maxrow;x++){
		
		if(EmpID[x] ==search){
			
			counter++;
			cout<<" "<<counter <<"        "<< EmpID[x]<<"               "<<EmpName[x]<<endl;
			break;
			}
			
	}
	if(counter==0){
		cout<<"No Record Found! "<<endl;
	}	
	
	cout<<"===================================="<<endl;
	cout<<"Press enter to continue......"<<endl;
	cin.ignore();
}

void UpdateRecord(string search){
	string name;
	string empo;
	int counter =0;
	for(int x=0; x< maxrow; x++){
		
		if(EmpID[x]==search){
			counter++;
			
			cout<<"Employee Name  ";
			getline(cin,name);
			
			EmpName[x]=name;
			
			cout<<"Update successfull ! "<<endl;
			break;
			
		}
		
	}
	
	if (counter==0){
		cout<<" ID Does not exist !"<<endl;
		
	}
    cout<<"Press Enter to Continue......"<<endl;
    cin.ignore();
	
}


void DeleteRecord(string search){

	
	int counter =0;
	
	for(int x=0; x< maxrow; x++){
		
		if(EmpID[x]==search){
			counter++;
			
			EmpName[x]="";
			EmpID[x]="";
			
			cout<<"successfully Deleted ! "<<endl;
			break;
			
		}
		
	}
	
	
	if(counter==0){
		
		cout<<"ID Number does not exist ";
	}
	cout<<endl;
	cout<<"Press enter to continue......"<<endl;
	cin.ignore();
	
}

void SaveToFile(){
	
	ofstream myfile;
	myfile.open("student.txt");
	
	for(int x=0; x<maxrow;x++){
		
		if (EmpID[x]=="\0"){
			
			break;
		}
		else{
			myfile<<EmpID[x] +"," + EmpName[x]<<endl;
		}
	}
	
}
int main(int argc, char** argv) {
	std::cout<<"MENU\n";
	int option;
	string empID;
	system("CLS");
	openFile();
	do{
	
	cout<<"1- Create Record "<<endl;
	cout<<"2- Update Record "<<endl;
	cout<<"3- Delete Record "<<endl;
	cout<<"4- Search Record "<<endl;
	cout<<"5- Display all Record "<<endl;
	cout<<"6- Exit and save to Textfile "<<endl;
	cout<<"===================================="<<endl;
	cout<<"Select option  >>  ";
	cin>>option;
	switch (option)
	{
		case 1:AddRecord();
		system ("CLS");
		break;
		case 2: 
		      
		      cout<<"Search by ID  >>";
              cin.ignore();
		      getline(cin, empID);
		      UpdateRecord(empID);
		      system("CLS");
		      break;
		      
		case 3:
			  cout<<"Delete by ID  >>";
			  cin.ignore();
			  getline(cin,empID);
			  DeleteRecord(empID);
			  system("CLS");
			  break;
		
		case 4: 
		      cin.ignore();
		      cout<<"Search by ID  >>";
		      getline(cin, empID);
		      SearchRecord(empID);
            system("cls");

		      break;
		      
		case 5:ListRecord();
		system("cls");
		break;
	}
	
	
}while(option !=6);
SaveToFile();
cout<<"Exit ........Saving to File  !"<<endl;
	return 0;
}