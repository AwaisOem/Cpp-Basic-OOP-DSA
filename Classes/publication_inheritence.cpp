#include <iostream>
using namespace std;
class Sales
{
protected:
    float s[3];

public:
    virtual void getdata()
    {
        cout << "Enter 3 ammount:    ";
        cin >> s[0] >> s[1] >> s[2];
    }
    virtual void putdata()
    {
        cout << "Ammounts: \n";
        cout << s[0] << endl
             << s[1] << endl
             << s[2] << endl;
    }
};
class publication : Sales
{
    string title;

public:
    void getdata()
    {
        cout << "Enter title & price: ";
        cin >> title;
        Sales::getdata();
    }
    void putdata()
    {
        cout << "\ntitle: " << title << endl
             << "price: " << endl;
        Sales::putdata();
    }
};
class book : publication
{

    int page_count;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter page_count: ";
        cin >> page_count;
    }
    void putdata()
    {
        publication::putdata();
        cout << "Page_count: " << page_count << endl;
    }
};
enum
{
    CD = 'c',
    DVD = 'd'
};
class computerdisk : publication
{

    char disk_type;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter disk_type: ";
        cin >> disk_type;
    }
    void putdata()
    {
        publication::putdata();
        cout << "disk_type: ";
        if (disk_type == CD)
            cout << "CD";
        else
            cout << "DVD";
        cout << endl;
    }
};
class tape : publication
{
    float playing_time;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter playing time: ";
        cin >> playing_time;
    }
    void putdata()
    {
        publication::putdata();
        cout << "playing time: " << playing_time << endl;
    }
};
int main()
{
    publication p;
    p.getdata();
    p.putdata();
    book b;
    b.getdata();
    b.putdata();
    tape t;
    t.getdata();
    t.putdata();
    computerdisk a;
    a.getdata();
    a.putdata();
    return 0;
}