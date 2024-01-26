#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node{
    public:
    Node* next;
    T data;
    Node()
    {
        next = NULL;
    }
    Node(T d)
    {
        data  =  d;
        next = NULL;
    }
    Node(const char* d)
    {
        strcpy(data,d);
        next = NULL;
    }
};
template<typename T>
class List{
    Node<T>* head;
    int size;
    public:
    List():size(0) 
    {  
        head = NULL;
    }
    int length(){return size;}
    T operator [](int v){
        if(v  < 0 ||  v >= size){cout<<"Index not found"; exit(1);}
        Node<T>*temp = head; 
        for (int i = 0; i < v; i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }
    void insertAtposition(int pos , T val)
    {
        if(pos < 0)
        {
            insertAtHead(val);
        }
        else if(pos >= size){
            insertAtTail(val);
        }
        else{
            Node<T> * newN = new Node<T>(val);
            Node<T> *temp = head;
            int i = 0;
            while (temp->next !=NULL && i < pos-1) 
            {
                
                temp = temp->next;
                i++;
            }
            newN->next = temp->next;
            temp->next  = newN;
        }
        size++;
    }
    void insertAtHead(T c)
    {
        if(head == NULL)
        {
            head =new Node<T>(c);
        }
        else
        {
            Node<T> * temp  = new Node<T>(c);
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtTail(T c)
    {
        if(head == NULL )
        {
            insertAtHead(c);
        }
        else{
            Node<T> *temp = head;
            while (temp->next !=NULL)
                temp = temp->next;
            Node<T> * newN  = new Node<T>(c); 
            temp->next = newN;
        }
        size++;
    }
    void display()
    {
        Node<T> *temp = head; 
        while (temp !=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }
};

auto main()->int
{
    List<string> l;
    l.insertAtHead("asd");
    l.insertAtHead("ert");
    l.insertAtHead("wer");
    l.insertAtHead("sdf");
    l.insertAtTail("Sdf");
    l.insertAtposition(2 , "3awais");
    l.insertAtTail("sdf");
    l.insertAtTail("sdf");
    l.insertAtposition(5 , "2awais");
    l.insertAtposition(3 , "1awais");
    l.display();
 return 0;   
}