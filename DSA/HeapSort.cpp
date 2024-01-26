#include<bits/stdc++.h>
using namespace std;

int parent(int i){return (i-1)/2;}
int left(int i){return i*2+1;}
int right(int i){return i*2+2;}
bool isRightExist(int i , int size){return (right(i) < size);}
bool isLeftExist(int i , int size){return (left(i) < size);}
bool isLeaf(int i , int size){return !(isLeftExist(i,size) || isRightExist(i,size));}

void downMaxHeapify(int *A ,int i,int size){
    if(isLeaf(i , size))return;
    if(isRightExist(i,size) && (!isLeftExist(i , size) || A[left(i)] <= A[right(i)]) && A[right(i)] > A[i]){
        swap(A[right(i)] , A[i]);
        downMaxHeapify(A , right(i) , size);
    }else if(isLeftExist(i,size) && (!isRightExist(i , size) || A[left(i)] >= A[right(i)]) && A[left(i)] > A[i]){
        swap(A[left(i)] , A[i]);
        downMaxHeapify(A , left(i) , size);
    }
}
void BuildHeap(int *arr , int n)
{
    for(int i = n/2-1;i>=0;i--)
        downMaxHeapify( arr, i , n);
}
void HeapSort(int *arr ,int s)
{
    BuildHeap(arr,s);
    for(int i=s-1;i>=1;i--){
        swap(arr[i],arr[0]);
        downMaxHeapify(arr, 0 , i);
    }
}
auto main()->int
{
    int arr[]={96,2,3,4,5,4,234,23,41,2,13,1231};
    int size = sizeof(arr)/sizeof(arr[0]);
    HeapSort(arr , size);
    for(int i:arr)
        cout<<i<<" ";
    cout<<endl; 
    return EXIT_SUCCESS;   
}
// inplace O(nlogn) sort 