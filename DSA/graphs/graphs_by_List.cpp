#include<bits/stdc++.h>
using namespace std;
   

class Node {
    public:
    int src , dst , weight;
    Node *next;
    Node(int s  , int d, int w = 1):src(s),dst(d),weight(w),next(nullptr){}
};
void AddEdge(Node * graph[], int src , int dst, int weight , bool directed = false){
    if(graph[src] == nullptr){
        graph[src] = new Node(src,dst,weight);
    }else{
        Node * t = graph[src];
        while(t->next)t = t->next;
        t->next = new Node(src,dst,weight);
    }
    if(directed)return;
        if(graph[dst] == nullptr){
            graph[dst] = new Node(dst,src,weight);
        }else{
            Node * t = graph[dst];
            while(t->next)t = t->next;
            t->next = new Node(dst,src,weight);
        }
}
void DFS(Node ** graph , string names ,int src,vector<bool>&isvisited){
    cout<<names[src]<<" ";
    isvisited[src] = true;
    if(graph[src] == NULL){
        return;
    }
    Node *t = graph[src];
    while(t){
        if(!isvisited[t->dst]){
            DFS(graph , names , t->dst  , isvisited);
        }
        t= t->next;
    };
}
void BFS(Node **graph , string names , int src , vector<bool>& visited){
    queue<int> q;
    visited[src] = true;
    q.push(src);
    int curr;
    while(!q.empty()){
        curr = q.front();
        q.pop();
        cout<<names[curr]<<" ";
        Node * t = graph[curr];
        while(t){
            if(!visited[t->dst]){
                visited[t->dst] = true;
                q.push(t->dst);
            }
            t=t->next;
        }
    }
}
bool CycleDetection(Node ** graph  ,string names){
    

}


int main(){
    int n = 7;
    enum NodeNames{A,B,C,D,E,F,G};  
    string Vetices= "ABCDEFG";  
    Node* graph[n] ={NULL};
    AddEdge(graph,A , B , 3);
    AddEdge(graph,D , E , 5);
    AddEdge(graph,F , G , 7);
    AddEdge(graph,A , G , 4);
    AddEdge(graph,E , A , 1);
    AddEdge(graph,B, C , 8);
    AddEdge(graph,E, C , 10);
    AddEdge(graph,D, F , 12);

    vector<bool> isvisited(n, false);
    DFS(graph , Vetices , A  , isvisited);
    cout<<endl;
    fill(isvisited.begin()  , isvisited.end(), false);
    BFS(graph , Vetices , A  , isvisited);

}