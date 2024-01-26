#include<bits/stdc++.h>
using namespace std;
const int maxPF =  92;

long long fib(int n , long long *m){ // T = O(n) S = O(2n)
    if(n==0 || n==1)return n;
    return (m[n]!=-1) ? m[n]:m[n] = fib(n-1 , m) + fib(n-2 , m);
}
void test1(){
    long long cache[maxPF+1];
    for(auto&i:cache)i=-1;
    for(int i = 0;i<=maxPF;i++)
        cout<<fib(i, cache)<<endl;
}
void test2(){
    long long cache[maxPF+1] = { 0 ,1};
    for(int i = 2;i<=maxPF;i++){
        cache[i] = cache[i-1] + cache[i-2];
    }
    for(auto&i:cache)cout<<i<<endl;
}
void test3(){
    long long  prev = 0 ,prev2 =1 , curr;
    cout<<prev<<endl<<prev2<<endl;
    for(int i = 2;i<=maxPF;i++){
        curr=prev + prev2;
        prev=prev2;
        prev2 = curr;
        cout<<curr<<endl; 
    }
}
long long fib2(int n){//O(n)
    long long  prev = 0 ,prev2 =1 , curr;
    // cout<<prev<<endl<<prev2<<endl;
    for(int i = 2;i<=n;i++){
        curr=prev + prev2;
        prev=prev2;
        prev2 = curr;
        // cout<<curr<<endl; 
    }
    return  curr;
}


auto main()->int
{
    // test1(); // T = O(n) S = O(2n)
    // test2(); // T = O(n) S = O(n)
    // test3(); // T = O(n) S = O(1)
    return EXIT_SUCCESS;   
}