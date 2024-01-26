#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;
int *bubble_sort(int *, int);
int *selection_sort(int *, int);
int *insertion_sort(int *, int);
int binary_search(int *, int, int);
int linear_search(int *, int, int);
void mainmenu(int *, int);
void search_menu(int *, int);
void sort_menu(int *, int);
void display_array(int *, int);

int main()
{
    system("cls");
    int s;
    cout << "Enter size of array:       ";
    cin >> s;
    cout << "Enter Elements in array: " << endl;
    int dabba[s];
    for (int i = 0; i < s; i++)
    {
        cin >> dabba[i];
    }
    cout << "\nPress Enter to continue..............." << endl;
    cin.get();
    cin.get();
    mainmenu(dabba, s);
    return 0;
}

void mainmenu(int *arr, int size)
{
    system("cls");
    cout << "****************************************************************" << endl;
    cout << "*****************************Main Menu**************************" << endl;
    cout << "\t\t 1-Sortning" << endl;
    cout << "\t\t 2-Seaching" << endl;
    cout << "\t\t 3-Enter array again" << endl;
    cout << "\t\t 4-Exit" << endl;
    cout << "\t\tEnter your choice:   ";
    int dis;
    cin >> dis;
    switch (dis)
    {
    case 1:
        sort_menu(arr, size);
        break;
    case 2:
        search_menu(arr, size);
        break;
    case 3:
        main();
        break;
    case 4:
        exit(0);
    default:
        cout << "Invalid............" << endl;

        mainmenu(arr, size);
    }
}
void sort_menu(int *arr, int size)
{
    system("cls");
    cout << "****************************************************************" << endl;
    cout << "*****************************Sort Menu**************************" << endl;
    cout << "\t\t 1-Bubble Sort" << endl;
    cout << "\t\t 2-Selection Sort" << endl;
    cout << "\t\t 3-insertion Sort" << endl;
    cout << "\t\t 4-Back to MainMenu" << endl;
    cout << "\t\tEnter your choice:   ";
    int dis;
    cin >> dis;
    cout << "\n\n";
    switch (dis)
    {
    case 1:
        cout << "Sortning with bubble...............";
        bubble_sort(arr, size);

        break;
    case 2:
        cout << "Sortning with selection...............";
        selection_sort(arr, size);
        break;
    case 3:
        cout << "Sortning with insertion...............";
        insertion_sort(arr, size);
        break;
    case 4:
        mainmenu(arr, size);
        break;
    default:
        cout << "Invalid Choice........." << endl;

        sort_menu(arr, size);
    }
    display_array(arr, size);
    cout << "Press Enter to Mainmenu.......";
    cin.get();
    cin.get();
    mainmenu(arr, size);
}
void search_menu(int *arr, int size)
{
    system("cls");
    cout << "****************************************************************" << endl;
    cout << "*****************************Search Menu**************************" << endl;
    cout << "\t\t 1-Linear Search" << endl;
    cout << "\t\t 2-Binary Search" << endl;
    cout << "\t\t 3-Back to MainMenu" << endl;
    cout << "\t\tEnter your choice:   ";
    int dis;
    cin >> dis;
    cout << "\n\n";
    int n, index(-1);
    switch (dis)
    {
    case 1:
        cout << "Enter number you want to search:  ";
        cin >> n;
        cout << endl;
        cout << "Searching with Linear..............." << endl;
        index = linear_search(arr, size, n);
        break;
    case 2:
        cout << "Note: we will first sort your array then search." << endl;
        insertion_sort(arr, size);
        display_array(arr, size);
        cout << endl;
        cout << "Enter number you want to search:  ";
        cin >> n;
        cout << endl;
        cout << "Searching with binary..............." << endl;
        index = binary_search(arr, size, n);
        break;
    case 3:
        mainmenu(arr, size);
        break;
    default:
        cout << "Invalid Choice........." << endl;

        search_menu(arr, size);
    }
    sleep(2);
    if (index != -1)
    {
        cout << "Element " << n << " is at index " << index << endl;
    }
    else
    {
        cout << "Element cann't found......" << endl;
    }
    cout << "\n\n";
    cout << "Press Enter to Mainmenu.......";
    cin.get();
    cin.get();
    mainmenu(arr, size);
}

void display_array(int *arr, int size)
{
    cout << "\n\n";
    for (int i = 0; i < size; i++)
        cout << "\t" << arr[i];
    cout << "\n\n";
}
int linear_search(int *arr, int size, int searching_number)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == searching_number)
            return i;
    return -1;
}
int binary(int array[], int s , int e,  int search){
    if(s>e)return -1;
    int mid = (s+e)/2;
    if(array[mid] == search){
        return mid;
    }else if(array[mid] > search){
        if(s==e)return -1;
            return binary(array , s , mid , search);
    }else{
            return binary(array , mid+1 , e , search);
    }
}
int binary_search(int *arr, int size, int searching_number)
{
    return binary(arr , 0 , size-1 , searching_number);
}
int *bubble_sort(int *arr, int size)
{
    while (size > 1)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        size--;
    }
    return arr;
}
int *selection_sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}
int *insertion_sort(int *arr, int size)
{
    int j, key;
    for (int i = 1; i < size; i++)
    {
        j = i - 1;
        key = arr[i];
        while (arr[j] > key and j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    return arr;
}
