#include <bits/stdc++.h>
using namespace std;
class University
{
public:
    virtual void in() = 0;
    virtual void out() = 0;
};
class UOS : public University
{
    int serialNumber;
    int VC_number;
    char VC_name[20];

public:
    UOS(int serialnumber = 0, int vc_number = 0, const char vc_name[] = "")
        : serialNumber(serialNumber), VC_number(vc_number)
    {
        strcpy(VC_name, vc_name);
        ;
    }
    void in()
    {
        cin >> serialNumber >> VC_number >> VC_name;
    }
    void out()
    {
        cout << serialNumber << VC_number << VC_name << endl;
    }
    ~UOS() {}
};
class IT_dep : UOS
{
    char HOD_name[20];
    int HOD_number;
    int Dep_position;

public:
    IT_dep(int serialnumber = 0, int vc_number = 0, const char vc_name[] = "", const char hod_name[] = "", int hod_number = 0, int dep_position = 0)
        : UOS(serialnumber, vc_number, vc_name), HOD_number(hod_number), Dep_position(dep_position)
    {
        strcpy(HOD_name, hod_name);
    }
    void in()
    {
        UOS::in();
        cin >> HOD_number >> HOD_name >> Dep_position;
    }
    void out()
    {
        UOS::out();
        cout << HOD_number << HOD_name << Dep_position << endl;
    }
    ~IT_dep() {}
};
class CS : public IT_dep
{
    char Unique_subject[20];
    float Average_inteligence;

public:
    CS(int serialnumber = 0, int vc_number = 0, const char vc_name[] = "", const char hod_name[] = "", int hod_number = 0, int dep_position = 0, const char unique_subject[] = "", float average_inteligence = 0.0f)
        : IT_dep(serialnumber, vc_number, vc_name, hod_name, hod_number, dep_position), Average_inteligence(average_inteligence)
    {
        strcpy(this->Unique_subject, unique_subject);
    }
    void in()
    {
        cout << "input" << endl;
        IT_dep::in();
        cin >> Unique_subject >> Average_inteligence;
    }
    void out()
    {
        cout << "output" << endl;
        IT_dep::out();
        cout << Unique_subject << Average_inteligence << endl;
    }
    ~CS() {}
};
class SE : public IT_dep
{
    char Unique_subject[20];
    float Average_inteligence;

public:
    SE(int serialnumber = 0, int vc_number = 0, const char vc_name[] = "", const char hod_name[] = "", int hod_number = 0, int dep_position = 0, const char unique_subject[] = "", float average_inteligence = 0.0f)
        : IT_dep(serialnumber, vc_number, vc_name, hod_name, hod_number, dep_position), Average_inteligence(average_inteligence)
    {
        strcpy(this->Unique_subject, unique_subject);
    }
    void in()
    {
        cout << "input" << endl;
        IT_dep::in();
        cin >> Unique_subject >> Average_inteligence;
    }
    void out()
    {
        cout << "output" << endl;
        IT_dep::out();
        cout << Unique_subject << Average_inteligence << endl;
    }
    ~SE() {}
};
class IT : public IT_dep
{
    char Unique_subject[20];
    float Average_inteligence;

public:
    IT(int serialnumber = 0, int vc_number = 0, const char vc_name[] = "", const char hod_name[] = "", int hod_number = 0, int dep_position = 0, const char unique_subject[] = "", float average_inteligence = 0.0f)
        : IT_dep(serialnumber, vc_number, vc_name, hod_name, hod_number, dep_position), Average_inteligence(average_inteligence)
    {
        strcpy(this->Unique_subject, unique_subject);
    }
    void in()
    {
        cout << "input" << endl;
        IT_dep::in();
        cin >> Unique_subject >> Average_inteligence;
    }
    void out()
    {
        cout << "output" << endl;
        IT_dep::out();
        cout << Unique_subject << Average_inteligence << endl;
    }
    ~IT() {}
};
int main()
{
    IT_dep *d1[8];
    char ch;
    int i = 0;
    do
    {
        cout << "Enter C/S/I for corresponding creating class of CS/SE/IT otherwise press enter to exit." << endl;
        ch = getche();
        if (ch == 'C')
            d1[i++] = new CS;
        else if (ch == 'S')
            d1[i++] = new SE;
        else if (ch == 'I')
            d1[i++] = new IT;
        cout << endl;
    } while (ch != '0');
    for (int j = 0; j < i; j++)
        d1[j]->in();

    for (int j = 0; j < i; j++)
        d1[j]->out();

    return 0;
}