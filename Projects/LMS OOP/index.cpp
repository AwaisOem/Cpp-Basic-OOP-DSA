#include<bits/stdc++.h>
#define char_SIZE 20
#define book_CAP 100
using namespace std;
class BOOK
{
    private:
    struct BK
    {
    char name[char_SIZE];
    char ISBN[char_SIZE];
    char publisher[char_SIZE];
    char author[char_SIZE];
    int number_of_copies;
    string issue;
    };
    BK arr[book_CAP];
    unsigned int count; 
    public:
    BOOK():count(0){}
    void Add()
    {
        cout<<"************ADD A BOOK************"<<endl;
        cout<<"Enter BOOK NAME:    ";
        cin>>arr[count].name;
        cout<<"Enter ISBN number:    ";
        cin>>arr[count].ISBN;
        cout<<"Enter PUBLISHER NAME:   ";
        cin>>arr[count].publisher;
        cout<<"Enter AUTHOR number:    ";
        cin>>arr[count].author;
        cout<<"Enter number of copies:    ";
        cin>>arr[count].number_of_copies;
        cout<<"Enter issue year:    ";
        cin>>arr[count].issue;
        count++;
    }
    void Edit(const char * ISBN)
    {
        int flag = SearchByISBN(ISBN);
        cout<<"************EDIT A BOOK************"<<endl;
        cout<<"Enter BOOK NAME:    ";
        cin>>arr[flag].name;
        cout<<"Enter ISBN number:    ";
        cin>>arr[flag].ISBN;
        cout<<"Enter PUBLISHER NAME:   ";
        cin>>arr[flag].publisher;
        cout<<"Enter AUTHOR number:    ";
        cin>>arr[flag].author;
        cout<<"Enter number of copies:    ";
        cin>>arr[flag].number_of_copies;
        cout<<"Enter issue year:    ";
        cin>>arr[flag].issue;
    }
    int SearchByISBN(const char * ISBN)
    {
        for (int i = 0; i < count; i++)
            if(strcmp(arr[i].ISBN, ISBN)==0)
                return i;
        return -1;
    }
    int SearchByAuthor(const char * author)
    {
        for (int i = 0; i < count; i++)
            if(strcmp(arr[i].author, author)==0)
                return i;
        return -1;
    }
    int SearchByName(const char  *name)
    {
        for (int i = 0; i < count; i++)
            if(strcmp(arr[i].name, name)==0)
                return i;
        return -1;
    }
    int SearchByPub(const char  *PUB)
    {
        for (int i = 0; i < count; i++)
            if(strcmp(arr[i].publisher, PUB)==0)
                return i;
        return -1;
    }
    int SearchByPub(const char  *PUB)
    {
        for (int i = 0; i < count; i++)
            if(strcmp(arr[i].publisher, PUB)==0)
                return i;
        return -1;
    }
    int SearchByYear(string str)
    {
        for (int i = 0; i < count; i++)
            if(arr[i].issue==str)
                return i;
        return -1;
    }
    void DisplayByIndex(int flag)
    {
        if (flag==-1)
        {
            cout<<"BOOK NOT FOUND IN LIST"<<endl;
        }
        else
        {
        cout<<"************EDIT A BOOK************"<<endl;
        cout<<"Enter BOOK NAME:    "<<arr[flag].name<<endl;
        cout<<"Enter ISBN number:    "<<arr[flag].ISBN<<endl;
        cout<<"Enter PUBLISHER NAME:   "<<arr[flag].publisher<<endl;
        cout<<"Enter AUTHOR number:    "<<arr[flag].author<<endl;
        cout<<"Enter number of copies:    "<<arr[flag].number_of_copies<<endl;
        cout<<"Enter issue year:    "<<arr[flag].issue<<endl;
        }
    }

};
class USER
{

};
class Issue
{

};
int main(){



 return 0;   
}