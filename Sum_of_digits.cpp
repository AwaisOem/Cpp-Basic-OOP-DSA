#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int p, sum(0);
    cout << "Enter the number:    ";
    int n;
    cin >> n;
    for (; n > 0;)
    {
        sum += (n % 10);
        n /= 10;
    }
    cout << sum;
}