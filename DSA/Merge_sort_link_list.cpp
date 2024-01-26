// write code for merge sort on linked list in class and object


#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* merge(Node *head1, Node *head2){
    Node *head = NULL;
    Node *tail = NULL;
    if(head1->data < head2->data){
        head = head1;
        tail = head1;
        head1 = head1->next;
    }
    else{
        head = head2;
        tail = head2;
        head2 = head2->next;
    }
    while(head1 != NULL && head2 != NULL){
        if(head1->data < head2->data){
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
        else{
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
    }
    if(head1 != NULL){
        tail->next = head1;
    }
    else{
        tail->next = head2;
    }
    return head;
}

Node* mergeSort(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *slow = head;
    Node *fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *head1 = head;
    Node *head2 = slow->next;
    slow->next = NULL;
    head1 = mergeSort(head1);
    head2 = mergeSort(head2);
    Node *newHead = merge(head1, head2);
    return newHead;
}

int main() {
    int n;
    cin >> n;
    int data;
    cin >> data;
    Node *head = new Node(data);
    Node *tail = head;
    for(int i = 1; i < n; i++){
        cin >> data;
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
    head = mergeSort(head);
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}

