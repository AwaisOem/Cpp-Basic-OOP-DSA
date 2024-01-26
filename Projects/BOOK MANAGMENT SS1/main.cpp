#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int u=0;
struct st{
    int b_id;
    char author_name[20];
    char book_name[20];
};
struct bs{
    void customer_panel();
    void control_panel();
    void add_book();
    void display_book();
    void check_book();
    void update_book();
    void delete_book();
    void bought();
    void retail();
    void aup_book();
    void up_book();
};
void bs::customer_panel(){
    cout<<"\n\n 1. Display books";
    cout<<"\n 2. Check specific book";
    cout<<"\n 3. Buy Book";
    cout<<"\n 4. Upcoming Books";
    cout<<"\n 5. Management Panel";
    cout<<"\n 6. Exit";
    cout<<"\n\n Enter choice : ";
}
void bs::control_panel(){
    system("cls");
    cout<<"\n\t\t\t   ==========================================================\n";
    cout<<"\t\t\t    **WELCOME TO BETA BOOK-SHOPE Management PANEL**\n";
    cout<<"\t\t\t   ==========================================================\n";
    cout<<"\n\n 1. Add book";
    cout<<"\n 2. Display books";
    cout<<"\n 3. Check specific book";
    cout<<"\n 4. Update book";
    cout<<"\n 5. Delete book";
    cout<<"\n 6. Retailing Details";
    cout<<"\n 7. Back to Customer Panel";
    cout<<"\n 8. Add Up-Coming Books";
    cout<<"\n 9. Exit";
    cout<<"\n\n Enter choice : ";
}
void bs::add_book(){
    system("cls");
    int no_of_books,b_id,price;
    char author_name[20],book_name[20];
    fstream file("data.txt",ios::out|ios::app);
    cout<<"\n\n Book Id : ";
    cin>>b_id;
    cout<<"\n Book Name : ";
    cin.ignore();
    cin.get(book_name,20);
    cout<<"\n Author name : ";
    cin.ignore();
    cin.get(author_name,20);
    cout<<"\n No of books : ";
    cin>>no_of_books;
    cout<<"\n Price of one book : ";
    cin>>price;
    file<<b_id<<" "<<book_name<<" "<<author_name<<" "<<no_of_books<<" "<<price<<endl;
    file.close();
}
void bs::display_book(){
    system("cls");
    int no_of_books,b_id,price;
    char author_name[20],book_name[20];
    ifstream file("data.txt");
    file>>b_id>>book_name>>author_name>>no_of_books>>price;
    if(!file)
        cout<<"\n\n\t\tFile opening error...";
    else{
            cout<<"\n\t\t\t\tShow ALL Books";
    cout<<"\n\n\tId no\tBook name\tAuthor name\tNo of Copies\tPrice of one book"<<endl;
    while(!file.eof())
    {
        cout<<"\n\t"<<b_id<<"\t"<<book_name<<"\t\t"<<author_name<<"\t\t"<<no_of_books<<"\t\t"<<price<<endl;
        file>>b_id>>book_name>>author_name>>no_of_books>>price;
    }}
    file.close();
}
void bs::check_book(){
    system("cls");
    int no_of_books,b_id,b_idd,price,count=0;
    char author_name[20],book_name[20];
    ifstream file("data.txt");
    file>>b_id>>book_name>>author_name>>no_of_books>>price;
    if(!file)
        cout<<"\n\n\tFile Opening Error...";
        else{
                cout<<"\n\tBook ID : ";
    cin>>b_idd;
    while(!file.eof())
    {
        if(b_idd==b_id)
            {system("cls");
            cout<<"\n\n\t\t\t\tCheck Specific Book";
            cout<<"\n\n\tId no\tBook name\tAuthor name\tNo of Copies\tPrice of one book"<<endl;
            cout<<"\n\t"<<b_id<<"\t"<<book_name<<"\t\t"<<author_name<<"\t\t"<<no_of_books<<"\t\t"<<price<<endl;
            count++;
            break;
        }
        file>>b_id>>book_name>>author_name>>no_of_books>>price;
    }
    if(count==0)
    cout<<"\n\tBook not found";
        }
    file.close();
}
void bs::update_book(){
    system("cls");
    int no_of_books,b_id,b_idd,price,price1,no_of_books1,count=0;
    char author_name[20],book_name[20],author_name1[20],book_name1[20];
    fstream file("data.txt",ios::in);
    file>>b_id>>book_name>>author_name>>no_of_books>>price;
    if(!file)
        cout<<"\n\n\tFile Opening Error...";
        else{
                cout<<"\n\n\t\t\tUpdate Book Record!";
    cout<<"\n\n\t\tBook ID : ";
    cin>>b_idd;
                fstream file1("data.txt",ios::out);
    while(!file.eof())
    {
        if(b_idd==b_id)
            {system("cls");
            cout<<"\n\n\t\t\tUpdate Book Record!";
    cout<<"\n New book Name : ";
    cin.ignore();
    cin.get(book_name1,20);
    cout<<"\n Author name : ";
    cin.ignore();
    cin.get(author_name1,20);
    cout<<"\n No of books : ";
    cin>>no_of_books1;
    cout<<"\n Price of one bookv : ";
    cin>>price1;
    file1<<b_id<<" "<<book_name1<<" "<<author_name1<<" "<<no_of_books1<<" "<<price1<<endl;
    count++;
        }else
        file1<<b_id<<" "<<book_name<<" "<<author_name<<" "<<no_of_books<<" "<<price<<endl;
        file>>b_id>>book_name>>author_name>>no_of_books>>price;
    }
    if(count==0)
    cout<<"\n\n\t\tBook Id not found!";
    file1.close();
    file.close();
        }
}
void bs::delete_book(){
    system("cls");
    int no_of_books,b_id,b_idd,price,count=0;
    char author_name[20],book_name[20];
    fstream file("data.txt",ios::in);
    file>>b_id>>book_name>>author_name>>no_of_books>>price;
    if(!file)
        cout<<"\n\n\tFile Opening Error...";
        else{
                cout<<"\n\n\t\t\tDelete Book Record!";
    cout<<"\n\n\t\tBook ID : ";
    cin>>b_idd;
                fstream file1("data.txt",ios::out);
    while(!file.eof())
    {
        if(b_idd==b_id)
            {system("cls");
            cout<<"\n\n\t\t\tUpdated Book Record!";
            cout<<"\n\n\t\t\tOne Book is Deleted Successfully.....";
    count++;
        }
        else
        file1<<b_id<<" "<<book_name<<" "<<author_name<<" "<<no_of_books<<" "<<price<<endl;
        file>>b_id>>book_name>>author_name>>no_of_books>>price;
    }
    if(count==0)
    cout<<"\n\n\t\tBook Id not found!...";
    file1.close();
    file.close();
        }
}
void bs::bought(){

    system("cls");
    int no_of_books,no_of_books1,price,price1,b_id,b_idd,count=0,n;
    char author_name[20],book_name[20],customer_name[20];
    cout<<"\n\n\t\tEnter Your name:";
    cin.ignore();
    cin.get(customer_name,20);
    ifstream file("data.txt");
    file>>b_id>>book_name>>author_name>>no_of_books>>price;
    if(!file)
        cout<<"\n\n\tFile Opening Error...";
        else{
                cout<<"\n\tBook ID : ";
    cin>>b_idd;
    while(!file.eof())
    {
        if(b_idd==b_id)
            {system("cls");
            cout<<"\n\n\t\t\t\tBuy Book";
            cout<<"\n\n\tId no\tBook name\tAuthor name\tNo of Copies\tPrice of one book"<<endl;
            cout<<"\n\t"<<b_id<<"\t"<<book_name<<"\t\t"<<author_name<<"\t\t"<<no_of_books<<"\t\t"<<price<<endl;
            count++;
            break;
        }
        file>>b_id>>book_name>>author_name>>no_of_books>>price;
    }
    if(count==0)
    cout<<"\n\tBook not found!";
    else
    {cout<<"\n\n\t\tEnter number of books to bought:";
    cin>>n;
    fstream file2("retail.txt",ios::out);
    fstream file1("data.txt",ios::out);
    while(!file.eof())
    {
    if(b_idd==b_id)
        {if(no_of_books>0&&n<=no_of_books)
            {system("cls");
    no_of_books1=no_of_books-n;
    cout<<"\n\n\t\tBooks bought:";
    cout<<"\n\n\tId no\tBook name\tAuthor name\tNo of Copies\tPrice of one book"<<endl;
    cout<<"\n\t"<<b_id<<"\t"<<book_name<<"\t\t"<<author_name<<"\t\t"<<n<<"\t\t"<<price*n<<endl;
    file1<<b_id<<" "<<book_name<<" "<<author_name<<" "<<no_of_books1<<" "<<price<<endl;
    file2<<customer_name<<" "<<b_id<<" "<<book_name<<" "<<author_name<<" "<<n<<" "<<price*n<<endl;}
    else
    {cout<<"\n\n\t\t\tStock is not available!";
    file1<<b_id<<" "<<book_name<<" "<<author_name<<" "<<no_of_books<<" "<<price<<endl;
    count++;}}
        else
        file1<<b_id<<" "<<book_name<<" "<<author_name<<" "<<no_of_books<<" "<<price<<endl;
        file>>b_id>>book_name>>author_name>>no_of_books>>price;
    }
    file.close();
    file1.close();
        }
}
}
void bs::retail(){
    system("cls");
    int no_of_books,b_id,price;
    char author_name[20],book_name[20],customer_name[20];
    ifstream file("retail.txt");
    file>>customer_name>>b_id>>book_name>>author_name>>no_of_books>>price;
    if(!file)
        cout<<"\n\n\t\tFile opening error...";
    else{
            cout<<"\n\t\t\t\tShow ALL Sold Books";
    cout<<"\n\n\tCustomer Name\tId no\tBook name\tAuthor name\tNo of Copies\tTotal Price"<<endl;
    while(!file.eof())
    {
        cout<<"\n\t"<<customer_name<<"\t\t"<<b_id<<"\t"<<book_name<<"\t\t"<<author_name<<"\t\t"<<no_of_books<<"\t\t"<<price<<endl;
        file>>customer_name>>b_id>>book_name>>author_name>>no_of_books>>price;
    }}
    file.close();
}
void bs::aup_book(){
    st a[500];
    system("cls");
    fstream file("up.txt",ios::out|ios::app);
    cout<<"\n\n Book Id : ";
    cin>>a[u].b_id;
    cout<<"\n Book Name : ";
    cin.ignore();
    cin.get(a[u].book_name,20);
    cout<<"\n Author name : ";
    cin.ignore();
    cin.get(a[u].author_name,20);
    file<<a[u].b_id<<" "<<a[u].book_name<<" "<<a[u].author_name<<endl;
    file.close();
}
void bs::up_book(){
    system("cls");
    int b_id;
    char author_name[20],book_name[20];
    ifstream file("up.txt");
    file>>b_id>>book_name>>author_name;
    if(!file)
        cout<<"\n\n\t\tFile opening error...";
    else{
            cout<<"\n\t\t\t\tUp-Coming Books";
    cout<<"\n\n\tId no\tBook name\tAuthor name"<<endl;
    while(!file.eof())
    {
        cout<<"\n\t"<<b_id<<"\t"<<book_name<<"\t\t"<<author_name<<endl;
        file>>b_id>>book_name>>author_name;
    }}
    file.close();
}
int main(){
    int choice,choice1;
    string p="awais123";
    string p1="";
    bs s;
    char x,z;
    b:
    system("cls");
    cout<<"\n\t\t\t =============================================================\n";
    cout<<"\t\t\t    **WELCOME TO BETA BOOK-SHOPE Customer Panel**\n";
    cout<<"\t\t\t =============================================================\n";
    s.customer_panel();
    cin>>choice;
    switch(choice)
    {
    case 1:
        s.display_book();
        break;
    case 2:
        s.check_book();
        break;
    case 3:
        s.bought();
        break;
    case 4:
        s.up_book();
        break;
    case 5:
         a:
        
        char ch;
    cout<<"\n\n\t\tEnter a Password to access Mangement Panel:\n\n\t\t(Hint:Password length is 8):";
    ch = _getch();
   while(ch != 13){
      p1.push_back(ch);
      cout << '*';
      ch = _getch();
   }
    if(p1=="arham123")
        goto b;
    else if(p==p1)
    {p:
    s.control_panel();
    cin>>choice1;
    switch(choice1)
    {
        case 1:
        do{
        s.add_book();
        cout<<"\n\n Do You Want to Add another Book (y,n) : ";
        cin>>x;
        }while(x == 'y'||x=='Y');
        case 2:
        s.display_book();
        break;
        case 3:
        s.check_book();
        break;
        case 4:
        s.update_book();
        break;
        case 5:
        s.delete_book();
        break;
        case 6:
        s.retail();
        break;
        case 7:
        goto b;
        break;
        case 8:
        do{
        s.aup_book();
        cout<<"\n\n Do You Want to Add another Upcoming Book (y,n) : ";
        cin>>z;
         u++;
        }while(z=='y'||x=='Y');
        break;
        case 9:
        exit(0);
        break;
        default:
        cout<<"\n\n Invalid Choice";
    }
    getch();
    goto p;}
    else
        {cout<<"\n\n\t\tInvalid Password Press Enter to Try Again!...\n\n\t\tIf You Want to go to Customer Panel Press arham123 in Password";
    getch();
    p1="";
        goto a;}
        break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"Invalid choice!";
    }
getch();
            goto b;
}