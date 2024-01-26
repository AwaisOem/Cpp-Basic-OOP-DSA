#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class TimeTable
{
    string t_name;
    string s_name;
    string c_name;
    unsigned int s_time;

public:
    TimeTable(string t = "", string s = "", string c = "", int s_t = 0) : t_name(t), s_name(s), c_name(c), s_time(s_t) {}
    void addnew()
    {
        cout << "Enter teacher name: ";
        cin >> t_name;
        cout << "Enter subject name: ";
        cin >> s_name;
        cout << "Enter class name: ";
        cin >> c_name;
        cout << "Enter Starting Time(8am-4pm):    ";
        cin >> s_time;
        cout << endl;
    }
    void show() const
    {
        cout << "teacher name: " << t_name << endl
             << "subject name: " << s_name << endl
             << "class name: " << c_name << endl
             << "Starting Time(8am-4pm):    " << s_time << endl;
    }
    bool operator==(const TimeTable &t) const { return (s_time == t.s_time); }
};
int main()
{
    const unsigned int size = 3;
    unsigned int m_count = 0, s_count = 0;
    TimeTable Mam_Madiha[size], Sir_Amir[size];
    cout << "*******Enter Values For Mam Madiha Lectures*****" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data for lec " << i + 1 << endl;
        Mam_Madiha[i].addnew();
    }
    cout << "*******Enter Values For Sir Amir Lectures******" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data for lec " << i + 1 << endl;
        Sir_Amir[i].addnew();
    }
    cout << "\n\n";
    cout << "*******Mam Madiha\'s Lectures*****" << endl;
    for (int i = 0; i < size; i++)
    {
        bool f = 0;
        for (int j = 0; j <= i; j++)
        {
            if (i != j && (Mam_Madiha[i] == Mam_Madiha[j]))
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            Mam_Madiha[i].show();
            m_count++;
        }
    }
    cout << "\n\n";
    cout << "*******Sir Amir\'s Lectures*****" << endl;
    for (int i = 0; i < size; i++)
    {
        bool f = 0;
        for (int j = 0; j <= i; j++)
        {
            if (i != j && Sir_Amir[i] == Sir_Amir[j])
            {
                f = 1;
                break;           
            }
        }
        if (f == 0)
        {
            Sir_Amir[i].show();
            s_count++;
        }
    }
    cout << "\n\n";
    cout << "Total Lectures by Sir_Amir:  " << s_count << endl;
    cout << "Total Lectures by Mam_Madiha:  " << m_count << endl;
    return 0;
}