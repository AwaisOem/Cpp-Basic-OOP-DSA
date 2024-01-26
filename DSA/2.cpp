#include<bits/stdc++.h>
using namespace std;

class DLL{
    class Node{
        public:
        int data;
        Node*next,*prev;
        Node(int d=0):data(d),next(NULL),prev(NULL){}
    }*front ,*rear;
    public:
    DLL():front(NULL),rear(NULL){}
    void insert(int d){
        Node* newer = new Node(d);
        if(front==NULL)
            front =rear= newer;
        else{
            newer->prev = rear;
            rear->next = newer;
            rear = newer;
        }
    }
    void display(){
        for (Node* t=front;t!=NULL;t=t->next)
            cout<<t->data<<" ";
        cout<<endl;
    }
};
class BST{
    public:
    class Node{
        public:
        int data;
        Node*left,*right;
        Node(int d = 0):data(d),left(NULL),right(NULL){}
    };
    private:
    Node *root;
    void inorder_util(Node* root){
        if(root==NULL)return;
        inorder_util(root->left);
        cout<<root->data<<",";
        inorder_util(root->right);
    }
    void postorder_util(Node*root){
         if(root==NULL)return;
        postorder_util(root->left);
        postorder_util(root->right);
        cout<<root->data<<",";
    }
    void preorder_util(Node*root){
        if(root==NULL)return;
        cout<<root->data<<",";
        preorder_util(root->left);
        preorder_util(root->right);
    }
    void insert_util(Node*&r,int &data){
        if(r==NULL){
            r=new Node(data);
            return;
        }
        if(r->data > data){
            insert_util(r->left ,data);
        }else{
            insert_util(r->right ,data);
        }
    }
    public:
    BST():root(NULL){}
     BST(int *arr,int size){
        postCreation_util(root,arr,0,size-1);
    }
    void postCreation_util(Node*&r,int*arr,int start,int end){
        if(start>end)return;
        if(r==NULL){
            r = new Node(arr[end]);
        }
        int i=end;
        for(i;i>=start;i--)
            if(arr[i] < arr[end])
                break;
        postCreation_util(r->left , arr , start , i);
        postCreation_util(r->right, arr , i+1 , end-1);
    }
    void insert(int data){
        insert_util(root,data);
    }
    void inorder(){
        inorder_util(root);
    }
    void postorder(){
        postorder_util(root);
    }
     void preorder(){
        preorder_util(root);
    }
    Node*getRoot(){
        return root;
    }
};
void inorder_util(BST::Node* r ,stack<int>&s){
    if(r==NULL)return;
    inorder_util(r->right , s);
    s.push(r->data);
    inorder_util(r->left, s);
}
DLL Merge(BST t1 , BST t2){
    stack<int> s ,s1;
    inorder_util(t1.getRoot(), s);
    inorder_util(t2.getRoot() , s1);
    DLL d;
    while(!s.empty() && !s1.empty()){
        if(s.top() > s1.top()){
            d.insert(s1.top());
            s1.pop();
        }else{
            d.insert(s.top());
            s.pop();
        }
    }
    while(!s.empty()){
            d.insert(s.top());
            s.pop();
    }
    while(!s1.empty()){
            d.insert(s1.top());
            s1.pop();
    }
    return d;
}

auto main()->int
{
    BST a(new int[9]{1,3,2,45,10,9,7,6,4} , 9),b(new int[8]{12,23,56,56,45,23,58,64} , 8);
    DLL d = Merge(a,b);
    d.display();

    return EXIT_SUCCESS;   
}