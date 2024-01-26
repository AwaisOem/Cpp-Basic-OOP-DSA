void sell(){
     system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Search Medicine to Buy....."<<endl;
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
if(flag!=-1){
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Do you want to buy it(Y/N)?  ";
    char dis3;
    cin>>dis3;
if(dis3=='Y' || dis3=='y'){
    cout<<"Enter your name:    ";
    string n;
    cin.ignore();
    getline(cin,n);
    cout<<"Enter number of (tablets/syrups):    ";
    short hm;
    cin>>hm;
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    color(14);
    cout<<left<<setw(15)<<"Name Of Buyer:"<<n<<endl;
    cout<<left<<setw(15)<<"Name Of Medicine:"<<medicine[flag].name<<endl;
    cout<<left<<setw(15)<<"Price of Medicine:"<<medicine[flag].price<<endl;
    cout<<left<<setw(15)<<"Numbers of Tablets:"<<hm<<endl;
    color(7);
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    sales_list[count_sales].name=medicine[flag].name;
    sales_list[count_sales].buyer_name=n;
    sales_list[count_sales].price=medicine[flag].price;
    sales_list[count_sales].how_many=hm;
    if(medicine[flag].how_many>hm){
        medicine[flag].how_many-=hm;
        count_sales++;
        cout<<"Successfull Purchase....."<<endl;
    }
    else if(medicine[flag].how_many==hm){
        for (int i = flag; i<count_medicine-1; i++)
        {
            medicine[flag]=medicine[flag+1];
        }
         count_medicine--;
        count_sales++;
        cout<<"Successfull Purchase....."<<endl;
    }
    else if(medicine[flag].how_many<hm){
        cout<<"Sorry This Medicine has short tablets......."<<endl;
        cout<<"Do you want to purchase again(Y/N)?  ";
        char dis4;
        cin>>dis4;
        if(dis4=='Y' || dis4=='y'){
            sell();
        }
    }
    }
    else{
        cout<<"Ok..............."<<endl;
    }
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Press Enter to continue..."<<endl;
    cin.get();
    cin.ignore();
    mainmenu();
}


void sell_del(){
      system("cls");
cout<<"Medicine Managment System"<<endl;
cout<<"\n";
cout<<"Sell record Delete....."<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n\n";
cout<<"Press Enter to continue..."<<endl;
cin.ignore();
cout<<"Enter buyer name to delete record:   ";
string name;
getline(cin, name);
int flag(-1);
for (int i = 0; i < count_sales; i++)
{
    if(name ==sales_list[i].buyer_name){
        flag=i;break;
    }
}

if(flag!=-1){
        cout<<"\n\n\n\n\n";

cout<<"...............................Deleting this record........................."<<endl;
    cout<<"Do you want to delete this record(Y/N)? ";
    char dis2;
    cin>>dis2;
    cout<<endl;
    if (dis2=='y'|| dis2=='Y')
    {
        for (int i = flag; i<count_sales-1; i++)
        {
            sales_list[flag]=sales_list[flag+1];
        }
        count_sales--;
        cout<<"Record Deleted......"<<endl;
    }else{
        cout<<"Ok.........."<<endl;
    }
}
else{
    cout<<"Record Can't Found....."<<endl;
}
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Press Enter to continue..."<<endl;
    cin.get();
}