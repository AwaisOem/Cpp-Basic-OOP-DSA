#include<bits/stdc++.h>
using namespace std;
class DCQ{
    class Node{
        public:
        int data;
        Node * next;
        Node(int d = 0):next(NULL),data(d){}
    }*tail;
    void utilDisplay(Node*n , bool isEven){
        if(n==tail)return;
        utilDisplay(n->next , isEven);
        if(n->data%2==0 && isEven)
            cout<<n->data<<" ";
        else if(n->data%2!=0 && !isEven)
            cout<<n->data<<" ";
    }
    public:
    DCQ():tail(NULL){enqueue(0);}
    void enqueue(int data){
        Node*newer = new Node(data);
        if(tail==NULL){
            tail = newer;
            tail->next = newer;
        }else{
            newer->next = tail->next;
            tail->next = newer;
        }
    }
    int dequeueEven(){
        if(tail==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else if(tail==tail->next){
            if(tail->data%2==0){
                int data = tail->data;
                delete tail;
                tail = NULL;
                return data;
            }   
        }else{
            Node*temp = tail , *prev = NULL;
            do{
                if(temp->next->data%2==0)
                    prev = temp;
                temp=temp->next;
            }while(temp->next!=tail);
            if(prev!=NULL){
                int data = prev->next->data;
                temp = prev->next;
                prev->next = prev->next->next;
                delete temp;
                return data;
            }
        }
        cout<<"No even element in queue"<<endl;
        return -1;
    }
    int dequeueOdd(){
        if(tail==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else if(tail==tail->next){
            if(tail->data%2!=0){
                int data = tail->data;
                delete tail;
                tail = NULL;
                return data;
            }   
        }else{
            Node*temp = tail , *prev = NULL;
            do{
                if(temp->next->data%2!=0)
                    prev = temp;
                temp=temp->next;
            }while(temp->next!=tail);
            if(prev!=NULL){
                int data = prev->next->data;
                temp = prev->next;
                prev->next = prev->next->next;
                delete temp;
                return data;
            }
        }
        cout<<"No even element in queue"<<endl;
        return -1;
    }
    void displayEven(){
        utilDisplay( tail->next, true);
        cout<<endl;
    }
    void displayOdd(){
        utilDisplay( tail->next, false);
        cout<<endl;
    }
};
int main()
{
    system("clear");
    DCQ q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    q.enqueue(45);
    q.enqueue(43);
    q.enqueue(24);
    q.enqueue(56);

    q.displayEven();
    q.displayOdd();
    cout<<q.dequeueEven()<<endl;
    cout<<q.dequeueOdd()<<endl;
    q.displayEven();
    q.displayOdd();
 }