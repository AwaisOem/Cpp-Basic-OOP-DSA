#include <bits/stdc++.h>
using namespace std;
bool check_validation(int **arr, int x, int y, int size)
{
    return (arr[x][y] == 0 && x < size && y < size);
}
bool backtrack(int **arr, int x, int y, int size, int **solarr)
{
    if (x == size - 1 && y == size - 1)
    {
        solarr[x][y] = 1;
        return true;
    }
    if (check_validation(arr, x, y, size))
    {
        if (backtrack(arr, x + 1, y, size, solarr))
        {
            solarr[x][y] = 1;
            return true;
        }
        if (backtrack(arr, x, y + 1, size, solarr))
        {
            solarr[x][y] = 1;
            return true;
        }
        else
        {
            solarr[x][y] = 0;
            return false;
        }
    }
    else
        return false;
}
main()
{
    cout << "Enter required size: ";
    int size = 0;
    cin >> size;
    int **arr = new int *[size];
    for (int i = 0; i < size; i++)
        arr[i] = new int[size];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> arr[i][j];
    int **solarr = new int *[size];
    for (int i = 0; i < size; i++)
        solarr[i] = new int[size];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            solarr[i][j] = 0;
    if (backtrack(arr, 0, 0, size, solarr))
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
                cout << solarr[i][j] << " ";
            cout << endl;
        }
    else
        cout << "Cann't find a single path " << endl;
    return 0;
}
// 0 1 0 1 0
// 0 0 0 0 0
// 1 0 1 0 1
// 1 0 1 0 1
// 1 1 1 0 0