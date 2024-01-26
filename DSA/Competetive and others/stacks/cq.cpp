#include<bits/stdc++.h>
using namespace std;
#define Size 10
class CircularQueue{
    int arr[Size] , front , rear;
    void inc(int &n){
        n=(n+1)%Size;
    }
    public:
    CircularQueue():front(-1),arr{0},rear(-1){}
    void enqueue(int val){
        if(isFull())return;
        if(front==-1)front=0;
        inc(rear);
        arr[rear] = val;
    }
    int dequeue(){
        if(isEmpty())return -1;
        int ret = arr[front];
        if(front==rear)
        front = rear = -1;
        else
        inc(front);
        return ret;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return ((rear+1)%Size)==front;
    }
    void display(){
        int f = front;
        while(f!=rear){
            cout<<arr[f]<<" ";
            inc(f);
        }
        if(rear!=-1)
        cout<<arr[rear]<<endl;
    }
    void evenOddCopy(CircularQueue & q1 ,CircularQueue & q2){
        int f = front;
        while(f!=rear){
            if(arr[f]%2==0)
                q1.enqueue(arr[f]);
            else
                q2.enqueue(arr[f]);
            inc(f);
        }
        if(rear!=-1)
        {
            if(arr[rear]%2==0)
                q1.enqueue(arr[rear]);
            else
                q2.enqueue(arr[rear]);
        }
    }
};




auto main()->int
{
    CircularQueue q , q1,q2;
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(-7);
    q.enqueue(8);
    q.enqueue(-4);
    q.enqueue(11);
    q.enqueue(6);
    q.enqueue(2);
    q.evenOddCopy(q1,q2);
    q.display();
    q1.display();
    q2.display();


 return 0;   
}