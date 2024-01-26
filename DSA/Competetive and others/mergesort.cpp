#include<bits/stdc++.h>
using namespace std;
void merge(int *arr , int l,int m, int r){
    int i=l , j=m+1 , k=0 , temp[r];
    while (i<=m && j<=r)
    {
        if(arr[i] > arr[j])
            temp[k++] = arr[j++];
        else
            temp[k++] = arr[i++];
    }
    while (i<=m)
        temp[k++] = arr[i++];
    while (j<=r)
        temp[k++] = arr[j++];
    k=0;
    for (int y = l; y <=r; y++)
        arr[y] = temp[k++];
}
void mergeSort(int *arr , int l , int r){
    if(l>=r)return;
    int m = (l+r)/2;
    mergeSort(arr , l , m);
    mergeSort(arr , m+1 ,r);
    merge(arr,l,m,r);
}
auto main()->int
{
    int arr[]={7,8,5,4,2,0,1};
    mergeSort(arr, 0 , 6);
    for (int i = 0; i < 7; i++)
        cout<<arr[i]<<" ";   
}