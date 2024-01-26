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
void menu(){
    system("cls");
    cout<<"(1) push"<<endl;
    cout<<"(2) pop"<<endl;
    cout<<"(3) is Empty"<<endl;
    cout<<"(4) is Full"<<endl;
    cout<<"(5) peek"<<endl;
    cout<<"(6) change"<<endl;
    cout<<"(7) display"<<endl;
    cout<<"(8) exit"<<endl;
}
auto main()->int
{
    int si,choice,n,p;
    cout<<"Enter size of stack: ";
    cin>>si;
    Stack s(si);
    while (1){
        menu();
        cout<<"Enter your choice: ";
        cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter to push:   ";
            cin>>n;
            s.push(n);
        break;
        case 2:
            if(!s.isEmpty())
                cout<<s.pop()<<" poped"<<endl;
            else
                cout<<"Stack is empty"<<endl;
        break;
        case 3:
            cout<<((s.isEmpty()) ? "Yes":"No")<<endl;
        break;
        case 4:
            cout<<((s.isFull()) ? "Yes":"No")<<endl;
        break;
        case 5:
            cout<<"Enter position:   ";
            cin>>n;
            cout<<"At "<<n<<":"<<s.peek(n)<<endl;
        break;
        case 6:
            cout<<"Enter position:   ";
            cin>>p;
            cout<<"Enter New Val:   ";
            cin>>n;
            s.edit(p,n);
        break;
        case 7:
            s.display();
        break;
        case 8: exit(1);
        default: cout<<"Invalid choice"<<endl;
    }
    system("pause");
    }}