#include<iostream>
using namespace std;
const int Size = 5;
class Stack{
    int top;
    int arr[Size];
    void error(int n)const{ 
        if(n<0)
            cout<<"Stack UnderFlow"<<endl;
        else if(n>0)
            cout<<"Stack OverFlow"<<endl;
        else
            cout<<"Stack Normal But Error"<<endl;
    }
    public:
    Stack():top(-1),arr{0}{}
    void push(int val){
        if(isFull()){error(1);return;}
        arr[++top] = val;
    }
    int peek(int n){
        if(n>top || (n<0 && !isEmpty())){
            cout<<"index out of bound"<<endl;
            return -1;
        }
        return arr[top-n];
    }
    int operator[](int n){
        if(n>top || (n<0 && !isEmpty())){
            cout<<"index out of bound"<<endl;
            return -1;
        }
        return arr[n];
    }
    int getTop(){
        if(!isEmpty())
            return arr[top];
        else return -1;
    }
    int pop(){
        if(isEmpty()){error(-1);return -1;}
        return arr[top--];
    }
    bool isEmpty()const{return top==-1;}
    bool isFull()const{return top>=Size-1;}
    void display()const{
        for (int i = top; i >= 0; i--)
        cout<<"["<<arr[i]<<"]-";
        cout<<endl;
    }
    ~Stack(){}
};

class NoDelQueue{
    int arr[Size],top,rear;
    public:
    NoDelQueue():top(-1),rear(-1),arr{0}{}
    void enqueue(int val){
        if(isFull())return;
        if(top ==-1)
            top = 0;
        arr[++rear] = val;
    }
    int dequeue(){
        if(isEmpty())
        {
            cout<<"Queue is Full"<<endl;
            return -1;
        }
        return arr[top++]; 
    }
    bool isFull(){return Size-1<=rear;}
    bool isEmpty(){return rear==-1;}
    void display(){
        for (int i = top; i <=rear; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};
class Queue{
    int arr[Size], rear;
    public:
    Queue():rear(-1),arr{0}{}
    void enqueue(int val){
        if(isFull())return;
        arr[++rear] = val;
    }
    int dequeue(){
        if(isEmpty())
        {
            cout<<"Queue is Full"<<endl;
            return -1;
        }
        int ret = arr[0];
        for (int i = 0; i < rear; i++)
            arr[i]=arr[i+1];
        rear--;
        return ret;
    }
    bool isFull(){return Size-1<=rear;}
    bool isEmpty(){return rear==-1;}
    void display(){
        for (int i = 0; i <=rear; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};
class CircularQueue{
    int arr[Size] , front , rear;
    void inc(int &n){
        n=(n+1)%Size;
    }
    public:
    CircularQueue():front(-1),arr{0},rear(-1){}
    void enqueue(int val){
        if(isFull())return;
        if(front==-1)front=0;
        inc(rear);
        arr[rear] = val;
    }
    int dequeue(){
        if(isEmpty())return -1;
        int ret = arr[front];
        if(front==rear)
        front = rear = -1;
        else
        inc(front);
        return ret;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return ((rear+1)%Size)==front;
    }
    void display(){
        int f = front;
        while(f!=rear){
            cout<<arr[f]<<" ";
            inc(f);
        }
        if(rear!=-1)
        cout<<arr[rear]<<endl;
    }
};

class Array{
    int *arr , size;
    void insertion(int arr[], int s){
        if (s<=0)return;
        int j , k;
        insertion(arr, s-1);
        k = arr[s];
        j = s-1;
        while ( j>=0 && k<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;    
    }
    int linear(int s,int val){
        if(val == arr[s]) return arr[s];
        if(s < 0) return -1;
        linear(s-1 , val);
    }
    void bubble(int n){
        if(n<=0)return;
        for (int k = 0; k<n-1; k++)
                if(arr[k] > arr[k+1])
                    swap(arr[k] , arr[k+1]);
        bubble(n-1);
    }
    void merge(int a[],int l,int r,int mid){
        int i=l,j=mid+1,k=0,a2[r+1];
        while (i<=mid && j<=r){
            if(a[i] > a[j])
                a2[k++] = a[j++];
            else
                a2[k++] = a[i++];
        }
        while (i<=mid)
            a2[k++] = a[i++];
        while (j<=r)
            a2[k++] = a[j++];
        k=0;i=l;
        while (i<=r)
            a[i++] = a2[k++];
    }
    void mergeSortFull(int a[] , int l , int r){
        if(l>=r)return;
        int mid = l + (r-l)/2;
        mergeSortFull(a , l  , mid);
        mergeSortFull(a ,mid+1,r);
        merge(a,l,r,mid);
    }
    public:
    Array(int s=0):size(s){arr=new int[s]{0};}
    void getArray(){
        cout<<"Enter Elements of array: ";
        for (int i = 0; i < size; i++)
        cin>>arr[i];
    }
    int getSize()const{return size;}
    void display()const{
        for (int i = 0; i < size; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    
    int linearSearch(int val){
        int f = linear(size-1  ,val);
        if(f==-1){
            cout<<"Not found"<<endl;
            return -1;
        }
        return f;
    }
    void bubbleByRecursion(){
        bubble(size);
    }
    void bubbleSort(){
        
        for(int i = size-1;i>=0;i--)
            for (int k = 0; k<i; k++)
                if(arr[k] > arr[k+1])
                    arr[k] = arr[k]+arr[k+1]-(arr[k+1] =arr[k]);
    }
    void insertionSort_v1(){
        int j , k;
        for (int i = 1; i < Size; i++)
        {
            k=arr[i];
            j = i-1;
            while ( j>=0 && k<arr[j])
                arr[j+1] = arr[j--];
            arr[j+1] = k;
        }
    }
    void insertionSort_v2(){
        for (int i = 1; i < Size; i++)
            for(int j = i; !(j<=0 || arr[j-1]<=arr[j]) ;j--)
                arr[j]=arr[j]+arr[j-1]-(arr[j-1]=arr[j]);
    }
    void insertionByRecursion(){
        insertion(arr,size-1);
    }
    void mergeSort(){
        mergeSortFull(arr,0,size-1);
    }
    void selectionSort(){
        for (int i = 0; i < size-1; i++)
        {
            int min = i;
            for (int j = i+1; j < size; j++)
                if(arr[j] < arr[min])
                    min = j;
            if (min!=i)
                swap(arr[min] ,arr[i]);
        }
        
    }
};
class OrderedArray{
    int *arr , size , curr;
    public:
    OrderedArray(int s = 0):curr(-1),size(s){arr= new int[s]{0};}
    void add(int val){
        if(isFull())return;
        int j=curr+1;
        for (int i = 0; i <=curr; i++)
            if(val < arr[i])
            {j = i;break;}
        for (int i = curr+1; i>j; i--)
            arr[i] = arr[i-1];
        arr[j] = val;
        curr++;
    }
    int search(int val)
    {
        int l = 0 , r =curr , mid;
        while (l<=r)
        {
            mid = l + (r-l)/2;
            if(arr[mid]==val)return mid;
            else if(arr[mid] > val)r = mid;
            else l =mid+1;
        }
        return -1;
    }
     void display()const{
        for (int i = 0; i<=curr; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    bool isFull()const{
        return curr==size-1;
    }
    bool isEmpty()const{
        return curr==-1;
    }
    bool remove(int index){
        if(index > curr || index < 0 || isEmpty()) return false;
        for (int i = index; i < curr; i++)
            arr[i] = arr[i+1];
        curr--;
        return true;
    }
}; 
int main()
{
    Array a(5);
    a.getArray();
    a.bubbleSort();
    a.display();
}