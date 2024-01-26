#include<bits/stdc++.h>
using namespace std;

class BST{
    class Node{
        public: int data;Node *left ,*right;
        Node(int d=0):data(d),left(NULL), right(NULL){}
    }*root;
    void utilInsert(Node*&r,Node*&n){
        if(r==NULL){
            r=n;
            return;
        }
        if(n->data  > r->data)
            utilInsert(r->right,n);
        else
            utilInsert(r->left,n);
    }
    void inorder(Node* r){
        if(r==NULL)return;
        inorder(r->left);
        cout<<r->data<<" ";
        inorder(r->right);
    }
    void postorder(Node* r){
        if(r==NULL)return;
        postorder(r->left);
        postorder(r->right);
        cout<<r->data<<" ";
    }
    void preorder(Node* r){
        if(r==NULL)return;
        cout<<r->data<<" ";
        preorder(r->left);
        preorder(r->right);
    }
    public:
    void insert(int data){
        Node * newer = new  Node(data);
        utilInsert(root,newer);
    }
    void display()
    {
        inorder(root);
    }
};



auto main()->int
{
    BST t;
    t.insert(1);
    t.insert(8);
    t.insert(6);
    t.insert(4);
    t.insert(9);
    t.insert(2);
    t.insert(3);
    t.insert(10);
    t.display();
    return EXIT_SUCCESS;   
}