#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next , *prev;
    Node(int d= 0):data(d) , next(NULL) , prev(NULL){}
};
class DoublyLinkList{
    Node * head , *tail;
    void utilBWH(Node * n){
        if(n==NULL)return;
        utilBWH(n->next);
        cout<<n->data<<" ";
    }
    public:
    DoublyLinkList():head(NULL) , tail(NULL){}
    void insertAtHead(int data){
        Node * newer =new Node(data);
        if(head==NULL && tail==NULL){
            head = tail = newer;
            return;
        }
        newer->next  = head;
        head->prev = newer;
        head = newer;
    }
    void insertAtTail(int data){
        Node * newer = new Node(data);
        if(head==NULL && tail==NULL){
            head = tail = newer;
            return;
        }
        newer->prev=tail;
        tail->next  = newer;
        tail = newer;
    }
    void displayForward(){
        for(Node*t=head;t!=NULL;t=t->next)
            cout<<t->data<<" ";
        cout<<endl;
    }
    void displayBackward(){
        for(Node*t=tail;t!=NULL;t=t->prev)
            cout<<t->data<<" ";
        cout<<endl;
    }
    void displayBackwardWithHead(){
        utilBWH(head);
        cout<<endl;
    }
    void insert(int data , int position){
        if(position==0){insertAtHead(data);return;}
        Node *t=head,*newer  = new Node(data);
        int i = 0;
        while(t->next!=NULL && i++<position-1)
            t=t->next;
        newer->next=t->next;
        if(t->next!=NULL)
            t->next->prev = newer;
        else tail = newer;
        newer->prev=t;
        t->next=newer;
    }
    void remove(int position){
        Node *t = head;
        if(position==0){
            head = head->next;
            head->prev = NULL;
            delete t;
            return;
        }
        int i = 0;
        while(t->next!=NULL && i++<position-1)
            t=t->next;
        if(t->next==NULL)return;
        Node*t2=t->next;
        t2->next->prev = t;
        t->next = t2->next;
        delete t2;
    }
    bool search(int sv){
        for(Node*t=tail;t!=NULL;t=t->prev)
            if(t->data == sv)
                return true;
        return false;
    }
    ~DoublyLinkList(){
        Node*temp;
        while (head!=NULL)
        {
            temp = head;
            head= head->next;
            delete temp;
        }
    }
};
auto main()->int
{
    DoublyLinkList d;
    d.insertAtHead(5);
    d.insertAtHead(4);
    d.insertAtHead(3);
    d.insertAtHead(2);
    d.insertAtHead(1);
    d.insertAtTail(6);
    d.insertAtTail(7);
    d.insertAtTail(8);
    d.insertAtTail(9);
    d.insertAtTail(10);
    d.insert(55,4);
    d.displayForward();
    d.remove(0);
    d.displayBackward();
    return EXIT_SUCCESS;   
}