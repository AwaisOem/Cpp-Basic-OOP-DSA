#include<iostream>
#include<iomanip>
#include<unistd.h>
using namespace std;
int* selection_sort_awaisversion(int*,int);
int* bubble_sort(int*,int);
int* count_sort(int*, int);
int* selection_sort(int*,int);
int* insertion_sort(int* ,int);
int binary_search(int*,int,int);
int linear_search(int*,int,int);
void mainmenu(int*,int);
void search_menu(int*,int);
void sort_menu(int*,int);
void display_array(int*,int);






int main(){
    system("cls");
int s;
cout<<"Enter size of array:       ";
cin>>s;
cout<<"Enter Elements in array: "<<endl;
int dabba[s];
for (int i = 0; i <s; i++)
{
    cin>>dabba[i];
}
cout<<"\nPress Enter to continue..............."<<endl;
cin.get();
cin.get();
mainmenu(dabba,s);
return 0;   }

void mainmenu(int*arr,int size){
    system("cls");
    cout<<"****************************************************************"<<endl;
    cout<<"*****************************Main Menu**************************"<<endl;
    cout<<"\t\t 1-Sortning"<<endl;
    cout<<"\t\t 2-Seaching"<<endl;
    cout<<"\t\t 3-Enter array again"<<endl;
    cout<<"\t\t 4-Exit"<<endl;
    cout<<"\t\tEnter your choice:   ";
    int dis;
    cin>>dis;
    switch (dis)
    {
    case 1: sort_menu(arr,size);
        break;
    case 2: search_menu(arr,size);
        break;
    case 3: main();
        break;
    case 4:exit(0);
    default:cout<<"Invalid............"<<endl;
    sleep(1);
    mainmenu(arr,size);
    }    
}
void sort_menu(int*arr,int size){
    system("cls");
    cout<<"****************************************************************"<<endl;
    cout<<"*****************************Sort Menu**************************"<<endl;
    cout<<"\t\t 1-Bubble Sort"<<endl;
    cout<<"\t\t 2-Selection Sort"<<endl;
    cout<<"\t\t 3-insertion Sort"<<endl;
    cout<<"\t\t 4-Selection sort 0.5 version"<<endl;
    cout<<"\t\t 5-Merge Sort"<<endl;
    cout<<"\t\t 6-Quick Sort"<<endl;
    cout<<"\t\t 7-Count Sort"<<endl;
    cout<<"\t\t 8-Back to MainMenu"<<endl;
    cout<<"\t\tEnter your choice:   ";
    int dis;
    cin>>dis;
    cout<<"\n\n";
    switch (dis)
    {
    case 1: cout<<"Sortning with bubble...............";
        bubble_sort(arr,size);
        
        break;
    case 2: cout<<"Sortning with selection...............";
        selection_sort(arr,size);
        break;
    case 3: cout<<"Sortning with insertion...............";
        insertion_sort(arr,size);
        break;
    case 4: cout<<"Sortning with selection 0.5...............";
        selection_sort_awaisversion(arr,size);
        break;
    case 5:
    case 6:cout<<"THese methods not uploaded yet....";
        break;
    case 7: cout<<"Sortning with Count...............";
        count_sort(arr,size);
        break;

    case 8:  mainmenu(arr,size);break;
        default: cout<<"Invalid Choice........."<<endl;
        sleep(1);
        sort_menu(arr,size);
    }    
    sleep(4);
        display_array(arr,size);
    cout<<"Press Enter to Mainmenu.......";
    cin.get();
    cin.get();
    mainmenu(arr,size);
}
void search_menu(int*arr,int size){
system("cls");
    cout<<"****************************************************************"<<endl;
    cout<<"*****************************Search Menu**************************"<<endl;
    cout<<"\t\t 1-Linear Search"<<endl;
    cout<<"\t\t 2-Binary Search"<<endl;
    cout<<"\t\t 3-Back to MainMenu"<<endl;
    cout<<"\t\tEnter your choice:   ";
    int dis;
    cin>>dis;
    cout<<"\n\n";
    int n,index(-1);
switch (dis)
{
  case 1:  cout<<"Enter number you want to search:  ";
    cin>>n;
    cout<<endl;
  cout<<"Searching with Linear..............."<<endl;
        index=linear_search(arr,size,n);
        break;
  case 2:  cout<<"Note: we will first sort your array then search."<<endl;
    insertion_sort(arr,size);
    display_array(arr,size);
    cout<<endl;
   cout<<"Enter number you want to search:  ";
    cin>>n;
    cout<<endl;
  cout<<"Searching with binary..............."<<endl;
       index=binary_search(arr,size,n);
        break;
case 3:  mainmenu(arr,size);break;
  default: cout<<"Invalid Choice........."<<endl;
  sleep(1);
  search_menu(arr,size);
}
 sleep(2);
 if (index!=-1)
 {
      cout<<"Element "<<n<<" is at index "<<index<<endl;
 }else{
     cout<<"Element cann't found......"<<endl;
 }
    cout<<"\n\n";
    cout<<"Press Enter to Mainmenu.......";
    cin.get();
    cin.get();
    mainmenu(arr,size);
}





void display_array(int* arr,int size){
    cout<<"\n\n";
    for (int i = 0; i < size; i++)
{
    cout<<"\t"<<arr[i];
}
cout<<"\n\n";
}
int linear_search(int* arr,int size,int searching_number){
    int index(-1);
    for (int i = 0; i <size; i++)
    {   if (arr[i]==searching_number)
        {
            index=i;
            break;
        }   
    }
    return index;
}
int binary_search(int* arr,int size,int searching_number){
  

    int s(0),e(size-1),mid,index(-1);
    while (true)
    {
        if (s>e)
        {
            break;
        }
        mid=(s+e)/2;
        if (arr[mid]==searching_number)
        {
            index=mid;break;
        }
        if (arr[mid]>searching_number)
        {
            e=mid-1;
        }
        if (arr[mid]<searching_number)
        {
            s=mid+1;
        }
    }
return index;
}
int* selection_sort_awaisversion(int arr[],int size){
 for (int i = 0; i < size; i++)
    {for (int j =0; j <size; j++)
        {if (arr[i]<arr[j])
            {int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }}}
    return arr;
}
int* bubble_sort(int* arr,int size){
while (size>1)
{
    for (int  i = 0; i <size-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        
    }
    size--;
}
return arr;
}
int* selection_sort(int* arr,int size){
    for (int i = 0; i <size-1; i++)
    {
        for (int j=i+1; j<size; j++)
        {
          if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;}
        }   
    }
return arr;
}
int* insertion_sort(int* arr,int size){
    int j,key;
    for (int i = 1; i <size; i++){
        j=i-1;
        key=arr[i];
        while (arr[j]>key and j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    

return arr;

}
int* count_sort(int* arr, int n){
    int k = arr[0];
    for(int i = 0; i < n; i++){
        k = max(k, arr[i]);
    }
    int count[k] = {0};
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    for(int i = 1; i <= k; i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }
    return arr;
}