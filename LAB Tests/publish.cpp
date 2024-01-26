// Each of these three classes should have 
// a getdata() function to get its data from the user at the keyboard, and a putdata() function to 
// display its data. Write a main () program to test the book and tape classes by creating instances 
// of them, asking the user to fill in data with getdata(), and then displaying the data with putdata().

#include<bits/stdc++.h>
using namespace std;
class publication
{
string title;
float price;
public:
void getdata(){
    cin>>title>>price;
}
void putdata(){
    cout<<title<<price;
}
};
class book:public publication
{
    int page_count;
public:
void getdata(){
    publication::getdata();
    cin>>page_count;
}
void putdata(){
    publication::putdata();
    cout<<page_count<<endl;
}
    
};
class tape:public publication
{
    float mints;
public:
void getdata(){
    publication::getdata();
    cin>>mints;
}
void putdata(){
    publication::putdata();
    cout<<mints<<endl;
}
};
f(int n){
    return n;
}
int main()
{
    cout<<f(4);
    return 0;   
}