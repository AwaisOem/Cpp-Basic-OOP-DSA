#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b = 1;
    cin >> a;
    do  cout << setw(170) << a * b++ << endl;
    while (b <= 10);
    return 0;
}