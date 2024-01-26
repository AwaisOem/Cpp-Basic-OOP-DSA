#include<iostream>
using namespace std;
void newEvenArray(int arr1[] ,int arr2[], int des[] , int ,int,int&);
int main(){
    int arr[10] , size=0;
    newEvenArray(new int[4]{2,6,11,16},new int[8]{1,2,4,8,9,13,18,21},arr,4,8,size);
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    return 0;
}
void newEvenArray(int arr1[] ,int arr2[], int des[] , int l1,int l2,int &size){
    int i=0 , j=0 , k=0;
    while (i<l1 && j<l2)
    {
        if(arr1[i]%2==0 && arr2[j]%2==0){

            if(arr1[i] > arr2[j])
                des[k++] = arr2[j++];
            else
                des[k++] = arr1[i++];
        }
        else if(arr1[i]%2!=0){
            i++;
        }
        else if(arr2[j]%2!=0){
            j++;
        }
    }
    while (i<l1)
    {
        if(arr1[i]%2==0)
            des[k++] = arr1[i];
        i++; //n
    }
    while (j<l2)
    {
        if(arr2[j]%2==0)
            des[k++] = arr2[j];
        j++; //n
    }
    size = k;
}