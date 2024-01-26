#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}





// 2 3 5 6 8 

int min;
for(int i=0;i<n-1;i++){
    min=i; //0
    for(int j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min=j;
        }

    }
    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}














for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
 return 0;   
}