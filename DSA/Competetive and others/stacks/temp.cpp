#include<bits/stdc++.h>
#define Size 100
using namespace std;
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
    bool isEmpty()const{return top==-1;}
    bool isFull()const{return top>=Size-2;}
    void display()const{
        cout<<arr<<endl;
    }
    ~Stack(){}
};

class Evaluation{
    bool operand(char n){
        return ((n >= 'a' && n<='z') || (n >= 'A' && n<='Z') || (n>='0' && n<='9'));
    }
    int precedence(char n){
        if(n=='$'){
            return 3;
        }else if(n=='*' || n=='/'){
            return 2;
        }else if(n=='+' || n=='-'){
            return 1;
        }
        return 0;
    }
    public:
    string infixToPostfix(string infix){
        string postfix = "";
        Stack<char> s;
        for (int i = 0; i < infix.length(); i++)
        {
            if(operand(infix[i])) 
                postfix.push_back(infix[i]);
            else if(infix[i]==')'){
                while(s.getTop()!='(' && !s.isEmpty() )
                    postfix.push_back(s.pop());
                s.pop();
            }
            else if(precedence(infix[i]) <= precedence(s.getTop()) && s.getTop()!='(' && infix[i]!='(' && !s.isEmpty()){
                while(precedence(infix[i]) <= precedence(s.getTop()) && !s.isEmpty())
                    postfix.push_back(s.pop());
                s.push(infix[i]);
            }else{
                s.push(infix[i]);
            }
        }
        while (!s.isEmpty())
            postfix.push_back(s.pop());
        return postfix;
    }
    int eval(string postfix){
        Stack<int> s;
        int  first , second;
        for (int i = 0; i < postfix.length(); i++)
        {
            if(postfix[i]>='0' && postfix[i]<='9'){
                s.push(postfix[i] -'0');
            }else{
                first = s.pop();
                second = s.pop();
                s.push(solve(second , postfix[i] ,first));
            }
        }
        return s.getTop();
    }
    int solve(int i , char op  ,int j){
        switch (op)
        {
        case '$':
            return int(pow(i , j));
            
        case '+':
            return i+j;
            
        case '*':
            return i*j;
            
        case '/':
            return i/j;
            
        case '-':
            return i-j;
        }
    }
};