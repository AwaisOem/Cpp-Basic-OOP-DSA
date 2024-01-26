#include<bits/stdc++.h>
using namespace std;
#define Size 100
long fab(int n){
    if(n<=1)
        return 0;
    else if(n==2)
        return 1;
    return fab(n-1) + fab(n-2);
}
template<typename T>
class Stack{
    int top;
    T arr[Size];
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
    void push(T val){
        if(isFull()){error(1);return;}
        arr[++top] = val;
    }
    T peek(int n){
        if(n>top || (n<0 && !isEmpty())){
            cout<<"index out of bound"<<endl;
            return 0;
        }
        return arr[top-n];
    }
    T operator[](int n){
        if(n>top || (n<0 && !isEmpty())){
            cout<<"index out of bound"<<endl;
            return 0;
        }
        return arr[n];
    }
    T getTop(){
        if(!isEmpty())
            return arr[top];
        else return 0;
    }
    T pop(){
        if(isEmpty()){error(-1);return 0;}
        return arr[top--];
    }
    int length(){
        return top+1;
    }
    bool isEmpty()const{return top==-1;}
    bool isFull()const{return top>=Size-2;}
    void display()const{
        cout<<arr<<endl;
    }
    ~Stack(){}
};
void selection(int arr[] , int n){
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            (arr[i] > arr[j]) ? arr[i] = arr[i]+arr[j]-(arr[j] = arr[i]):0;
}
void bubble(int arr[] , int n){
    for (int i = n-1; i>=0; i--)
        for (int j = 0; j<i; j++)
            (arr[j] > arr[j+1]) ? (arr[j] = arr[j+1]+arr[j]-(arr[j+1] = arr[j])):0;
}
void insertion(int arr[] , int n){
    for (int i = 1; i<n; i++)
        for (int j = i; j>0 && arr[j]<arr[j-1]; j--)
            arr[j] = arr[j-1]+arr[j]-(arr[j-1] = arr[j]);
}
 void tower(int n , char s, char a , char d){
    if(n==1){
        cout<<"Move "<<s<<" to "<<d<<endl;
        return;
    } 
    tower(n-1 , s , d , a);
    cout<<"Move "<<s<<" to "<<d<<endl;
    tower(n-1 , a , s , d);
}
int evenInArray(int arr[] , int s){
    if(s<=0)return 0;
    if(arr[s-1]%2==0) return 1+evenInArray(arr, s-1);
    return evenInArray(arr, s-1);
}
void saydigit(int n , string arr[]){
    if(n==0)return;
    saydigit(n/10 , arr);
    cout<<arr[n%10]<<" ";
}
bool isSorted(int arr[] , int n){
    if(n==0 || n==1)return true;
    else if (arr[0] > arr[1])return false;
    else return isSorted(arr+1 , n-1);
}
auto main()->int
{
    // string arr[]= { "zero","one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    // saydigit(412 , arr);
    // cout<<isSorted(new int[5]{1,2,3,5,4} , 5)<<endl;
}