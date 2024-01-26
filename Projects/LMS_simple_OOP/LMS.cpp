#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;
class BOOK;
class USER;
class IssueBook;
bool UserDeleter(int id);
bool BookDeleter(char isbn[]);
bool Verify()
{
    cout << "\nVerify your identity by Entering your password >>>>>>";
    string password = "";
    cin >> password;
    if (password == "mudassar")
        return true;
    else
    {
        cout << "your password is not correct....\n";
        return false;
    }
}
class BK
{
    private:
    char name[20];
    char publisher[20];
    char author[20];
    char ISBN[20];
    int number_of_copies;
    string issue_date;
    string issue_year;
    friend class BOOK;
};
class BOOK
{
private:
    BK arr[100];
    unsigned int count;
public:
    BOOK() : count(0) {}
    void prog_to_file()
    {
        ofstream out;
        out.open("BookList.txt");
        if (out.is_open())
        {
            for (int i = 0; i < count; i++)
            {
                out << arr[i].name << " " << arr[i].publisher << " "
                    << arr[i].author << " " << arr[i].ISBN << " " << arr[i].number_of_copies << " " << arr[i].issue_date << " " << arr[i].issue_year << endl;
            }
            out << EOF;
        }
        else
        {
            cout << "Sorry there is some error in opening file......\n";
        }
        out.close();
    }
    void file_to_prog()
    {
        ifstream in;
        in.open("BookList.txt");
        if (in.is_open())
        {

            int i = 0;
            while (!in.eof())
            {
                in >> arr[i].name >> arr[i].publisher >> arr[i].author >> arr[i].ISBN >> arr[i].number_of_copies >> arr[i].issue_date >> arr[i].issue_year;
                i++;
            }
            count = --i;
        }
        else
        {
            cout << "Error in opning file.....\n";
        }
    }
    void AddBook()
    {
        if (Verify())
        {
            char name[20], ISBN[20], publisher[20], author[20];
            int number_of_copies;
            string issue_date;
            cout << "***************ADD BOOK*****************\n";
            cin.ignore();
            cout << "Book Name: ";
            cin >> name;
            cout << "Book ISBN Number: ";
            cin >> ISBN;
            int flag = SearchByISBN(ISBN);
            if (flag == -1)
            {
                cout << "Publisher Name: ";
                cin >> publisher;
                cout << "Author Name: ";
                cin >> author;
                cout << "Number of Copies:";
                cin >> number_of_copies;
                cout << "Date of Issue: ";
                cin >> issue_date;
                cout << "Do you want to add book information (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y')
                {
                    strcpy(arr[count].name, name);
                    strcpy(arr[count].ISBN, ISBN);
                    strcpy(arr[count].publisher, publisher);
                    strcpy(arr[count].author, author);
                    arr[count].number_of_copies = number_of_copies;
                    arr[count].issue_date = issue_date;
                    int le = arr[count].issue_date.length();
                    arr[count].issue_year = "";
                    arr[count].issue_year.push_back(arr[count].issue_date[le - 4]);
                    arr[count].issue_year.push_back(arr[count].issue_date[le - 3]);
                    arr[count].issue_year.push_back(arr[count].issue_date[le - 2]);
                    arr[count].issue_year.push_back(arr[count].issue_date[le - 1]);
                    count++;
                    cout << "Book is Added...\n";
                }
            }
            else
            {
                cout << "Book is already present in library....\n";
            }
        }
        cout << "Press Enter to continue..." << endl;
        cin.ignore();
        cin.get();
    }
    int SearchByName(const char name[])
    {
        cout << setiosflags(ios::left);
        unsigned int n = 1;
        unsigned int c = 0;
        int ca[50];
        for (int i = 0; i < count; i++)
        {
            if (strcmp(arr[i].name, name) == 0)
            {
                if (n)
                {
                    cout << setw(12) << "Name" << setw(12) << "ISBN" << endl
                        << endl;
                    n--;
                }
                cout << setw(12) << arr[i].name << setw(12) << arr[i].ISBN << endl;
                ca[c++] = i;
            }
        }
        if (c != 0)
        {
            cout << "Enter your choice(1-" << c << "): ";
            cin >> n;
            return ca[n - 1];
        }
        else
        {
            return -1;
        }
    }
    int SearchByISBN(const char ISBN[])
    {
        for (int i = 0; i < count; i++)
        {
            if (strcmp(arr[i].ISBN, ISBN) == 0)
                return i;
        }
        return -1;
    }
    int SearchByAuthor(const char author[])
    {
        for (int i = 0; i < count; i++)
        {
            if (strcmp(arr[i].author, author) == 0)
                return i;
        }
        return -1;
    }
    int SearchByPublisher(const char Publisher[])
    {
        for (int i = 0; i < count; i++)
        {
            if (strcmp(arr[i].publisher, Publisher) == 0)
                return i;
        }
        return -1;
    }
    void SearchByYear(string issue_year)
    {
        cout << setiosflags(ios::left);
        cout << setw(12) << "Name" << setw(12) << "ISBN" << setw(17) << "publisher" << setw(14) << "author" << setw(14) << "copies" << setw(16) << "issue_date" << endl
             << endl;
        for (int i = 0; i < count; i++)
            if (arr[i].issue_year == issue_year)
                cout << setw(12) << arr[i].name << setw(12) << arr[i].ISBN << setw(17) << arr[i].publisher << setw(14) << arr[i].author << setw(14) << arr[i].number_of_copies << setw(16) << arr[i].issue_date << endl;
        cout << "\n\nPress Enter to contine....";
        cin.ignore();
        cin.get();
    }
    void Edit(int index)
    {
        if (Verify())
        {
            char name[20], ISBN[20], publisher[20], author[20];
            int number_of_copies;
            string issue_date;
            cout << "***************BOOK EDIT*****************\n";
            cin.ignore();
            cout << "Book Name: ";
            cin >> name;
            cout << "Book ISBN Number: ";
            cin >> ISBN;
            cout << "Publisher Name: ";
            cin >> publisher;
            cout << "Author Name: ";
            cin >> author;
            cout << "Number of Copies:";
            cin >> number_of_copies;
            cout << "Date of Issue: ";
            cin >> issue_date;
            cout << "Do you want to edit book information (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y')
            {
                strcpy(arr[index].name, name);
                strcpy(arr[index].ISBN, ISBN);
                strcpy(arr[index].publisher, publisher);
                strcpy(arr[index].author, author);
                arr[index].number_of_copies = number_of_copies;
                arr[index].issue_date = issue_date;
                int le = arr[index].issue_date.length();
                arr[index].issue_year = arr[index].issue_date[le - 4] + arr[index].issue_date[le - 3] + arr[index].issue_date[le - 2] + arr[index].issue_date[le - 1];
                cout << "Book is Edited.....\n";
            }
        }
        cout << "Press Enter to continue....\n";
        cin.ignore();
        cin.get();
    }
    void Delete(int index)
    {
        for (int i = index; i < count - 1; i++)
            arr[i] = arr[i + 1];
        count--;
    }
    void Display(int i)
    {
        cout << "***************BOOK Display*****************\n";
        cout << "Book Name: " << arr[i].name << endl;
        cout << "Book ISBN Number: " << arr[i].ISBN << endl;
        cout << "Publisher Name: " << arr[i].publisher << endl;
        cout << "Author Name: " << arr[i].author << endl;
        cout << "Number of Copies:" << arr[i].number_of_copies << endl;
        cout << "Date of Issue: " << arr[i].issue_date << endl;
        cout << "\n\nPress Enter to contine....";
        cin.ignore();
        cin.get();
    }
    void DisplayAll()
    {
        cout << setiosflags(ios::left);
        cout << setw(12) << "Name" << setw(12) << "ISBN" << setw(17) << "publisher" << setw(14) << "author" << setw(14) << "copies" << setw(16) << "issue_date" << endl
             << endl;
        for (int i = 0; i < count; i++)
            cout << setw(12) << arr[i].name << setw(12) << arr[i].ISBN << setw(17) << arr[i].publisher << setw(14) << arr[i].author << setw(14) << arr[i].number_of_copies << setw(16) << arr[i].issue_date << endl;
        cout << "\n\nPress Enter to contine....";
        cin.ignore();
        cin.get();
    }
    char *return_ISBN(int index)
    {
        return arr[index].ISBN;
    }
    ~BOOK() {}
};
class US
{
    private:
    char name[20];
    int ID;
    char status[10];
    string DOB;
    friend class USER;
};
class USER
{
private:
    
