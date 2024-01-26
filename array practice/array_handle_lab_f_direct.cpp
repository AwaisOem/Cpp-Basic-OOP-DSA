#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int list[100];
int c(0);
    int dis1;
    do
    {
         cout << "***********Main Menu************" << endl;
    cout << "Press 1 for Insert any element in list" << endl;
    cout << "Press 2 to Delete any element in list" << endl;
    cout << "Press 3 for Display any element in list" << endl;
    cout << "Press 0 to exit" << endl;
    cout << "Enter your choice:   ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:{
        int dis2;
        do
        {
            cout << "ENter any value at index " << c << " :   ";
            cin >> list[c];
            c++;
            cout << "Do you want to insert more?  (0,1) ";
            cin >> dis2;
        } while (dis2 != 0);
        break;
    }
    case 2:
    {
         cout << "Enter any number to delete in array:   ";
    int n, h(-1);
    cin >> n;
    for (int i = 0; i < c; i++)
    {
        if (list[i] == n)
        {
            h = i;
            break;
        }
    }
    if (h != -1)
    {
        for (int i = h; i < c - 1; i++)
        {
            list[i] = list[i + 1];
        }
        c--;
        cout << "SUcceessfully deleted" << endl;
    }
    else
    {
        cout << "Number not found" << endl;
    }
        break;
    }
    case 3:
    {
        cout << "*******************Here is your Array****************" << endl;
        for (int i = 0; i < c; i++)
        {
            cout << list[i] << "\t";
        }
        cout << endl;
        break;
    }
    case 0:
        break;
    default:
        cout << "invalid";
    }
        cout << "DO you want to run again?  (0,1)";
        cin >> dis1;
    } while (dis1 != 0);
    return 0;
}


