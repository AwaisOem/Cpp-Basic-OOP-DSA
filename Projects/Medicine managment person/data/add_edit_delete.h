void add_medicine(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Add New Medicine (Please add required information in the appropriate fields)"<<endl;
cout<<"----------------------------------------------------------------------------------------------------------";
cout<<"\n\n";
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"Enter Code of New Medicine:   ";
long long code;
cin>>code;
int flag = -1;
for (int i = 0; i <count_medicine; i++)
{
    if(medicine[i].code == code){
        flag = i;break;
    }
}
cin.ignore();
if(flag==-1){
    string name,formula;int price;short how_many;int day,month,year;char dummy1,dummy2;
    cout<<"Medicine Name:   ";
    getline(cin,name);
    cout<<"Formula Name:   ";
    getline(cin,formula);
    cout<<"Enter Price:   ";
    cin>>price;
    cout<<"Number of Items:   ";
    cin>>how_many;
    cout<<"Expiry Date(dd-mm-yyyy):   ";
    cin>>day>>dummy1>>month>>dummy2>>year;
cout<<"\n\n\n";
    cout<<"Do you want to store this Medicine(Y/N)? ";
    char dis2;
    cin>>dis2;
    cout<<endl;
    if (dis2=='y'|| dis2=='Y')
    {
        medicine[count_medicine].name=name;
        medicine[count_medicine].formula=formula;
        medicine[count_medicine].code=code;
        medicine[count_medicine].price=price;
        medicine[count_medicine].how_many=how_many;
        medicine[count_medicine].expiry_date.day=day;
        medicine[count_medicine].expiry_date.month=month;
        medicine[count_medicine].expiry_date.year=year;
        count_medicine++;
        cout<<"Successfully Added......"<<endl;
    }else{
        cout<<"Ok.........."<<endl;
    }
    



    }else{
    cout<<"\n\nA Medicine with this code number is already added in inventory"<<endl;
    cout<<endl;
    cout<<"Do you want to increase the items(Y/N)?  ";
    char dis;
    cin>>dis;
    if (dis=='Y'||dis=='y')
    {
        cout<<"How many books you want to add in stock? ";
        int q;cin>>q;
        medicine[flag].how_many+=q;
        cout<<endl;
        cout<<"Successfully added..........."<<endl;
    }else
    {
        cout<<"Ok.........."<<endl;
    }
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Press Enter to continue..."<<endl;
cin.get();
}




void edit_medicine(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Medicine to Edit....."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n\n";
cout<<"1-Search By Name"<<endl;
cout<<"2-Search By  Code"<<endl;
cout<<"\n\n";
int flag(-1);
cout<<"Enter your choice >  ";
int choice;
cin>>choice;
switch (choice)
{
case 1:
    flag=searchbyname();
    break;
case 2:
    flag=searchbycode();
    break;
default:
    break;
}
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
if(flag!=-1){
cout<<"...............................Edit this book........................."<<endl;
   string name,formula;int price;long long code;short how_many;int day,month,year;char dummy1,dummy2;
    cout<<"Medicine Name:   ";
    getline(cin,name);
    cout<<"Formula Name:   ";
    getline(cin,formula);
    cout<<"Medicine Code:   ";
    cin>>code;
    cout<<"Enter Price:   ";
    cin>>price;
    cout<<"Number of Items:   ";
    cin>>how_many;
    cout<<"Expiry Date(dd-mm-yyyy):   ";
    cin>>day>>dummy1>>month>>dummy2>>year;
    cout<<"\n\n\n";
    cout<<"Do you want to store this Medicine(Y/N)? ";
    char dis2;
    cin>>dis2;
    cout<<endl;
    if (dis2=='y'|| dis2=='Y')
    {
        medicine[flag].name=name;
        medicine[flag].formula=formula;
        medicine[flag].code=code;
        medicine[flag].price=price;
        medicine[flag].how_many=how_many;
        medicine[flag].expiry_date.day=day;
        medicine[flag].expiry_date.month=month;
        medicine[flag].expiry_date.year=year;
        cout<<"Successfully Added......"<<endl;
    }else{
        cout<<"Ok.........."<<endl;
    }
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Press Enter to continue..."<<endl;
    cin.get();
}
void delete_medicine(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Medicine to Delete....."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n\n";

cout<<"1-Search By Name"<<endl;
cout<<"2-Search By  Code"<<endl;

cout<<"\n\n";
int flag(-1);
cout<<"Enter your choice >  ";int choice;cin>>choice;
switch (choice)
{
case 1:
    flag=searchbyname();
    break;
case 2:
    flag=searchbycode();
    break;
default:
    break;
}
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
if(flag!=-1){
        cout<<"\n\n\n\n\n";

cout<<"...............................Deleting this book........................."<<endl;
    cout<<"Do you want to delete this medicine(Y/N)? ";
    char dis2;
    cin>>dis2;
    cout<<endl;
    if (dis2=='y'|| dis2=='Y')
    {
        for (int i = flag; i<count_medicine-1; i++)
        {
            medicine[flag]=medicine[flag+1];
        }
        count_medicine--;
        cout<<"Medicine Deleted......"<<endl;
    }else{
        cout<<"Ok.........."<<endl;
    }
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Press Enter to continue..."<<endl;
    cin.get();
}
void add_employee(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Add New Employee (Please add required information in the appropriate fields)"<<endl;
cout<<"----------------------------------------------------------------------------------------------------------";
cout<<"\n\n";
cout<<"Enter national id of New Employee:   ";
string id;
cin>>id;
int flag = -1;
for (int i = 0; i <count_employee; i++)
{
    if(employee[i].id == id){
        flag = i;break;
    }
}
cin.ignore();
if(flag==-1){
    string name,timings,adress;long long phone;int salary;
    cout<<"Name:   ";
    getline(cin,name);
    cout<<"Shift of Employee(Morning/Evening):   ";
    getline(cin,timings);
    cout<<"Enter Adress of Employee:   ";
    getline(cin,adress);
    cout<<"Enter Phone Number of Employee:   ";
    cin>>phone;
    cout<<"Enter Salary of Employee:   ";
    cin>>salary;
    cout<<"\n\n\n";
    cout<<"Do you want to register this Employee(Y/N)? ";
    char dis2;
    cin>>dis2;
    cout<<endl;
    if (dis2=='y'|| dis2=='Y')
    {
        employee[count_employee].name = name;
        employee[count_employee].timings = timings;
        employee[count_employee].id = id;
        employee[count_employee].adress = adress;
        employee[count_employee].phone = phone;
        employee[count_employee].salary = salary;
        count_employee++;
        cout<<"Successfully Added......"<<endl;
    }else{
        cout<<"Ok.........."<<endl;
    }
    



    }else{
    cout<<"\n\nA Employee with this ID is already registered"<<endl;
    cout<<endl;
    cout<<"Do you want to Enter another(Y/N)?  ";
    char dis;
    cin>>dis;
    if (dis=='Y'||dis=='y')
    {
        add_employee();return;
    }else
    {
        cout<<"Ok.........."<<endl;
    }
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Press Enter to continue..."<<endl;
        cin.get();

}






void edit_employee(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Medicine to Edit....."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n\n";
cout<<"1-Search through Id"<<endl;
cout<<"2-Search through Name"<<endl;
cout<<"\n\n";
int flag(-1);
cout<<"Enter your choice >  ";int choice;cin>>choice;
switch (choice)
{
case 1:
     flag=searchbyuserid();
    break;
case 2:
    flag=searchbyusername();
    break;
default:
    break;
}
cout<<"\n\n\n";
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"\n";
if(flag!=-1){
cout<<"...............................Edit this book........................."<<endl;
    string name,timings,id,adress;long long phone;int salary;
    cout<<"Name:   ";
    getline(cin,name);
    cout<<"Enter Id of Employee:    ";
    getline(cin,id);
    cout<<"Shift of Employee(Morning/Evening/Admin):   ";
    getline(cin,timings);
    cout<<"Enter Adress of Employee(Don't use spaces):   ";
    getline(cin,adress);
    cout<<"Enter Phone Number of Employee:   ";
    cin>>phone;
    cout<<"Enter Salary of Employee:   ";
    cin>>salary;
    cout<<"\n\n\n";
   cout<<"Do you want to register this Employee(Y/N)? ";
    char dis2;
    cin>>dis2;
    cout<<endl;
    if (dis2=='y'|| dis2=='Y')
    {
        employee[flag].name = name;
        employee[flag].timings = timings;
        employee[flag].id = id;
        employee[flag].adress = adress;
        employee[flag].phone = phone;
        employee[flag].salary = salary;
        count_employee++;
        cout<<"Successfully Added......"<<endl;
    }else{
        cout<<"Ok.........."<<endl;
    }
    
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"Press Enter to continue..."<<endl;
  cin.get();
}





void delete_employee(){
    system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Employee to Delete....."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n\n";
cout<<"1-Search through Id"<<endl;
cout<<"2-Search through Name"<<endl;
cout<<"\n\n";
int flag(-1);
cout<<"Enter your choice >  ";int choice;cin>>choice;
switch (choice)
{
case 1:
     flag=searchbyuserid();
    break;
case 2:
    flag=searchbyusername();
    break;
default:
    break;
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n";
if(flag!=-1){
        cout<<"\n\n\n\n";

cout<<"...............................Deleting this User........................."<<endl;
    cout<<"Do you want to delete this User(Y/N)? ";
    char dis2;
    cin>>dis2;
    cout<<endl;
    if (dis2=='y'|| dis2=='Y')
    {
        for (int i = flag; i<count_employee-1; i++)
        {
            employee[flag]=employee[flag+1];
        }
        count_employee--;
        cout<<"Employee Deleted......"<<endl;
    }else{
        cout<<"Ok.........."<<endl;
    }
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
  
  cout<<"Press Enter to continue..."; 
   cin.get();
}

