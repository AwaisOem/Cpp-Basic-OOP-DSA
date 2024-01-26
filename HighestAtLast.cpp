#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int arr[10];
for(int i=0; i<10; i++)
    cin>>arr[i];
for (int i = 0; i <10; i++)
    cout<<arr[i]<<",";
cout<<endl;
for (int i = 0; i <9; i++)
    if (arr[9]<arr[i])
    {
        int temp = arr[i];
        arr[i]=arr[9];
        arr[9]=temp;
    }
for (int i = 0; i <10; i++)
    cout<<arr[i]<<",";    
cout<<"\n";
return 0;   
}