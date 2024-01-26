// Create an ProException class that holds EstimPub (type int).
//  When the user enters Professor data, if the pub is below then 10, then throw an ProException object
// with an appropriate message (Pass this String to the ProException’s parent so it can be used in a what () call).
//  Write a main () function that instantiates a Professor object, allows the user to enter data, and displays the data members.

#include <bits/stdc++.h>
using namespace std;
class Professor
{
private:
    int id;
    string name;
    int pub;
    friend ostream &operator<<(ostream &os, const Professor &s);
    friend istream &operator>>(istream &in, Professor &s);
public:
    Professor(int i, string n, int p) : id(i), name(n), pub(p) {}
};
class ProException
{
    int EstimPub;

public:
};
ostream &operator<<(ostream &os, const Professor &s)
{

    os << s.name << endl
       << s.id << endl
       << s.pub << endl;
    return os;
}
istream &operator>>(istream &in, Professor &s)
{
    in >> s.name >> s.id >> s.pub;
    return in;
}

main()
{

    return 0;
}