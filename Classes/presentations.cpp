#include <bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;
class Presentations
{
private:
    char n[10][20];
    int r[10];
    int ctr;

public:
    Presentations() : n{{NULL}}, r{0}, ctr(0) {}
    Presentations(int q) : ctr(q)
    {
        cout << "Enter " << q << " students \n";
        for (int i = 0; i < q; i++)
        {
            cout << "Enter Name of Student :   ";
            cin >> n[i];
            cout << "Enter Rollno of Student :   ";
            cin >> r[i];
        }
    }
    void operator++()
    {
        cout << "Enter Name of Student :   ";
        cin >> n[ctr];
        cout << "Enter Rollno of Student :   ";
        cin >> r[ctr];
        ctr++;
    }
    void getdata(int index)
    {
        cout << endl;
        cout << "Name of Student " << index + 1 << ": " << n[index] << endl;
        cout << "Rollno of Student " << index + 1 << ": " << r[index] << endl;
    }
    void show_all()
    {
        cout << endl;
        for (int i = 0; i < ctr; i++)
        {
            cout << "Name of Student " << i + 1 << ": " << n[i] << endl;
            cout << "Rollno of Student " << i + 1 << ": " << r[i] << endl;
            cout << endl;
        }
    }
    int getcounter()
    {
        return ctr;
    }
    ~Presentations(){}
};
int main()
{
    Presentations bsit;
    ++bsit;
    ++bsit;
    ++bsit;
    bsit.getdata(1);
    bsit.show_all();
    cout<<bsit.getcounter();
    return 0;
}