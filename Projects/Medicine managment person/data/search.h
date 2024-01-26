int searchbyname(){
    system("cls"); 
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Medicine By Name."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------";
cout<<"\n\n";
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"Enter name of Medicine:   ";
string name;
getline(cin,name);
int flag = -1;
for (int i = 0; i <count_medicine; i++)
{
    if(medicine[i].name == name){
        flag = i;break;
    }
}
if (flag!=-1)
{ color(14);
    cout<<left<<setw(20)<<"Detail of Medicine:"<<endl;
    cout<<left<<setw(20)<<"Medicine NAME:"<<medicine[flag].name<<endl;
    cout<<left<<setw(20)<<"Medicine code:"<<medicine[flag].code<<endl;
    cout<<left<<setw(20)<<"Formula:"<<medicine[flag].formula<<endl;
    cout<<left<<setw(20)<<"Price:"<<medicine[flag].price<<endl;
    cout<<left<<setw(20)<<"Number of items:"<<medicine[flag].how_many<<endl;
    cout<<left<<setw(20)<<"Expiry Date:"<<medicine[flag].expiry_date.day<<"-"<<medicine[flag].expiry_date.month<<"-"<<medicine[flag].expiry_date.year<<endl;
    color(7);
    cout<<"\n\n";
}
else
{
    cout<<"Sorry,Medicine don't found in inventory"<<endl;
    cout<<"\n";
    cout<<"Do you want to add some(Y/N)?"<<endl;
    char dis;cin>>dis;
    if (dis=='y'||dis=='Y')add_medicine();
}

cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
return flag;

}






