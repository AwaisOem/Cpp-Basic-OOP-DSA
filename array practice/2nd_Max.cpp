#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        if (a[0] < a[i])
            swap(a[0], a[i]);
    for (int i = 2; i < n; i++)
        if (a[1] < a[i] && a[1] < a[0])
            swap(a[1], a[i]);
    cout << "2nd highest number is " << a[1] << endl << "highest is " << a[0] << endl;
    return 0;
}