#include<iostream>
using namespace std;
int main()
{
    double Sell, org;
    cout << "Enter Selling price of any item: ";
    cin >> Sell;
    cout << "Enter Orignal price of item: ";
    cin >> org;
    cout << "Enter number of items:   ";
    int item;
    cin >> item;
    double r;
    if (Sell > org)
    {
        r = item * (Sell - org);
        cout << "Here is profit of " << r<<endl;
    }
    else if (org > Sell)
    {

        r = item * (org - Sell);
        cout << "Here is Loss of " << r<<endl;

    }else if(org==Sell){
        cout<<"Not profit neither lose........."<<endl;
    }

main();
    return 0;
}