int searchbycode(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Medicine By Code."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------";
cout<<"\n\n";

cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"Enter Code of Medicine:   ";
long long code; 
cin>>code;
int flag = -1;
for (int i = 0; i <count_medicine; i++)
{
    if(medicine[i].code == code){
        flag = i;break;
    }
}
if (flag!=-1)
{color(14);
      cout<<left<<setw(20)<<"Detail of Medicine:"<<endl;
    cout<<left<<setw(20)<<"Medicine NAME:"<<medicine[flag].name<<endl;
    cout<<left<<setw(20)<<"Medicine code:"<<medicine[flag].code<<endl;
    cout<<left<<setw(20)<<"Formula:"<<medicine[flag].formula<<endl;
    cout<<left<<setw(20)<<"Price:"<<medicine[flag].price<<endl;
    cout<<left<<setw(20)<<"Number of items:"<<medicine[flag].how_many<<endl;
    cout<<left<<setw(20)<<"Expiry Date:"<<medicine[flag].expiry_date.day<<"-"<<medicine[flag].expiry_date.month<<"-"<<medicine[flag].expiry_date.year<<endl;
    color(7);
    cout<<"\n\n";
}else{
   cout<<"Sorry,Medicine don't found in inventory"<<endl;
    cout<<"\n";
    cout<<"Do you want to add some(Y/N)?"<<endl;
    char dis;cin>>dis;
    if (dis=='y'||dis=='Y')add_medicine();
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
return flag;}







int searchbyusername(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Employee By Name."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------";
cout<<"\n\n";
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"Enter Name of Employee:   ";
string name;
getline(cin,name);
int flag = -1;
for (int i = 0; i <count_employee; i++)
{
    if(employee[i].name == name){
        flag = i;break;
    }
}
if (flag!=-1)
{   color(14);
    cout<<left<<setw(20)<<"Detail of book:"<<endl;
    cout<<left<<setw(20)<<"Employee NAME:"<<employee[flag].name<<endl;
    cout<<left<<setw(20)<<"Employee ID:"<<employee[flag].id<<endl;
    cout<<left<<setw(20)<<"Mobile Number:"<<employee[flag].phone<<endl;
    cout<<left<<setw(20)<<"Home Adress :"<<employee[flag].adress<<endl;
    cout<<left<<setw(20)<<"Salary:"<<employee[flag].salary<<endl;
    cout<<left<<setw(20)<<"Timing:"<<employee[flag].timings<<endl;
    color(7);
    cout<<"\n\n";
}
else
{
    cout<<"Sorry,Employee don't found in Medicine Store"<<endl;
    cout<<"\n";
    cout<<"Do you want to add the Employee(Y/N)?"<<endl;
    char dis;cin>>dis;
    if (dis=='y'||dis=='Y')add_employee();
    
}

cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
return flag;}





int searchbyuserid(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Employee By ID."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------";
cout<<"\n\n";
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"Enter ID of Employee:   ";
string id;
cin>>id;
int flag = -1;
for (int i = 0; i <count_employee; i++)
{
    if(employee[i].id == id){
        flag = i;break;
    }
}
if (flag!=-1)
{   color(14);
    cout<<left<<setw(20)<<"Detail of book:"<<endl;
    cout<<left<<setw(20)<<"Employee NAME:"<<employee[flag].name<<endl;
    cout<<left<<setw(20)<<"Employee ID:"<<employee[flag].id<<endl;
    cout<<left<<setw(20)<<"Mobile Number:"<<employee[flag].phone<<endl;
    cout<<left<<setw(20)<<"Home Adress :"<<employee[flag].adress<<endl;
    cout<<left<<setw(20)<<"Salary:"<<employee[flag].salary<<endl;
    cout<<left<<setw(20)<<"Timing:"<<employee[flag].timings<<endl;
    color(7);
    cout<<"\n\n";
}
else
{
    cout<<"Sorry,Employee don't found in Medicine Store"<<endl;
    cout<<"\n";
    cout<<"Do you want to add the Employee(Y/N)?"<<endl;
    char dis;cin>>dis;
    if (dis=='y'||dis=='Y')add_employee();
    
}

cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
return flag;}






void searchbytiming(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Employee By Timig (Morning/Evening/Admin)."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------";
cout<<"\n\n";
// cin.get();
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"Enter Timing of User:   ";
string timings;
getline(cin,timings);
int flag = -1;
for (int i = 0; i <count_employee; i++)
{
    if(employee[i].timings== timings){
        flag = i;break;
    }
}
if (flag!=-1)
{
cout<<"---------------------------------------------------------------------------------"<<endl;
cout.flags (ios::left);
cout<<setw(30)<<"Name"<<setw(25)<<"ID"<<setw(17)<<"Phone"<<setw(9)<<"Salary"<<endl;
cout<<"---------------------------------------------------------------------------------"<<endl;

    for (int i = 0; i <count_employee; i++)
{ 
    if (employee[i].timings== timings)
    {
        color(14);
    cout.flags (ios::left);
cout<<setw(30)<<employee[i].name<<setw(20)<<employee[i].id<<setw(23)<<employee[i].phone<<setw(7)<<employee[i].salary<<endl;
        color(7);
    }
}
}
else
{
    cout<<"Sorry, "<<timings<<" Employee don't found in Store"<<endl;
}

cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
}





void display_all_medicines(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"List of Medicines in inventory."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n";
cout.flags (ios::left);
cout<<setw(30)<<"Name"<<setw(25)<<"formula"<<setw(17)<<"code"<<setw(9)<<"Price"<<setw(11)<<"Ex-Date"<<setw(9)<<"items"<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;

    for (int i = 0; i <count_medicine; i++)
{   
        color(14);
    cout.flags (ios::left);
cout<<setw(30)<<medicine[i].name<<setw(20)<<medicine[i].formula<<setw(23)<<medicine[i].code<<setw(7)<<medicine[i].price<<setw(7)<<right<<medicine[i].expiry_date.day<<"-"<<medicine[i].expiry_date.month<<"-"<<medicine[i].expiry_date.year<<endl;
        color(7);
    
}

cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cin.get();
report_menu();
}



void display_all_employees(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"List of All Employees."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n";
cout.flags (ios::left);
cout<<setw(30)<<"Name"<<setw(25)<<"ID"<<setw(17)<<"Phone"<<setw(9)<<"Salary"<<setw(9)<<"Timing"<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;

    for (int i = 0; i <count_employee; i++)
{   
        color(14);
    cout.flags (ios::left);
cout<<setw(30)<<employee[i].name<<setw(20)<<employee[i].id<<setw(23)<<employee[i].phone<<setw(7)<<employee[i].salary<<setw(7)<<employee[i].timings<<endl;
        color(7);
    
}

cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cin.get();
report_menu();
}