#include<bits/stdc++.h>
using namespace std;
int *findTwoElement(int *arr, int n) {
       int arr2[n+1]={0} , 
       long sum= 0;
        for(int i = 0; i < n;i++)
            arr2[arr[i]]++;
        int rep = 0;
        for(int i= 0; i<=n;i++)
            if(arr2[i]>1){rep =i;break;}
        for(int i = 0;i<n;i++)sum+=arr[i];
        int *arr3 =new int[2]{rep ,rep + (((n*(n+1))/2)-sum)};
        return arr3;
}


auto main()->int
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[n];
    

    auto arr2 = findTwoElement(arr, n);
    cout<<arr2[0]<<" "<<arr2[1]<<endl;
    

 

    return EXIT_SUCCESS;   
}