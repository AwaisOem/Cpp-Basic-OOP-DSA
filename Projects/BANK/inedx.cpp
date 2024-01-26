#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
//declaration section
class Manipulation;
//declarations ends
fstream file;
class Account
{
    //properties
    long AccountNumber;
    string Name;
    string City;
    string State;
    int zipCode;
    long phoneNumber;
    unsigned int Balance;
    string lastPayDate;
    //here we make manipulation class a friend because we want to use our private members in it
    // friend class Manipulation;
    bool append_to_file()
    {
        file.open("Account.txt",ios::app);
        if(file.is_open())
        {
            file << AccountNumber << Name <<City << State << zipCode << phoneNumber << lastPayDate << endl;
            file.close();
            return true;
        }
        else
        {
            cout<<"There is any error to open file\n";
            return false;
        }
    }
    public:
    Account(){}
    void Add()
    {
        cout<<"Account Number:  ";
        cin>>AccountNumber;
        cout<<"Owner Name:  ";
        cin>>Name;
        cout<<"Owner City:  ";
        cin>>City;
        cout<<"Owner state:  ";
        cin>>State;
        cout<<"Phone Number:  ";
        cin>>phoneNumber;
        cout<<"Account Balance:  ";
        int b;cin>>b;
        while(b<0)
        {
            cout<<"BAlance cannt be negative....\nagain:    ";
            cin>>b;
        }
        Balance=b;
        lastPayDate = "0-0-0";
        if(append_to_file())
        {
            cout<<"Account Created.......\n";
        }
        cin.ignore();
        cin.get();
    }
    void Edit()
    {
        cout<<"Give Account Number to edit details:  ";
        cin>>AccountNumber;
        cout<<"******EDIT*********\n";
        cout<<"Owner Name:  ";
        cin>>Name;
        cout<<"Owner City:  ";
        cin>>City;
        cout<<"Owner state:  ";
        cin>>State;
        cout<<"Phone Number:  ";
        cin>>phoneNumber;
        cout<<"Account Balance:  ";
        int b;cin>>b;
        while(b<0)
        {
            cout<<"BAlance cannt be negative....\nagain:    ";
            cin>>b;
        }
        Balance=b;
        lastPayDate = "0-0-0";
        long accountNumber;
        string name;
        string city;
        string state;
        int zip;
        long phone;
        unsigned int balance;
        string last;
        
        cout<<"For Confirmation Enter your zip code:  ";
        int ZIP;cin>>ZIP;
        file.open("Account.txt");
        fstream o;
        o.open("Account2.txt");
        if(file.is_open())
        {
            while (!file.eof())
            {
                file>>accountNumber>>name>>city>>state>>zip>>phone>>last;
                if (accountNumber==AccountNumber )
                {
                    name = Name;
                    city = City;
                    state = State;
                    zip = zipCode;
                    phone = phoneNumber;
                    balance = Balance;
                    last = lastPayDate;
                }
                o<<accountNumber<<" "<<name<<" "<<city<<" "<<state<<" "<<zip<<" "<<phone<<" "<<last<<endl;
            }
            o.close();
            remove("Account.txt");
            rename("Account2.txt" , "Account.txt");
        }
        else
        {
            cout<<"sorry operation is cancelled due to some issue......\n";
        }
    }
    void Delete(long AN)
    {
        long accountNumber;
        string name;
        string city;
        string state;
        int zip;
        long phone;
        unsigned int balance;
        string last;
        
        cout<<"For Confirmation Enter your zip code:  ";
        int ZIP;cin>>ZIP;
        file.open("Account.txt");
        fstream o;
        o.open("Account2.txt");
        if(file.is_open())
        {
            while (!file.eof())
            {
                file>>accountNumber>>name>>city>>state>>zip>>phone>>last;
                if (accountNumber==AN && zip==ZIP)continue;
                o<<accountNumber<<" "<<name<<" "<<city<<" "<<state<<" "<<zip<<" "<<phone<<" "<<last<<endl;
            }
            o.close();
            remove("Account.txt");
            rename("Account2.txt" , "Account.txt");
        }
        else
        {
            cout<<"sorry operation is cancelled due to some issue......\n";
        }
    }
    void Display(long AN)
    {
        long accountNumber;
        string name;
        string city;
        string state;
        int zip;
        long phone;
        unsigned int balance;
        string last;
        file.open("Account.txt");
        if(file.is_open())
        {
            while (!file.eof())
            {
                file>>accountNumber>>name>>city>>state>>zip>>phone>>last;
                if (AN==accountNumber)
                {
                    cout<<accountNumber<<endl;
                    cout<<name<<endl;
                    cout<<city<<endl;
                    cout<<state<<endl;
                    cout<<zip<<endl;
                    cout<<phone<<endl;
                    cout<<last<<endl;
                    break;
                }
            }
        file.close();
        }
        else
        {
            cout<<"There is any error to open file\n";
        }
        cin.ignore();
        cin.get();
    }
    void DisplayAll()
    {
        long accountNumber;
        string name;
        string city;
        string state;
        int zip;
        long phone;
        unsigned int balance;
        string last;
        file.open("Account.txt");
        if(file.is_open())
        {
            cout<<setw(20)<<"accountNumber"<<setw(15)<<"name"<<setw(12)<<"city"<<setw(13)<<"state"<<setw(13)<<"zip"<<setw(20)<<"phone"<<setw(13)<<"last Date"<<endl;
            while (!file.eof())
            {
                file>>accountNumber>>name>>city>>state>>zip>>phone>>last;
                cout<<setw(20)<<accountNumber<<setw(15)<<name<<setw(12)<<city<<setw(13)<<state<<setw(13)<<zip<<setw(20)<<phone<<setw(13)<<last<<endl;
            }
        }
        else
        {
            cout<<"There is any error to open file\n";
        }
        file.close();
    }
};
////////////////////////////////////////////////////////////////////////////
class Manipulation
{
    Account arr[100];
    unsigned int count;
    public:

};
//////////////////////////main//////////////////////////////
int main(){



 return 0;   
}
int choicer(int s,int e)
{
    cout<<"Enter your choice between("<<s<<"-"<<e<<") >>>>";
    int choice;cin>>choice;
    return choice;
}
int MainMenu()
{
    cout<<"***********OEM BANK***********\n"<<endl;
    cout<<"1:Enter new record.\n2:Display\n3:Delete.\n4:Edit.\n5:View all customers list.\n6:Balance Inquiry.\n7:Deposit amount.\n8:Withdraw amount.\n9:Transfer amount to other account\n10:Exit from program.\n\n";
    switch (choicer(1,10))
    {
    case 1:
        
        break;
    
    default:
        break;
    }
}