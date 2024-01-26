#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct subject
{
  
};
struct student
{
	string name;
	int roll_no;
	int math_marks;
    int urdu_marks;
    int english_marks;	
};
static int counter=0;
int main()
{	int option;
	int opt;
	int i,ch,n=1;	
	ofstream out;
	ifstream in;
		cout<< "\t\t\t\t::::::::::::::::::::::::::::::::::::::::::"<<endl;    
	cout<<"\t\t\t\t EXAMINTION MANAGEMENT SYSTEM"<<endl;
	cout<<"\t\t\t\t::::::::::::::::::::::::::::::::::::::::::\n\n\n";;
	student s[100];

in.open("student.txt");                      // reading data from file

while(in>>s[counter].name>>s[counter].roll_no>>s[counter].math_marks>>s[counter].urdu_marks>>s[counter].english_marks)
{
	counter++;
}

in.close();


	
	cout<<" Press the number from following to from action accordingly \n\n";
		cout<<"1)> Manage data. \n2)> Make a Search. \n3)> Generate Reports.\n4)> Exit.\n\n";

	cout<<" Your choice :";
	cin>>option;
	if(option==1)
	{
		cout<<"What would you like to do ? press alphabet accordingly \n\n";
		cout<<"1)> Add data\n2)> Update data\n3)> Delete\n4)> Display\n5)> Exit\n\n";
		cin>>opt;
		if(opt==1)
		{
			cout<<"Enter the name and IDs of students to be added \n\n"; 
	do
	{
		cout<<n<<"Name : ";
		cin>>s[counter].name;

		cout<<n<<"Roll no : ";
		cin>>s[counter].roll_no;
		
		cout<<"Math Marks:";
		cin>>s[counter].math_marks;
		
		cout<<"Urdu Marks:";
		cin>>s[counter].urdu_marks;
		
		cout<<"English Marks:";
		cin>>s[counter].english_marks;
		
		counter++;
		cout<<"press 1 to continue otherwise press 0 : ";
		cin>>ch;
	}
	while(ch==1 && counter!=100);
	
	out.open("student.txt");
	for(int i=0;i<counter;i++)
	{
		
			out<<s[i].name<<" "<<s[i].roll_no<<" "<<s[i].math_marks<<" "<<s[i].urdu_marks<<" "<<s[i].english_marks;
	
	}
	out.close();
}

   else if(opt==2)
   {
   	int roln,i;
   	cout<<"enter the rollno. of student :\n ";
cin>>roln;

for(i=0;i<counter;i++)
{
if(s[i].roll_no==roln)	    
   {
   	break;
 }
   }
   if(i==counter)
   {
   	cout<<"\nNot found!";
   	
   }
   else
   {
   	cout<<"Update the data of that person: ";
   	cout<<"\n Name : ";
		cin>>s[i].name;

		cout<<n<<"Roll no : ";
		cin>>s[i].roll_no;
		
		cout<<"Math Marks:";
		cin>>s[i].math_marks;
		
		cout<<"Urdu Marks:";
		cin>>s[i].urdu_marks;
		
		cout<<"English Marks:";
		cin>>s[i].english_marks;
 
   }
   out.open("student.txt");
	for(int i=0;i<counter;i++)
	{
		
			out<<s[i].name<<" "<<s[i].roll_no<<" "<<s[i].math_marks<<" "<<s[i].urdu_marks<<" "<<s[i].english_marks;
	
	}
	out.close();
 
}
   else if(opt==3)
   {
   	cout<<"enter the roll number of student to be deleted : ";
   	int rol;
	   cin>>rol;
   	for(i=0;i<counter;i++)
	   {
	   	if(rol==s[i].roll_no)
		   break;
	   }
   if(i==counter)
   {
   cout<<"you have entered invalid roll number \n";
}
   else
   {
   for(int j=i;j<counter;j++)
   {
   	s[j].name=s[j+1].name;
   	s[j].roll_no=s[j+1].roll_no;
   	s[j].math_marks=s[j+1].math_marks;
	   s[j].urdu_marks=s[j+1].urdu_marks;
	   s[j].english_marks=s[j+1].english_marks;
   }
   counter--;
   out.open("student.txt");
	for(int i=0;i<counter;i++)
	{
		
			out<<s[i].name<<" "<<s[i].roll_no<<" "<<s[i].math_marks<<" "<<s[i].urdu_marks<<" "<<s[i].english_marks;
	
	}
	out.close();
   }
}
else if(opt==4)
{
   for(int i=0;i<counter;i++)
   {
   	cout<<"\n\nName: "<<s[i].name;
   	cout<<"\nRoll no: "<<s[i].roll_no;
   	cout<<"\nMath Marks: "<<s[i].math_marks;
   	cout<<"\nUrdu Marks: "<<s[i].urdu_marks;
   	cout<<"\nEnglish Marks: "<<s[i].english_marks;
   }
}
else if(opt==5)
{
	cout<<"\nExit!";
}
else
{
	cout<<"\nWrong Option!";
}
}
else if(option==2)
{
	string str;
	int i,n,opt;
	cout<<"\n Search the student Through \n 1) Name \n 2) Roll no \n select an option: ";
	cin>>opt;
	if(opt==1)
	{
		cout<<"\nEnter the roll no of student: ";
		cin>>n;
		for(i=0;i<counter;i++)
	   {
	   	if(n==s[i].roll_no)
		   break;
	   }
   if(i==counter)
   {
   cout<<"you have entered invalid roll no \n";
}
   else
   {
   	cout<<"\n Founded!";
   	cout<<"\nName: "<<s[i].name;
   	cout<<"\nRoll no: "<<s[i].roll_no;
   	cout<<"\nMath Marks: "<<s[i].math_marks;
   	cout<<"\nUrdu Marks: "<<s[i].urdu_marks;
   	cout<<"\nEnslish Marks: "<<s[i].english_marks;
   }
	}
	else if(opt==2)
	{
	cout<<"\nEnter the name of student: ";
		cin>>str;
		for(i=0;i<counter;i++)
	   {
	   	if(str==s[i].name)
		   break;
	   }
   if(i==counter)
   {
   cout<<"you have entered invalid name number \n";
}
   else
   {
   	cout<<"\n Founded!";
   	cout<<"\nName: "<<s[i].name;
   	cout<<"\nRoll no: "<<s[i].roll_no;
   	cout<<"\nMath Marks: "<<s[i].math_marks;
   	cout<<"\nUrdu Marks: "<<s[i].urdu_marks;
   	cout<<"\nEnslish Marks: "<<s[i].english_marks;
   }	
	}
	else
	{
		cout<<"\nInvalid option!";
	}
}
else if(option==3)
{
	
}
else if(option==4)
{
	cout<<"\nExit!";
}
   
   }

