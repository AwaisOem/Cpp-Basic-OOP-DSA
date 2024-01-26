#include<bits/stdc++.h>
using namespace std;
const int Size = 10;
class Queue{
    int front , rear;
    int items[Size];
    public:
    Queue():front(-1) , rear(-1) , items{0}{}
    bool isFull (){return (rear>=Size-1);}
    bool isEmpty(){return (front==-1);}
    void enqueue(int val){
        if(isFull()){
            cout<<"Queue is Full"<<endl;
            return;
        }
        items[++rear] = val;
        if(front ==-1)
            front =0;
    }
    int dequeue(){
        int val = items[front];
        if(front == rear){
            front =rear = -1;
        }else{
            for (int i = front; i < rear; i++)
                items[i] = items[i+1];
            rear--;
        }
        return val;
    }
    void display(){
        for (int i = front; i <= rear; i++)
            cout<<items[i]<<" ";
        cout<<endl;
    }
};
auto main()->int
{
    Queue q;
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(8);
    q.enqueue(7);
    q.enqueue(3);
    q.enqueue(0);
    q.display();
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    q.display();


 return 0;   
}