    US arr[100];
    unsigned int count;

public:
    USER() : count(0) {}
    void prog_to_file()
    {
        ofstream out;
        out.open("UserList.txt");
        if (out.is_open())
        {
            for (int i = 0; i < count; i++)
            {
                out << arr[i].name << " " << arr[i].ID << " " << arr[i].status << " " << arr[i].DOB << endl;
            }
            out << EOF;
        }
        else
        {
            cout << "Sorry there is some error in opening file......\n";
        }
        out.close();
    }
    void file_to_prog()
    {
        ifstream in;
        in.open("UserList.txt");
        if (in.is_open())
        {
            int i = 0;
            while (!in.eof())
            {
                in >> arr[i].name >> arr[i].ID >> arr[i].status >> arr[i].DOB;
                i++;
            }
            count = --i;
        }
        else
        {
            cout << "Error in opning file.....\n";
        }
    }
    void AddUser()
    {
        if (Verify())
        {

            char name[20], status[10];
            int ID;
            string DOB;
            cout << "***************ADD USER*****************\n";
            cin.ignore();
            cout << "USER Name: ";
            cin >> name;
            cout << "USER IS TECHER OR STUDENT: ";
            cin >> status;
            cout << "USER ID: ";
            cin >> ID;
            int flag = SearchByID(ID);
            if (flag == -1)
            {
                cout << "Date of BIRTH: ";
                cin >> DOB;
                cout << "Do you want to add user information (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y')
                {
                    strcpy(arr[count].name, name);
                    strcpy(arr[count].status, status);
                    arr[count].ID = ID;
                    arr[count].DOB = DOB;
                    count++;
                    cout << "User Added....\n";
                }
            }
            else
            {
                cout << "User is already present with this ID....\n";
            }
        }
        cout << "Press Enter to continue..." << endl;
        cin.ignore();
        cin.get();
    }
    int SearchByName(const char name[])
    {
        cout << setiosflags(ios::left);
        unsigned int c = 0;
        unsigned int n = 1;
        int ca[50];
        for (int i = 0; i < count; i++)
        {
            if (strcmp(arr[i].name, name) == 0)
            {
                if (n)
                {
                    cout << setw(12) << "NAME" << setw(10) << "ID" << endl
                         << endl;
                    n--;
                }
                cout << setw(12) << arr[i].name << setw(10) << arr[i].ID  << endl;
                ca[c++] = i;
            }
        }
        if (c != 0)
        {
            cout << "Enter your choice(1-" << c << "): ";
            cin >> n;
            return ca[n - 1];
        }
        else
        {
            return -1;
        }
    }
    int SearchByID(int ID)
    {
        for (int i = 0; i < count; i++)
        {
            if (arr[i].ID == ID)
                return i;
        }
        return -1;
    }
    void SearchByStatus(const char status[])
    {
        cout << setiosflags(ios::left);
        cout << setw(12) << "NAME" << setw(10) << "ID" << setw(14) << "status" << setw(20) << "DATE OF BIRTH" << endl
             << endl;
        for (int i = 0; i < count; i++)
            if (strcmp(arr[i].status, status) == 0)
                cout << setw(12) << arr[i].name << setw(10) << arr[i].ID << setw(14) << arr[i].status << setw(20) << arr[i].DOB << endl;
        cout << "\n\nPress Enter to contine....";
        cin.ignore();
        cin.get();
    }
    void Edit(int index)
    {
        if (Verify())
        {
            char name[20], status[10];
            int ID;
            string DOB;
            cout << "***************EDIT USER*****************\n";
            cin.ignore();
            cout << "USER Name: ";
            cin >> name;
            cout << "USER IS TECHER OR STUDENT: ";
            cin >> status;
            cout << "USER ID: ";
            cin >> ID;
            cout << "Date of BIRTH: ";
            cin >> DOB;
            cout << "Do you want to edit user information (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y')
            {
                strcpy(arr[index].name, name);
                strcpy(arr[index].status, status);
                arr[index].ID = ID;
                arr[index].DOB = DOB;
                cout << "USer info is edited.....\n";
            }
        }
        cout << "Press Enter to continue....\n";
        cin.ignore();
        cin.get();
    }
    void Delete(int index)
    {
        for (int i = index; i < count - 1; i++)
            arr[i] = arr[i + 1];
        count--;
    }
    void Display(int i)
    {
        cout << "***************" << arr[i].name << " INFO*****************\n";
        cout << "USER Name: " << arr[i].name << endl;
        cout << "USER ID: " << arr[i].ID << endl;
        cout << "Status: " << arr[i].status << endl;
        cout << "Date of BIRTH: " << arr[i].DOB << endl;
        cout << "\n\nPress Enter to contine....";
        cin.ignore();
        cin.get();
    }
    void DisplayAll()
    {
        cout << setiosflags(ios::left);
        cout << setw(12) << "NAME" << setw(10) << "ID" << setw(14) << "status" << setw(20) << "DATE OF BIRTH" << endl;
        for (int i = 0; i < count; i++)
            cout << setw(12) << arr[i].name << setw(10) << arr[i].ID << setw(14) << arr[i].status << setw(20) << arr[i].DOB << endl;
        cout << "\n\nPress Enter to contine....";
        cin.ignore();
        cin.get();
    }
    int calculate_duration(int id)
    {
        int flag = SearchByID(id);
        if (flag != -1)
        {
            if (strcmp(arr[flag].status, "teacher") == 0)
            {
                return 60;
            }
            else
            {
                return 30;
            }
        }
        else
        {
            cout << "USER CANN't FOUND.....\n";
            return 0;
        }
    }
    int return_ID(int index)
    {
        return arr[index].ID;
    }
    ~USER() {}
};
class Date
{
public:
    int day, month, year;
};
class IB
    {
        private:
        char ISBN[20];
        int ID;
        Date issue_date;
        Date Return_date;
        friend class IssueBook;
    };
