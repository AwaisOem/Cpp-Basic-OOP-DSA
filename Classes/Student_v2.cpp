#include <iostream>
#include <string>
using namespace std;
class student
{
    long long id;
    string name;
    char grade;
    short age;
    bool glasses;
    char Gender;
    int marks;
    void grade_decider()
    {
        double per = (marks * 100.0) / 1100.0;
        if (per >= 90)
        {
            grade = 'A';
        }
        else if (per >= 80 and per < 90)
        {
            grade = 'B';
        }
        else if (per >= 70 and per < 80)
        {
            grade = 'C';
        }
        else if (per >= 60 and per < 70)
        {
            grade = 'D';
        }
        else if (per >= 50 and per < 60)
        {
            grade = 'E';
        }
        else
        {
            grade = 'F';
        }
    }

public:
    void add()
    {
        cout << "Enter the name:              ";
        cin >> name;
        cout << "Enter the id of student:     ";
        cin >> id;
        cout << "Enter the Gender(M/F):        ";
        cin >> Gender;
        cout << "Enter the age of student:       ";
        cin >> age;
        cout << "Enter the marks of student in FSC:       ";
        cin >> marks;
        cout << "Do student haver glasses(0/1):   ";
        cin >> glasses;
        grade_decider();
    }
    void show()
    {
        cout << "name of student is ";
        cout << name;
        cout << endl;
        cout << "Id of student is ";
        cout << id;
        cout << endl;
        cout << "Gender of student is ";
        cout << Gender;
        cout << endl;
        cout << "Age of student is ";
        cout << age;
        cout << endl;
        cout << "Marks of student in FSC is ";
        cout << marks;
        cout << endl;
        cout << "Grade of student in FSC is ";
        cout << grade;
        cout << endl;
        if (glasses == 0)
        {
            cout << "Glasses nhi pehni is ne" << endl;
        }
        else
        {
            cout << "Glasses pehni hai is ne" << endl;
        }
        cout << endl;
    }
};
int count = 0;
int main()
{
    student ss1[10];
    ss1[0].add();
    ss1[0].show();
    return 0;
}