#include<bits/stdc++.h>
using namespace std;

class LinkList{
    class Node{
        public: int data;Node*next;
        Node(int d):data(d),next(NULL){}
    }*head , * tail;
    public:
    LinkList():head(NULL),tail(NULL){}
    void add(int d){
        Node*temp = new Node(d);
        if(head == NULL){
            head = tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }
    void print(){
        for(Node*temp = head;temp!=NULL;temp = temp->next)
            cout<<temp->data<<" ";
        cout<<endl;
    }
    void splitEvenOddNodes(LinkList &l1,LinkList &l2){
        for(Node*temp = head;temp!=NULL;temp = temp->next->next){
            l1.add(temp->data);
            if(temp->next==NULL)break;
        }
        for(Node*temp = head->next;temp!=NULL;temp = temp->next->next){
            l2.add(temp->data);
            if(temp->next==NULL)break;

        }
    }
};
int main()
{
    LinkList l;
    l.add(1);
    l.add(2);
    l.add(3);
    l.add(4);
    l.print();
    LinkList odd,even;
    l.splitEvenOddNodes(odd,even);
    odd.print();
    even.print();

    return 0;   
}