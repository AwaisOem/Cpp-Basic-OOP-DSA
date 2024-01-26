#include<iostream>
#include<iomanip>
using namespace std;
int main(){

        cout<<"Enter the number of element you want:";
        int n;
        cin>>n;
        int arr[n];
        cout<<"Enter the array";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
int temp;

        for (int j = 0; j < n; j++)
        {
            for (int k = 1; k <n; k++)
            {
                if (j==0)
                {
                    if (arr[0]>arr[k])
                    {
                        n=arr[0];
                        arr[0]=arr[k];
                        arr[k]=n;
                    }
                        continue;
                }
                if(arr[k]>arr[j]){
                    temp=arr[j];
                    arr[j]=arr[k];
                    arr[k]=temp;
                }
            }
        }
cout<<"\n\n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }





return 0;   
}