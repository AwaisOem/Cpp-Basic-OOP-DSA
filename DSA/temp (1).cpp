// write a code for converting infix to postfix

#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;
    for (int i = 0; i < infix.length(); i++) {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z')) {
            postfix += infix[i];
        } else if (infix[i] == '(') {
            s.push(infix[i]);
        } else if (infix[i] == ')') {
            while ((s.top() != '(') && (!s.empty())) {
                char temp = s.top();
                postfix += temp;
                s.pop();
            }
            if (s.top() == '(') {
                s.pop();
            }
        } else if (isOperator(infix[i])) {
            if (s.empty()) {
                s.push(infix[i]);
            } else {
                if (precedence(infix[i]) > precedence(s.top())) {
                    s.push(infix[i]);
                } else if ((precedence(infix[i]) == precedence(s.top())) && (infix[i] == '^')) {
                    while ((precedence(infix[i]) == precedence(s.top())) && (infix[i] == '^')) {
                        char temp = s.top();
                        postfix += temp;
                        s.pop();
                    }
                    s.push(infix[i]);
                } else if (precedence(infix[i]) == precedence(s.top())) {
                    s.push(infix[i]);
                } else {
                    while ((!s.empty()) && (precedence(infix[i]) < precedence(s.top()))) {
                        char temp = s.top();
                        postfix += temp;
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    }
    while (!s.empty()) {
        char temp = s.top();
        postfix += temp;
        s.pop();
    }
    return postfix;
}

main() {
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    cout << infixToPostfix(infix) << endl;
    return 0;
}

