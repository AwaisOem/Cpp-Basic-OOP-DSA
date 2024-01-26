// *Question 11*
// Define a class BOOK with the following specifications :
// Private members of the class BOOK are
// BOOK NO	integer type
// BOOKTITLE	20 characters
// PRICE	float (price per copy)
// TOTAL_COST()	A function to calculate the total cost for N number of  
//  	copies where N is passed to the function as argument. 
// Public members of the class BOOK are
// INPUT ()	function to read BOOK_NO. BOOKTITLE, PRICE
// PURCHASE ()	function to ask the user to input the number of copies to be
//  	purchased. It invokes TOTAL_COST() and prints the total 
//  	cost to be paid by the user. 
// Note: You are also required to give detailed function definitions. 
#include<iostream>
using namespace std;
class BOOK
{
    private:
    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE;
    int TOTAL_COST(int n)
    {
        return n*PRICE ;
    }
    public:
    BOOK():BOOK_NO(0),BOOKTITLE{},PRICE(0){}
    void INPUT()
    {
        cout<<"***************Enter Details of this Book*************"<<endl;
        cout<<"Enter BOOK NO:   ";
        cin>>BOOK_NO;
        cout<<"Enter BOOK TITLE:   ";
        cin.ignore();
        cin.getline(BOOKTITLE,20);
        cout<<"Enter BOOK PRICE:   ";
        cin>>PRICE;
        cout<<"\n";
    }
    void PURCHASE ()
    {
        cout<<"***************PURCHASE BOOK**************"<<endl;
        cout<<"Enter number of copies:  ";
        int n;cin>>n;
        cout<<"Do you Want to Purchase this book (Y/N)?    ";
        char dis;cin>>dis;
        if (dis=='Y' || dis=='y')
        {    
            int total_price = TOTAL_COST(n);
            cout<<"You Need to pay total "<<total_price<<" price....."<<endl;
            cout<<endl;
        }
    }

};
int main()
{
BOOK b1;
b1.INPUT();
b1.PURCHASE();
return 0;   
}