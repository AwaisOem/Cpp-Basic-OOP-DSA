// Hey can you write code for merge sort with comments

#include <iostream>

using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}

void merge_sort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int myarray[30], num;
    cout<<"Enter the number of elements to be sorted: ";
    cin>>num;
    cout<<"Enter the elements to be sorted: ";
    for (int i = 0; i < num; i++)
    {
        cin>>myarray[i];
    }
    merge_sort(myarray, 0, num-1);
    cout<<"Sorted list is as follows: ";
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<" ";
    }
    return 0;
}


