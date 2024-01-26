#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    int priority;
    Node* next;
    Node(int d = 0 , int p  = 0){
        data= d;
        priority = p;
        next = NULL;
    }
};

class CQ{
    protected:
    Node *head;
    public:
    CQ(){
        head = NULL;
    }
    void enqueue(int val){
        Node *newer = new Node(val);
        if(head == NULL){
            head = newer;
            head->next = newer;
        }
        else
        {
            newer->next = head->next;
            head->next = newer;
            head = newer;
        }
    }
    int dequeue(){
        if(head == NULL) return -1;
        int t = 0;
        if(head==head->next) 
        {
            t = head->data;
            delete head;
            head=NULL;
            return t;
        }
        Node * temp = head->next;
        t = temp->data;
        head->next  = temp->next;
        delete temp;
        return t;
    }
    void display(){
        if(head!=NULL){
        Node * temp =  head->next;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=head->next);
        }
        cout<<endl;
    }
};

// less is less more is more
class PCQ : public CQ{
    public:
    PCQ():CQ(){}
    void enqueue(int val , int p)
    {
        Node * newer = new Node(val , p);
        if(head==NULL){
            head = newer;
            head->next = newer;
            return;
        }
        if(head == head->next){
            newer->next = head;
            head->next = newer;
            if(head->priority > p)
                head = newer;
            return;
        }
        Node * temp  = head;
        bool isEnd = false;
        while(temp->next->priority > p)
        {
            temp = temp->next;
            if(temp == head){isEnd = true;break;}
        }
        newer->next = temp->next;
        temp->next = newer;
        (isEnd)? head = newer:0;
    }
};
auto main()->int
{
    PCQ c;
    c.enqueue(1,30);
    c.enqueue(2,20);
    c.enqueue(45,10);
    c.enqueue(3,56);
    c.enqueue(4,23);
    c.enqueue(5,12);
    c.enqueue(6,25);
    c.enqueue(7,67);
    c.enqueue(8,1);
    c.enqueue(9,3);
    c.display();

    return EXIT_FAILURE;   
}