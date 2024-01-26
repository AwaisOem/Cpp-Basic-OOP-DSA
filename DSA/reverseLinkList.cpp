#include<bits/stdc++.h>
using namespace std;

class LinkList{
    class Node{
        public:
        int data; Node*next;
        Node(int d=0):data(d),next(NULL){}
    }*head;
    public:
    LinkList():head(NULL){}
    void insertAtHead(int d){
        Node*newer = new Node(d);
        if(head==NULL){
            head = newer;
        }else{
            newer->next = head;
            head=newer;
        }
    }
    void insertAtTail(int d){
        Node*newer = new Node(d);
        if(head==NULL){
            head = newer;
        }else{
            Node*temp = head;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next = newer;
        }
    }
    void display(){
        for(Node*temp = head;temp!=NULL;temp=temp->next)
            cout<<temp->data<<" ";
        cout<<endl;
    }
    void reverse(){
        utilRev(head,head);
    }
    Node* utilRev(Node*n,Node*c){
        if(n->next==NULL){
            head = n;
            return n;
        }
        Node* t = utilRev(n->next,c);
        t->next = n;
        if(c==n)
            return n->next=NULL;
        return n;
    }
    Node* utilRev(Node*n){
        if(n==NULL)return NULL;
        if(n->next==NULL){
            head = n;
            return n;
        }
        Node* t = utilRev(n->next);
        t->next = n;
        n->next=NULL;
        return n;
    }
};
int main()
{
    LinkList l;
    l.insertAtHead(1);
    l.insertAtHead(2);
    l.insertAtHead(3);
    l.insertAtHead(4);
    l.insertAtHead(5);
    l.insertAtTail(6);
    l.insertAtTail(7);
    l.insertAtTail(8);
    l.insertAtTail(9);
    l.insertAtTail(10);
    l.display();
    l.reverse();
    l.display();



    return 0;
}