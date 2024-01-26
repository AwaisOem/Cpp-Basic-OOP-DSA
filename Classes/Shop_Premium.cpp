#include <iostream>
#include <iomanip>
#include <cstring>
#define size 30
using namespace std;
class Shop
{
    char item_name[size][20];
    int item_id[size],item_price[size],number_of_items[size];
    unsigned int count;
    int f1(int id){
        int flag=-1;
        for (int i = 0; i < count; i++)
            if (item_id[i]==id)
                {flag=i;break;}
        return flag;
    }
    int f1(const char *name){
         int flag=-1;
        for (int i = 0; i < count; i++)
            if (!strcmp(name,item_name[i]))
                {flag=i;break;}
        return flag;
    }
public:
    Shop() : count(0),item_name{{NULL}},item_id{},item_price{},number_of_items{}{}
    void additem()
    {
        cout<<endl;
        cout<<"******Add new item*****"<<endl;
        cout<<"Enter Item id:  ";
        int id;cin>>id;
        int flag=f1(id);
        if(flag==-1){
            item_id[count]=id;
            cout<<"Enter name of item:  ";
            cin.ignore();
            cin.getline(item_name[count],20);
            cout<<"Enter price of item:     ";
            cin>>item_price[count];
            cout<<"How many items like this you want to add:    ";
            cin>>number_of_items[count];
            count++;
            cout<<"\nItem Added succesfully....."<<endl;
        }else
            cout<<"Item already exist........"<<endl;
        cout<<endl;
    }
    void edititem(int id){
        int flag=f1(id);
        if (flag!=-1)
        {
            searchitem(item_id[flag]);
            cout<<"Enter Item id:  ";
            cin>>item_id[flag];
            cout<<"Enter name of item:  ";
            cin.ignore();
            cin.getline(item_name[flag],20);
            cout<<"Enter price of item:     ";
            cin>>item_price[flag];
            cout<<"How many items like this you want to add:    ";
            cin>>number_of_items[flag];
        }
        else
        cout<<"Item not found.........."<<endl;
        cout<<endl;
    }
    void edititem(const char *name){
        int flag=f1(name);
        if (flag!=-1)
        {
            searchitem(item_id[flag]);
            cout<<"Enter Item id:  ";
            cin>>item_id[flag];
            cout<<"Enter name of item:  ";
            cin.ignore();
            cin.getline(item_name[flag],20);
            cout<<"Enter price of item:     ";
            cin>>item_price[flag];
            cout<<"How many items like this you want to add:    ";
            cin>>number_of_items[flag];
        }
        else
        cout<<"Item not found.........."<<endl;
        cout<<endl;
    }
    void deleteitem(int id){
        int flag=f1(id);
        if (flag!=-1)
        {
        cout<<endl;
            for (int i = flag; i < count-1; i++)
            {
                strcpy(item_name[i],item_name[i+1]);
                item_id[i]=item_id[i+1];
                item_price[i]=item_price[i+1];
                number_of_items[i]=number_of_items[i+1];
            }
                count--;
            cout<<"Item DELETED.......\n";
        }
        else
        cout<<"Item not found.........."<<endl;
        cout<<endl;
    }
    void displyitems()const{
        cout<<"\n\n*********List of items*******\n\n";
        for (int i = 0; i < count; i++)
            cout<<left<<setw(15)<<item_name[i]<<setw(7)<<item_price[i]<<setw(7)<<number_of_items[i]<<endl;
            cout<<endl;
    }
    void searchitem(int id){
        int flag=f1(id);
        if (flag!=-1)
        {
            cout<<endl;
            cout<<"Item id:  "<<item_id[flag]<<endl;
            cout<<"Name of item:  "<<item_name[flag]<<endl;
            cout<<"price of item:     "<<item_price[flag]<<endl;
            cout<<"Number of similar items:    "<<number_of_items[flag];
        }
        else
        cout<<"Item not found.........."<<endl;
    cout<<endl;
    }
    void searchitem(const char *name){
        int flag=f1(name);
        if (flag!=-1)
        {
            cout<<endl;
            cout<<"Item id:  "<<item_id[flag]<<endl;
            cout<<"Name of item:  "<<item_name[flag]<<endl;
            cout<<"price of item:     "<<item_price[flag]<<endl;
            cout<<"Number of similar items:    "<<number_of_items[flag];
        }
        else
        cout<<"Item not found.........."<<endl;
    cout<<endl;
    }
    void purchase(int id){
       int flag=f1(id);
        if (flag!=-1)
        {
            cout<<endl;
            searchitem(item_id[flag]);
            line:
            cout<<"\nEnter number of items you want to purchase:  ";
            int num;cin>>num;
            if(num<=number_of_items[flag]){
                number_of_items[flag]-=num;
                cout<<"Total Cost:  "<<item_price[flag]*num<<"\nPurchased successfully............\n\n";
                if (num==number_of_items[flag])
                    deleteitem(item_id[flag]);
            }
            else{
                cout<<"Out of Stock.....\n";
                cout<<"Do you want to enter again:   ";
                char dis;cin>>dis;
                if(dis=='Y' || dis=='y')
                    goto line;
            }
            cout<<endl;
        }
        else
            cout<<"Item not found......"<<endl;
    }
};
int main(){}