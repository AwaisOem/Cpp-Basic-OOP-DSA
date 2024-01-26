#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    class Node{
        public:
        int data;
        Node * next;
        Node(int d = 0):next(NULL),data(d){}
    }*tail;
    public:
    CircularQueue():tail(NULL){}
    void enqueue(int data){
        Node*newer = new Node(data);
        if(tail==NULL){
            tail = newer;
            tail->next = newer;
        }else{
            newer->next = tail->next;
            tail->next = newer;
            tail = newer;
        }
    }
    int dequeue(){
        if(tail==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else if(tail==tail->next){
            int data = tail->data;
            delete tail;
            tail = NULL;
            return data;
        }else{
            int data = tail->next->data;
            Node*temp = tail->next;
            tail->next = tail->next->next;
            delete temp;
            return data;
        }
    }
    void display(){
        if(tail==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node*temp = tail->next;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=tail->next);
        cout<<endl;
    }
    void deleteQueue(){
        if(tail==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node*temp = tail->next;
        do{
            tail->next = tail->next->next;
            delete temp;
            temp = tail->next;
        }while(temp!=tail->next);
        delete tail;
        tail = NULL;
    }
};

class CircularStack{
    class Node{
        public:
        int data;
        Node * next;
        Node(int d = 0):next(NULL),data(d){}
    }*tail;
    public:
    CircularStack():tail(NULL){}
    void push(int data){
        Node*newer = new Node(data);
        if(tail==NULL){
            tail = newer;
            tail->next = newer;
        }else{
            newer->next = tail->next;
            tail->next = newer;
        }
    }
    int pop(){
        if(tail==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }else if(tail==tail->next){
            int data = tail->data;
            delete tail;
            tail = NULL;
            return data;
        }else{
            int data = tail->next->data;
            Node*temp = tail->next;
            tail->next = tail->next->next;
            delete temp;
            return data;
        }
    }
    void display(){
        if(tail==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node*temp = tail->next;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=tail->next);
        cout<<endl;
    }
    ~CircularStack(){
        if(tail==NULL)return;
        Node*temp = tail->next;
        do{
            tail->next = tail->next->next;
            delete temp;
            temp = tail->next;
        }while(temp!=tail->next);
        delete tail;
        tail = NULL;
    }
};

class DoublyStack{
    class Node{
        public:
        int data;
        Node *next , *prev;
        Node(int d = 0):next(NULL),prev(NULL),data(d){}
    }*head;
    public:
    DoublyStack():head(NULL){}
    void push(int data){
        Node*newer = new Node(data);
        if(head==NULL){
            head = newer;
        }else{
            newer->next = head;
            head->prev = newer;
            head = newer;
        }
    }
    int pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }else{
            int data = head->data;
            Node*temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
            return data;
        }
    }
    void display(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node*temp = head;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=NULL);
        cout<<endl;
    }
    ~DoublyStack(){
        if(head==NULL)return;
        Node*temp = head;
        do{
            head = head->next;
            delete temp;
            temp = head;
        }while(temp!=NULL);
        delete head;
        head = NULL;
    }
};

class DoublyQueue{
    class Node{
        public:
        int data;
        Node *next , *prev;
        Node(int d = 0):data(d),next(NULL),prev(NULL){}
    }*head , *tail;
    public:
    DoublyQueue():head(NULL),tail(NULL){}
    void enqueue(int data){
        Node*newer = new Node(data);
        if(head==NULL){
            head = newer;
            tail = newer;
        }else{
            newer->prev = tail;
            tail->next = newer;
            tail = newer;
        }
    }
    int dequeue(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            int data = head->data;
            Node*temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
            return data;
        }
    }
    void display(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node*temp = head;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=NULL);
        cout<<endl;
    }
    ~DoublyQueue(){
        if(head==NULL)return;
        Node*temp = head;
        do{
            head = head->next;
            delete temp;
            temp = head;
        }while(temp!=NULL);
        delete head;
        head = NULL;
    }
};

class CircularLinkList{
    class Node{
        public:
        int data;
        Node *next;
        Node(int d = 0):data(d),next(NULL){}
    }*head;
    public:
    CircularLinkList():head(NULL){}
    void insert(int data){
        Node*newer = new Node(data);
        if(head==NULL){
            head = newer;
            head->next = head;
        }else{
            newer->next = head->next;
            head->next = newer;
            head = newer;
        }
    }
    void display(){
        if(head==NULL){
            cout<<"LinkList is empty"<<endl;
            return;
        }
        Node*temp = head->next;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=head->next);
        cout<<endl;
    }
    void concat(CircularLinkList &l){
        if(head==NULL){
            head = l.head;
            return;
        }
        if(l.head==NULL)return;
        Node*temp = head->next;
        head->next = l.head->next;
        l.head->next = temp;
        head=l.head;
        l.head=temp=NULL;
    }
    void split(CircularLinkList &l2, CircularLinkList &l1){
        if(head==NULL){
            cout<<"LinkList is empty"<<endl;
            return;
        }
        Node *slow = head->next , *fast = head->next;
        while(fast!=head && fast->next!=head){
            slow = slow->next;
            fast = fast->next->next;
        }
        l1.head = head;
        Node * temp = head->next;
        l2.head = slow;
        l1.head->next = l2.head->next;
        l2.head->next = temp;
        head=NULL;
    }
    ~CircularLinkList(){
        if(head==NULL)return;
        Node*temp = head->next;
        do{
            head->next = head->next->next;
            delete temp;
            temp = head->next;
        }while(temp!=head->next);
        delete head;
        head = NULL;
    }
};

auto main()->int
{
    CircularLinkList l;
    l.insert(4);
    l.insert(5);
    l.insert(6);
    l.insert(7);
    l.insert(8);

    CircularLinkList l1 , l2 , l3;
    l1.insert(9);
    l1.insert(10);
    l1.insert(11);
    l1.insert(12);
    l1.insert(13);

    l.concat(l1);
    l.display();
    l.split(l2,l3);
    l2.display();
    l3.display();
    



    return EXIT_SUCCESS;   
}