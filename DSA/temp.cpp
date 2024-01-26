#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *arr , top , size;
    public:
    Stack(int s):top(-1),size(s){arr = new int[s]; for(int i=0;i<s;i++) arr[i]=0; }
    void push(int val){
        if(isFull())
            cout<<"Stack is full"<<endl;
        else arr[++top] = val;
    }
    int pop(){
        return arr[top--];
    }
    int operator [](int n){
        if(isEmpty())
            cout<<"Stack is empty"<<endl;
        else if(n>top)
            cout<<"Invalid position"<<endl;
        else return arr[n];
    } 
    int peek(int pos){
        if(isEmpty())
            cout<<"Stack is empty"<<endl;
        else if(pos>top + 1)
            cout<<"Invalid position"<<endl;
        else return arr[top-pos+1];
    }
    void edit(int pos , int val){
        if(isEmpty())
            cout<<"Stack is empty"<<endl;
        else if(pos > top)
            cout<<"Invalid position"<<endl;
        else{
            arr[pos] = val;
            cout<<"Changed Successfully"<<endl;
        }
    }
    int Top(){
        return top;
    }
    bool isFull(){
        return (top==size-1);
    }
    bool isEmpty(){return (top==-1);}
    void display(){
        for (int i = top; i >= 0; i--)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};



auto main()->int
{
    Stack s(5) , s1(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    while(!s.isEmpty())
        s1.push(s.pop());
    s1.display();
    int max  ,min;
    max=min=s1[0];
    for(int i=0;i<=s1.Top();i++){
        if(s1[i] > max){
            max = s1[i];
        }else if(s1[i] < min){
            min = s1[i];
        }
    }
    cout<<max<<"\t"<<min<<endl;
    return EXIT_FAILURE;   
}