#include<bits/stdc++.h>
using namespace std;


class Stack{
    char *st;
    int size;
    int top;
    public:
    Stack(int s):top(-1),size(s){st  =  new char[s];}
    void push(char val){
        if(isFull())
            cout<<"Stack is full"<<endl;
        else st[++top] = val;
    }
    bool isFull(){
        return (top==size-1);
    }
    bool isEmpty(){
        return (top==-1);
    }
    char pop(){
        return st[top--];
    }
    char peek(){
        return st[top];
    }
};

int presedence(char c){
    if(c=='$')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else return -1;
}

bool isOperand(char c){
    return ((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'));
}
string itp(string infix){
    string postfix = "";
    Stack s(infix.length());
    for (int i = 0; i < infix.length(); i++)
    {
        if(isOperand(infix[i])){
            postfix.push_back(infix[i]);
        }else if(infix[i] =='('){
            s.push(infix[i]);
        }
        else if(infix[i]==')'){
            while (!s.isEmpty() && s.peek()!='(')
                postfix.push_back(s.pop());
            if(s.peek()=='(')
                s.pop();
        }
        else if(presedence(infix[i]) < presedence(s.peek())){
            while (!s.isEmpty() && presedence(infix[i]) < presedence(s.peek()))
                postfix.push_back(s.pop());
        }
        else{
            s.push(infix[i]);
        }
    }
    while (!s.isEmpty())
        postfix.push_back(s.pop());
    return postfix;
}

auto main()->int
{
    string infix;
    cout<<"Enter infix expression: ";
    cin>>infix;
    cout<<itp(infix)<<endl;
}
