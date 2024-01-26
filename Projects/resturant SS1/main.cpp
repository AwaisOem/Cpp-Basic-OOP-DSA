#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ()
{
    int br=0,sh=0,pz=0,sd=0,ic=0,cc=0;
    int s_br=0,s_sh=0,s_pz=0,s_sd=0,s_ic=0,s_cc=0;
    int a_br=100,a_sh=100,a_pz=100,a_sd=100,a_ic=100,a_cc=100;
    int a,b,c,d,e,f;
    int choice,item,q,bill;
    start:
        system ("cls");
    cout<<"\n\n\t\t\t\t-----------RESTURANT MANAGEMENT SYSTEM-----------";
    cout<<"\n\n\t\t\t\t\t-----------CONTROL PANEL-----------";
    cout<<"\n\n 1.Menu : ";
    cout<<"\n\n 2.Details : ";
    cout<<"\n\n 3.Exit : ";
    cout<<"\n\n Enter your choice : ";
    cin>>choice;
    cout<<"\n\t\t\t\t    _______________________________  ";
    if (choice==1)
    {
        system("cls");
        cout<<"\n\n\t\t\t\t\t       ---MENU--- ";
        cout<<"\n\n  Item"<<setw(20)<<"Price";
        cout<<"\n\n1.Burger"<<setw(18)<<"80";
        cout<<"\n2.Shwarma"<<setw(17)<<"100";
        cout<<"\n3.Pizza"<<setw(19)<<"350";
        cout<<"\n4.Sandwich"<<setw(16)<<"150";
        cout<<"\n5.Ice-Cream"<<setw(15)<<"200";
        cout<<"\n6.Coca-Cola"<<setw(15)<<"50";
        cout<<"\n\nPlease select the item... "<<endl;
        cin>>item;
        switch (item)
        {
        case 1:
            cout<<"\nPleae mention quantity..."<<endl;
            cin>>q;
            if (a_br-s_br>=q)
            {
                s_br += q;
                br += q*80;
                bill=br;
                cout<<"\nYour current bill = "<<bill<<endl;
                cout<<"\n\t\t\t"<<q<<" Burgers sale THANK YOU !!!";
            }
            else
                cout<<"\n\t\t\t SORRY "<<a_br-s_br<<"Burgers are remaining in Resturant ";
            break;
        case 2:
            cout<<"\nPleae mention quantity..."<<endl;
            cin>>q;
            if (a_sh-s_sh>=q)
            {
                s_sh += q;
                sh += q*100;
                bill=sh;
                cout<<"\nYour current bill = "<<bill<<endl;
                cout<<"\n\t\t\t"<<q<<" Shwarmas sale THANK YOU !!!";
            }
            else
                cout<<"\n\t\t\t SORRY "<<a_sh-s_sh<<" Shwarmas are remaining in Resturant ";
            break;
        case 3:
            cout<<"\nPleae mention quantity..."<<endl;
            cin>>q;
            if (a_pz-s_pz>=q)
            {
                s_pz += q;
                pz += q*350;
                bill=pz;
                cout<<"\nYour current bill = "<<bill<<endl;
                cout<<"\n\t\t\t"<<q<<" Pizzas sale THANK YOU !!!";
            }
            else
                cout<<"\n\t\t\t SORRY "<<a_pz-s_pz<<" Pizzas are remaining in Resturant ";
            break;
        case 4:
            cout<<"\nPleae mention quantity..."<<endl;
            cin>>q;
            if (a_sd-s_sd>=q)
            {
                s_sd += q;
                sd += q*150;
                bill=sd;
                cout<<"\nYour current bill = "<<bill<<endl;
                cout<<"\n\t\t\t"<<q<<" Sandwiches sale THANK YOU !!!";
            }
            else
                cout<<"\n\t\t\t SORRY "<<a_sd-s_sd<<" Sandwiches are remaining in Resturant ";
            break;
        case 5:
            cout<<"\nPleae mention quantity..."<<endl;
            cin>>q;
            if (a_ic-s_ic>=q)
            {
                s_ic += q;
                ic += q*200;
                bill=ic;
                cout<<"\nYour current bill = "<<bill<<endl;
                cout<<"\n\t\t\t"<<q<<" Ice-Creams sale THANK YOU !!!";
            }
            else
                cout<<"\n\t\t\t SORRY "<<a_ic-s_ic<<" Ice-Creams are remaining in Resturant ";
            break;
        case 6:
            cout<<"\nPleae mention quantity..."<<endl;
            cin>>q;
            if (a_cc-s_cc>=q)
            {
                s_cc += q;
                cc += q*50;
                bill=cc;
                cout<<"\nYour current bill = "<<bill<<endl;
                cout<<"\n\t\t\t"<<q<<" Coca-Colas sale THANK YOU !!!";
            }
            else
            {
              cout<<"\n\t\t\t SORRY "<<a_cc-s_cc<<" Coca-Colas are remaining in Resturant ";
            }
        }
    }
    else
    {
        cout<<"\n\nInvalid Input...Please Try Again... ";
    }

    if (choice==2)
    {
        system("cls");
        cout<<"\n\n\t\t\t\t\t  ---------------DETAIL PANEL--------------- ";
        cout<<"\n\n Available Burger Quantity : "<<a_br;
        cout<<"\n Sales Burger Quantity : "<<s_br;
        cout<<"\n Remaining Burger Quantity : "<<a_br-s_br;
        cout<<"\n Total Burger sale in a day : "<<br;

        cout<<"\n\n Available Shwarma Quantity : "<<a_sh;
        cout<<"\n Sales Shwarma Quantity : "<<s_sh;
        cout<<"\n Remaining Shwarma Quantity : "<<a_sh-s_sh;
        cout<<"\n Total Shwarma sale in a day : "<<sh;

        cout<<"\n\n Available Pizza Quantity : "<<a_pz;
        cout<<"\n Sales Pizza Quantity : "<<s_pz;
        cout<<"\n Remaining Pizza Quantity : "<<a_pz-s_pz;
        cout<<"\n Total Pizza sale in a day : "<<pz;

        cout<<"\n\n Available Sandwich Quantity : "<<a_sd;
        cout<<"\n Sales Sandwich Quantity : "<<s_sd;
        cout<<"\n Remaining Sandwich Quantity : "<<a_sd-s_sd;
        cout<<"\n Total Sandwich sale in a day : "<<sd;

        cout<<"\n\n Available Ice-Cream Quantity : "<<a_ic;
        cout<<"\n Sales Ice-Cream Quantity : "<<s_ic;
        cout<<"\n Remaining Ice-Cream Quantity : "<<a_ic-s_ic;
        cout<<"\n Total Ice-Cream sale in a day : "<<ic;

        cout<<"\n\n Available Coca-Cola Quantity : "<<a_cc;
        cout<<"\n Sales Coca-Cola Quantity : "<<s_cc;
        cout<<"\n Remaining Coca-Cola Quantity : "<<a_cc-s_cc;
        cout<<"\n Total Coca-Cola sale in a day : "<<cc;

        cout<<"\n\n\nTOTAL DAY SALE : "<<br+sh+pz+sd+ic+cc;
    }
       if (choice==3)
       {
         exit(0);
       }
        getch ();
        goto start;
}
