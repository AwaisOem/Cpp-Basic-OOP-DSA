// generate a code for infix to postfix and evaluate it using stack class

#include <iostream>
#include <string>

using namespace std;

class Stack {
    int top;
    int size;
    char *s;
public:
    Stack(int size);
    ~Stack();
    void push(char x);
    char pop();
    char peek(int index);
    int isEmpty();
    int isFull();
    char stackTop();
    void display();
};

Stack::Stack(int size) {
    this->size = size;
    top = -1;
    s = new char[size];
}

Stack::~Stack() {
    delete []s;
}

void Stack::push(char x) {
    if (isFull())
        cout << "Stack Overflow" << endl;
    else
        s[++top] = x;
}

char Stack::pop() {
    char x = -1;
    if (isEmpty())
        cout << "Stack Underflow" << endl;
    else
        x = s[top--];
    return x;
}

char Stack::peek(int index) {
    char x = -1;
    if (top-index+1 < 0)
        cout << "Invalid Index" << endl;
    else
        x = s[top-index+1];
    return x;
}

int Stack::isEmpty() {
    if (top == -1)
        return 1;
    return 0;
}

int Stack::isFull() {
    if (top == size-1)
        return 1;
    return 0;
}

char Stack::stackTop() {
    if (isEmpty())
        return -1;
    return s[top];
}

void Stack::display() {
    for (int i=top; i>=0; i--)
        cout << s[i] << " ";
    cout << endl;
}

int isOperand(char x) {
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;
}

int pre(char x) {
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return 0;
}

string infixToPostfix(string infix) {
    Stack stk(infix.length());
    string postfix;
    for (int i=0; i<infix.length(); i++) {
        if (isOperand(infix[i]))
            postfix += infix[i];
        else {
            if (pre(infix[i]) > pre(stk.stackTop()))
                stk.push(infix[i]);
            else {
                while (pre(infix[i]) <= pre(stk.stackTop()) && !stk.isEmpty())
                    postfix += stk.pop();
                stk.push(infix[i]);
            }
        }
    }
    while (!stk.isEmpty())
        postfix += stk.pop();
    return postfix;
}

int evaluate(string postfix) {
    Stack stk(postfix.length());
    int x1, x2, r;
    for (int i=0; i<postfix.length(); i++) {
        if (isOperand(postfix[i]))
            stk.push(postfix[i]-'0');
        else {
            x2 = stk.pop();
            x1 = stk.pop();
            switch (postfix[i]) {
                case '+': r = x1 + x2; break;
                case '-': r = x1 - x2; break;
                case '*': r = x1 * x2; break;
                case '/': r = x1 / x2; break;
            }
            stk.push(r);
        }
    }
    return stk.pop();
}

int main() {
    string infix = "2*3+5/6*4+8";
    cout << infixToPostfix(infix) << endl;
    cout << evaluate(infixToPostfix(infix)) << endl;
    return 0;
}


