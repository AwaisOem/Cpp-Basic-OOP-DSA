#include<bits/stdc++.h>
using namespace std;
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
    void preCreation_util(Node*&r,int arr[],int start,int end){
        if(start>end)return;
        if(r==NULL){
            r = new Node(arr[start]);
        }
        int i=start;
        for(i;i<=end;i++)
            if(arr[i] > arr[start])
                break;
        preCreation_util(r->left , arr , start+1 , i-1);
        preCreation_util(r->right, arr , i , end);
    }
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
    BST(int *arr,int size,char*type){
        if(strcmp(type,"post")==0){
            postCreation_util(root,arr,0,size-1);
        }else if(strcmp(type,"pre")==0){
            preCreation_util(root,arr,0,size-1);
        }
    }
    BST(Node*root):root(root){}
    BST(const BST &t):root(t.root){}
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
    void deleteTree(Node*root){
        if(root==NULL)return;
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
    Node*getRoot(){
        return root;
    }
    ~BST(){
        deleteTree(root);
    }
};
void isBST_util(BST::Node*root ,stack<int> &s){
    if(root==NULL)return;
    isBST_util(root->left,s);
    s.push(root->data);
    isBST_util(root->right,s);
}
bool isBST(BST::Node* root){
    stack<int> s;
    isBST_util(root,s);
    int x = s.top();
    s.pop();
    while(!s.empty()){
        if(s.top() > x){
            return false;
        }else{
             x = s.top();
            s.pop();
        }
    }
    return true;
}
bool  isPostOrder(int *arr , int size){
    stack<int> s;
    int root = INT_MAX;
    for(int i=size-1;i>=0;i--){
        if(arr[i] > root)return false;
        while(!s.empty() && s.top() > arr[i]){
            root = s.top();
            s.pop();
        }
        s.push(arr[i]);
    }
    return true;
}

auto main()->int
{
    BST t;
    t.insert(64);
    t.insert(58);
    t.insert(23);
    t.insert(45);
    t.insert(56);
    t.insert(23);
    t.insert(12);
    t.insert(56);
    t.postorder();
    
    return EXIT_SUCCESS;   
}