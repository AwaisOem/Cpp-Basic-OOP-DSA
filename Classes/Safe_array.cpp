#include<bits/stdc++.h>
#define s 100
using namespace std;
class SafeArray
{
    int array[s],n;
    public:
    SafeArray():array{0},n(0){}
    int& operator [](int t){
        if (t<0 || t>n)
            {cout<<"Error: Array index out of range"<<endl;exit(1);}
        return array[t];
    }
    void operator ++(int){
        cout<<"Enter Element in array:  ";
        cin>>array[n];
        n++;
    }
    ~SafeArray(){}
    friend ostream& operator<<(ostream&, const SafeArray&);
    friend istream& operator >>(istream&,SafeArray &);
};
ostream& operator <<(ostream&os,const SafeArray &d){
    if(d.n<=s){
    os<<"\n{";
    for (int i = 0; i < d.n; i++)
        os<<d.array[i]<<",";
    os<<"\b}\n";}
    return os;
}
istream& operator >>(istream&os,SafeArray &d){
    cout<<"Enter Elements you want in array:    ";
    os>>d.n;
    if(d.n<=s){
    cout<<"Enter "<<d.n<<"Elements in array:  "<<endl;
    for (int i = 0; i < d.n; i++)
        os>>d.array[i];
        }
    return os;
}

int main(){
SafeArray s1;
cin>>s1;
s1++;
s1++;
s1[5]=786;
cout<<s1;
int temp=s1[0];
cout<<temp<<endl;
 return 0;   
}