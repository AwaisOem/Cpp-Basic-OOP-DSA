#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ass[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ass[i];
    }
    int count[n] = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ass[i] == ass[j])
            {
                count[i]++;
            }
        }
    }

    int maxrep = count[0], hrep(0);
    for (int i = 0; i < n; i++)
    {
        if (maxrep < count[i])
        {
            maxrep = count[i];
            hrep = i;
        }
    }

    cout << "Highest repeated number is:  " << ass[hrep] << endl;
    cout << "Num of repeatation is:  " << maxrep << endl;

    return 0;
}