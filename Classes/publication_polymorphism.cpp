#include<bits/stdc++.h>
using namespace std;
class publication
{
    protected:
    char title[100];
    float price;
    public:
    virtual void getdata()
    {
        cin>>title>>price;
    }
    virtual void putdata()
    {
        cout<<title<<price<<endl;
    }
    virtual bool Oversize()const = 0;
};
class book :public publication
{
    int pages;
    public:
    void getdata()
    {
        publication::getdata();
        cin>>pages;
    }
    void putdata()
    {
        publication::putdata();
        cout<<pages<<endl;
    }
    bool Oversize()const
    {
        return (pages>500);
    }

};
class audiocassette: public publication
{
    float mints;
    public:
     void getdata()
    {
        publication::getdata();
        cin>>mints;
    }
    void putdata()
    {
        publication::putdata();
        cout<<mints<<endl;
    }
    bool Oversize()const
    {
        return (mints>90.0);
    }

};



int main(){
    publication *ptr[10];
    int count=0;
    char ch;
    do
    {
        cout<<"press B for book";
        cout<<"press A for audio";
        cin>>ch;
        if (ch=='B' || ch=='b')
            ptr[count++]=new book;
        else if (ch=='A' || ch=='a')
            ptr[count++]=new audiocassette;
        else
            cout<<"invalid\n";
        cout<<"Do you want to continue>>";
        cin>>ch;
    }while (ch=='Y' || ch=='y');
    for (int i = 0; i < count; i++)
        ptr[i]->getdata();
    for (int i = 0; i < count; i++)
    {
        if (!(ptr[i]->Oversize()))
            ptr[i]->putdata();
        else
            cout<<"Oversize: "<<endl;
    }
    

 return 0;   
}