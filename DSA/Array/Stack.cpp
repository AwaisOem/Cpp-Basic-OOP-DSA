#include<bits/stdc++.h>
using namespace std;
#define SIZE 100
bool precedence(char  , char);
class Stack 
{
    char items[SIZE];
    int top;
    public:
    Stack()
    {
        top=-1;
    }
    char topStack()
    {
        if(!isEmpty() && top<SIZE)
        {
            return items[top];
        }else
        {
            cout<<"Index invalid"<<endl;
        }
    }
    void push(char val)
    {
        if(top>=SIZE){
            cout<<"Stack OverFlow"<<endl;
        }
        else
        {
            items[++top] = val;
        }
    }
    char pop()
    {
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            exit(1);
        }
        else return items[top--];
    }
    bool isEmpty()
    {
        return (top==-1);
    }
};





main()
{
    Stack a;
    string s , d;
    cout<<"Enter your Expression :";
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] >='A' && s[i] <='Z')
        {
            d.push_back(s[i]);
        }
        else{
            while (!a.isEmpty() && precedence(a.topStack() , s[i]))
            {
                d.push_back(a.pop());
            }
            if(a.isEmpty() || s[i]!=')')
            {
                a.push(s[i]);
            }
            else a.pop();
        }
    }
    while (!a.isEmpty())
    {
        d.push_back(a.pop());
    }
    
    cout<<"Postfix expression is "<<d;
    return 0;
}
bool precedence(char a ,char b)
{
    if(a=='(' || b=='('){
        return false;
    }
    if(b==')')
    {
        return true;
    }
    if(a=='$'){
        return true;
    }
    if(b=='$'){
        return false;
    }
    if((a=='*' || a=='/') && (b=='*' || b=='/'))
    {
        return true;
    }
    return ((a=='+' || a=='-') && (b=='+' || b=='-'));
}