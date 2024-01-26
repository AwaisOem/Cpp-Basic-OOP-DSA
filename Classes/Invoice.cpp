// (Invoice Class) Create a class called Invoice that a hardware store might use to represent
// an invoice for an item sold at the store. An Invoice should include four data members—a part number (type string), a part description (type string), a quantity of the item being purchased (type
// int) and a price per item (type int). [Note: In subsequent chapters, we’ll use numbers that contain
// decimal points (e.g., 2.75)—called floating-point values—to represent dollar amounts.] Your class
// should have a constructor that initializes the four data members. Provide a set and a get function for
// each data member. In addition, provide a member function named getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the price per item), then returns the

// amount as an int value. If the quantity is not positive, it should be set to 0. If the price per item is
// not positive, it should be set to 0. Write a test program that demonstrates class Invoice’s capabilities.
#include<iostream>
#include<cstring>
using namespace std;
class Invoice
{
    char part_num[20],discription[50];
    int quantity,price;
    public:
    Invoice():part_num{NULL},discription{NULL},quantity(0),price(0) {}
    Invoice(const char *n,const char *d,int q,int p):quantity(q),price(p) {
        strcpy(part_num,n);
        strcpy(discription,d);
    }
    void set(const char *n,const char *d,int q,int p){
        strcpy(part_num,n);
        strcpy(discription,d);
        quantity =q;
        price =p;
    }
    void get(){
        cin >> part_num;
        cin.ignore();
        cin.getline(discription,50);
        cin>>quantity;
        cin>>price;
    }
    int getInvoiceAmount(){
        if(quantity<0)quantity=0;
        if(price<0)price=0;
        return quantity*price;
    }
};
int main(){
 return 0;   
}