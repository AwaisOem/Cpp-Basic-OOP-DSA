#include<bits/stdc++.h>
using namespace std;
class Log
{
    static char s[100];
public:
Log()=delete;
static void Write(const char *n)
{
    strcpy(s,n);
}
static void Show()
{
    cout<<s<<endl;
}
~Log() =delete;
};
char Log::s[];
auto main()->int{
Log::Write("AWAIS");
Log::Show();
Log *l1;
l1->Write("aWAADASd");
l1->Show();
// delete l1;
// we cannt delete this because destructor is deleted 
// if destructor exist it will  be no object creation and deletion
    return 0;   
}