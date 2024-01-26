#include<bits/stdc++.h>
using namespace std;
class Stack;
class Node{
    int val;
    Node* next;
    friend class Stack;
    public:
    Node(int v = 0):val(v){next  = NULL;}
};
class Stack{
    Node*head;
    public:
    Stack()
    {
        head = NULL;
    }
    void push(int val)
    {
        Node *n  = new Node(val);
        if(head ==NULL){
            head = n;
            return; 
        }
        n->next = head;
        head = n;
    }
    int pop()
    {
        if(isEmpty()) {
            cout<<"Error"<<endl;
            exit(1);
        }
        int val = head->val;
        head = head->next;
        return val;
    }
    void show()
    {
        Node * t = head;
        while(1)
        {
            cout<<t->val<<"-> ";
            if(t->next == NULL)break;
            t=t->next;
        }
        delete t;
        cout<<endl;
    }
    bool isEmpty(){
        return (head==NULL);
    }
    ~Stack(){
        delete head;
    }
};



auto main()->int
{
    Stack s1;
    s1.push(4);
    s1.push(8);
    s1.push(7);
    s1.push(2);
    s1.push(1);
    s1.push(4);
    s1.push(5);
    s1.push(0);

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;



 return 0;   
}