class IssueBook
{
private:
    
    IB arr[100];
    unsigned int count;

public:
    IssueBook() : count(0) {}
    void prog_to_file()
    {
        ofstream out;
        out.open("IssueBookList2.txt");
        if (out.is_open())
        {
            for (int i = 0; i < count; i++)
            {
                out << arr[i].ISBN << " " << arr[i].ID << " "
                    << arr[i].issue_date.day << " " << arr[i].issue_date.month << " " << arr[i].issue_date.year
                    << " " << arr[i].Return_date.day << " " << arr[i].Return_date.month << " " << arr[i].Return_date.year << endl;
            }
            out << EOF;
        }
        else
        {
            cout << "Sorry there is some error in opening file......\n";
        }
        out.close();
    }
    void file_to_prog()
    {
        ifstream in;
        in.open("IssueBookList2.txt");
        if (in.is_open())
        {
            int i = 0;
            while (!in.eof())
            {
                in >> arr[i].ISBN >> arr[i].ID >> arr[i].issue_date.day >> arr[i].issue_date.month >> arr[i].issue_date.year >> arr[i].Return_date.day >> arr[i].Return_date.month >> arr[i].Return_date.year;
                i++;
            }

            count = --i;
        }
        else
        {
            cout << "Error in opning file.....\n";
        }
        in.close();
    }
    void issue(char ISBN[], int ID, int duration_days)
    {
        strcpy(arr[count].ISBN, ISBN);
        arr[count].ID = ID;
        char dummy, dummy1;
        cout << "Enter Date of Today(Date of Issue):	";
        cin >> arr[count].issue_date.day >> dummy >> arr[count].issue_date.month >> dummy1 >> arr[count].issue_date.year;
        arr[count].Return_date.day = arr[count].issue_date.day + duration_days;
        arr[count].Return_date.month = arr[count].issue_date.month;
        arr[count].Return_date.year = arr[count].issue_date.year;
        arr[count].Return_date.month += (arr[count].Return_date.day / 30);
        arr[count].Return_date.day = arr[count].Return_date.day % 30;
        arr[count].Return_date.year += (arr[count].Return_date.month / 12);
        arr[count].Return_date.month = (arr[count].Return_date.month % 12);
        count++;
    }
    void Delete()
    {
        cout << "ENter user id to delete book issued::    ";
        int id;
        cin >> id;
        int index = SearchByID(id);
        if (index != -1)
        {
            for (int i = index; i < count - 1; i++)
                arr[i] = arr[i + 1];
            count--;
            cout << "Entry Deleted.....\n";
        }
        else
        {
            cout << "that entry not found......\n";
        }
    }
    int SearchByID(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (id == arr[i].ID)
                return i;
        }
        return -1;
    }
    int SearchByISBN(char isbn[])
    {
        for (int i = 0; i < count; i++)
        {
            if (strcmp(isbn, arr[i].ISBN) == 0)
                return i;
        }
        return -1;
    }
    void Display(int id)
    {
        int flag = SearchByID(id);

        if (flag != -1)
        {
            cout << "BOOK ISBN ::  " << arr[flag].ISBN << endl;
            cout << "USER ID ::  " << arr[flag].ID << endl;
            cout << "Issue DATE:: " << arr[flag].issue_date.day << "-" << arr[flag].issue_date.month << "-" << arr[flag].issue_date.year << endl;
            cout << "Return DATE:: " << arr[flag].Return_date.day << "-" << arr[flag].Return_date.month << "-" << arr[flag].Return_date.year << endl;
        }
        cout << "Press Enter to continue....." << endl;
        cin.ignore();
        cin.get();
    }
    ~IssueBook() {}
};
BOOK b;
USER u;
IssueBook ib;
int Search_USER()
{
    cout << "1- Search By NAME\n";
    cout << "2- Search By ID\n";
    cout << "3- Search By Status\n";
    cout << "Enter choice(1-3)>>>\n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter USER NAME: ";
        char name[40];
        cin >> name;
        return u.SearchByName(name);
        break;
    case 2:
        cout << "Enter USER ID: ";
        int ID;
        cin >> ID;
        return u.SearchByID(ID);
        break;
    case 3:
        cout << "Enter your status(teacher or student): ";
        char status[20];
        cin >> status;
        u.SearchByStatus(status);
        return -2;
        break;
    default:
        cout << "Wronog CHOICE\n";
    }
}
int Search_BOOK()
{
    cout << "1- Search By ISBN\n";
    cout << "2- Search By NAME\n";
    cout << "3- Search By Author\n";
    cout << "4- Search By Publisher\n";
    cout << "5- Search By Year\n";
    cout << "Enter choice(1-5)>>>\n";
    int choice;
    cin >> choice;
    string year;
    switch (choice)
    {
    case 1:
        cout << "Enter ISBN: ";
        char isbn[20];
        cin >> isbn;
        return b.SearchByISBN(isbn);
        break;
    case 2:
        cout << "Enter NAME: ";
        char name[20];
        cin >> name;
        return b.SearchByName(name);
        break;
    case 3:
        cout << "Enter Author Name: ";
        char aname[20];
        cin >> aname;
        return b.SearchByAuthor(aname);
        break;
    case 4:
        cout << "Enter Publisher Name: ";
        char pname[20];
        cin >> pname;
        return b.SearchByPublisher(pname);
        break;
    case 5:
        cout << "Enter Issue Year: ";
        cin >> year;
        b.SearchByYear(year);
        return -2;
        break;
    default:
        cout << "Wronog CHOICE\n";
    }
}
void main_menu()
{
    bool t = true;
    while (t)
    {
        system("cls");
        cout << "\t\t\t**** UOS LIBRARY MANGEMENT SYSTEM ****\n\n";
        cout << "\t\t******Enter Your CHOICE(1-11) to Active the Required Function******\n\n";
        cout << "   1 ->   Add New Book " << endl;
        cout << "   2 ->   Edit Book " << endl;
        cout << "   3 ->   Delete Book " << endl;
        cout << "   4 ->   Search Book " << endl;
        cout << "   5 ->   Add Library User " << endl;
        cout << "   6 ->   Edit Library User " << endl;
        cout << "   7 ->   Delete Library User " << endl;
        cout << "   8 ->   Search Library User " << endl;
        cout << "   9 ->   Issue Book " << endl;
        cout << "   10->   Delete Issued Book " << endl;
        cout << "   11->   To quit " << endl
             << endl;
        int choice;
        cin >> choice;
        int flag;
        switch (choice)
        {
        case 1:
            b.AddBook();
            break;
        case 2:
            flag = Search_BOOK();
            if (flag != -1 && flag != -2)
                b.Edit(flag);
            else if (flag == -1)
            {
                cout << "REquired bOOK is not found\n";
            }
            break;
        case 3:
            flag = Search_BOOK();
            if (BookDeleter(b.return_ISBN(flag)))
            {
                if (flag != -1 && flag != -2)
                {
                    char ch;
                    cout << "BOOK HAS FOUND::\n";
                    b.Display(flag);
                    cout << "\nDO YOU REALLY WANT TO DELETE THAT?\n";
                    cin >> ch;
                    if (ch == 'Y' || ch == 'y')
                        b.Delete(flag);
                }
                else if (flag == -1)
                {
                    cout << "REquired bOOK is not found\n";
                }
            }
            else
            {
                cout << "this book cannt be delete because it is issued for someone.......\n";
            }
            cin.ignore();
            cin.get();
            break;
        case 4:
            flag = Search_BOOK();
            if (flag != -1 && flag != -2)
                b.Display(flag);
            else if (flag == -1)
                cout << "REQUIRED bOOK is not FOUND\n";
            break;
        case 5:
            u.AddUser();
            break;
        case 6:
            flag = Search_USER();
            if (flag != -1 && flag != -2)
                u.Edit(flag);
            else if (flag == -1)
                cout << "REquired USER is not found\n";
            break;
        case 7:
            flag = Search_USER();
            if (UserDeleter(u.return_ID(flag)))
            {
                /* code */
            
            if (flag != -1)
            {
                char ch;
                cout << "USER HAS FOUND::\n";
                u.Display(flag);
                cout << "\nDO YOU REALLY WANT TO DELETE THAT?\n";
                cin >> ch;
                if (ch == 'Y' || ch == 'y')
                    u.Delete(flag);
            }
            else if (flag == -1)
                cout << "REquired USER is not found\n";
            }
            else
            {
                cout<<"THis user has some book issued so it cannt be delete at moment.....\n";
            }
            cin.ignore();
            cin.get();
            break;
        case 8:
            flag = Search_USER();
            if (flag != -1 && flag != -2)
                u.Display(flag);
            else if (flag == -1)
                cout << "REQUIRED USER is not FOUND\n";
            break;
        case 9:
            cout << "************ISSUE BOOK***********\n";
            flag = Search_BOOK();
            if (flag != -1 && flag != -2)
            {
                cout << "ENter your ID: ";
                int id;
                cin >> id;
                ib.issue(b.return_ISBN(flag), id, u.calculate_duration(id));
                cout << "\n****************Here is your invoice***********\n";
                ib.Display(id);
            }
            else if (flag == -1)
            {
                cout << "BOOK is not found....\n";
            }
            break;
        case 10:
            ib.Delete();
            break;
        case 11:
            t = false;
            break;
        default:
            cout << "WRONG CHOICE ENTER AGAIN....\n";
        }
    }
}
int main()
{
    b.file_to_prog();
    u.file_to_prog();
    ib.file_to_prog();
    main_menu();
    ib.prog_to_file();
    u.prog_to_file();
    b.prog_to_file();

    return 0;
}
bool UserDeleter(int id)
{
    int flag = ib.SearchByID(id);
    if (flag == -1)
    {
        return true;
    }
    else
        return false;
}
bool BookDeleter(char isbn[])
{
    int flag = ib.SearchByISBN(isbn);
    if (flag == -1)
    {
        return true;
    }
    else
        return false;
}