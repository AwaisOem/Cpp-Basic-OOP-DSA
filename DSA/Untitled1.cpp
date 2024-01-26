#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> i;
    public:
    void push(int d){
        queue<int> j;
        j.push(d);
         while(!i.empty()){
            j.push(i.front());
            i.pop();
        }
        i=j;
        j=queue<int>();
    }
    int pop(){
        int t = i.front();
        i.pop();
        return t;
    }
    int top(){
        return i.front();
    } 
    void display(){
        queue<int> h(i);
        while (!h.empty())
        {
            cout<<h.front()<<" ";
            h.pop();
        }
        cout<<endl;
    }
};
auto main()->int
{
    Stack r;
    r.push(4);
    r.push(7);
    r.push(8);
    r.push(6);
    r.push(4);
    r.display();
    cout<<r.pop()<<endl;
    r.display();
    r.push(9);
    r.display();
    return EXIT_SUCCESS;   
}


