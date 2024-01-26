#include<bits/stdc++.h>
using namespace std;
class publication{
    string title;
    float price;
    public:
    void getdata(){
        cout<<"Enter title & price: ";
        cin>>title>>price;
    }
    void putdata()const{
        cout<<"\ntitle: "<<title<<endl<<"price: "<<price<<"\n\n";
    }
};
class book:publication{

    int page_count;
    public:
    void getdata(){
        publication::getdata();
        cout<<"Enter page_count: ";
        cin>>page_count;
    }
    void putdata()const{
        publication::putdata();
        cout<<"Page_count: "<<page_count<<"\n\n";
    }

};
class tape:publication{
    float playing_time;
    public:
    void getdata(){
        publication::getdata();
        cout<<"Enter playing time: ";
        cin>>playing_time;
    }
    void putdata()const{
        publication::putdata();
        cout<<"playing time: "<<playing_time<<"\n\n";
    }
};
int main(){
book b;
b.getdata();
b.putdata();
tape t;
t.getdata();
t.putdata();
 return 0;   
}