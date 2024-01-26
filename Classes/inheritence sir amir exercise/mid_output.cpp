#include <iostream>
#include <cstring>
using namespace std;
class alpha
{
private:
    static int bb;
    char ch[5];
public:
    alpha(int b, char c[])
    {
        bb -= b;
        strcpy(ch, c);
    }
    void show()
    {
        cout << bb << "\t" << ch << endl;
    }
    alpha subtr_fun(alpha ob)
    {
        alpha temp(1.5, "C");
        bb = temp.bb - ob.bb;
        strcpy(temp.ch, ch);
        strcat(temp.ch, ob.ch);
        message();
        return temp;
    }
    void message()
    {
        cout << "Message" << endl;
    }
};
int alpha::bb = -1;
int main()
{
    alpha obj1(1, "M");
    obj1.show();
    alpha obj2(1 % 2, "N"), obj3(2, "A");
    obj3 = obj2.subtr_fun(obj1);
    obj3.show();
    return 0;
}