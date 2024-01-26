#include <iostream>
using namespace std;
int main()
{
    float x, sum, ng, fct, a, b, c;
    int i, n;
    cout << "Enter X:    ";
    cin >> x;
    cout << "Enter n:    ";
    cin >> n;    
    a = 2;
    sum = 1;
    ng = 1;
    cout << " term 1 value is: " << ng << endl;
    for (i = 1; i < n; i++)
    {
        fct = 1;
        for (b = 1; b <= a; b++)
            fct = fct * b;
        ng = ng * (-1);
        float sq(1);
   for(float k=1;k<=a;k++)
    sq=sq*x;
        c = sq / fct;
        c = c * ng;
        cout << " term " << i + 1 << " value is: " << c << endl;
        sum = sum + c;
        a += 2;
    }
    cout << " The sum of series is: " << sum << endl;
}
