#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include <windows.h>
#include <conio.h>
#include <unistd.h>
#include "data/prototypes.h"
using namespace std;
#include "data/data_structures.h"

int main(){
    file_to_prog();
 mainmenu();
    prog_to_file();
return 0;   
}

void mainmenu()
{
    system("cls");  
    menu1(1);
    int i = 1;
    int choice = 0;
    while (true)
    {
        cout << "\n\n\n\n";
        choice = getche();
        switch (choice)
        {
        case 72:
            if (i != 1)
            {
                i--;
                menu1(i);
            }else{
                menu1(i);
            }
            break;
        case 80:
            if (i != 5)
            {
                i++;
                menu1(i);
            }else{
                menu1(i);
            }
            break;
        case 27:
        prog_to_file();
            exit(1);
            break;
        case 13:
            if(i!=5){select_main(i);}
            else{
                prog_to_file();
                exit(1);}
            break;
        default:
            break;
        }
    }
}

void menu1(int a)
{
    system("cls");
    char option[5][50] = {"Buy some Medicine", "Report", "Search", "Manage Data", "Exit"};
    int i(0);
    while (i < 5)
    {
        if (a == i + 1)
        {
            color(14);
            cout << "\n"
                    << option[i];
            color(9);
        }
        else
        {
            cout << "\n"
                << option[i];
        }
        i++;
    }
}

void select_main(int n){
    switch (n)
    {
    case 1:
        sell();
        break;
    case 2:
        report_menu();
        break;
    case 3:
        search_menu();
        break;
    case 4:
        manage_menu();
        break;
    default:
        break;
    }
}

void report_menu()
{
    system("cls");
    menu_report(1);
    int i = 1;
    int choice = 0;
    while (true)
    {
        cout << "\n\n\n\n";
        choice = getche();
        switch (choice)
        {
        case 72:
            if (i != 1)
            {
                i--;
                menu_report(i);
            }else{
                menu_report(i);
            }
            break;
        case 80:
            if (i != 4)
            {
                i++;
                menu_report(i);
            }else{
                menu_report(i);
            }
            break;
        case 27:
            prog_to_file();
            exit(1);
            break;
        case 8:
            mainmenu();
            break;
        case 13:
            if(i!=4){select_report(i);}
            else{
                mainmenu();}
            break;
        default:
            break;
        }
    }
}

void menu_report(int a)
{
    system("cls");
    char option[4][50] = {"Show Sales Report", "Show Medicine List", "Show Employee List", "Back"};
    int i(0);
    while (i < 4)
    {
        if (a == i + 1)
        {
            color(14);
            cout << "\n"
                    << option[i];
            color(9);
        }
        else
        {
            cout << "\n"
                << option[i];
        }
        i++;
    }
}

void select_report(int n){
    switch (n)
    {
    case 1:
        report();
        break;
    case 2:
        display_all_medicines();
        break;
    case 3:
        display_all_employees();
        break;
    default:
        break;
    }
}

void manage_menu()
{
    system("cls");
    menu_manage(1);
    int i = 1;
    int choice = 0;
    while (true)
    {
        cout << "\n\n\n\n";
        choice = getche();
        switch (choice)
        {
        case 72:
            if (i != 1)
            {
                i--;
                menu_manage(i);
            }else{
                menu_manage(i);
            }
            break;
        case 80:
            if (i != 4)
            {
                i++;
                menu_manage(i);
            }else{
                menu_manage(i);
            }
            break;
        case 27:
            prog_to_file();
            exit(1);
            break;
        case 8:
            mainmenu();
            break;
        case 13:
            if(i!=4){select_manage(i);}
            else{
                mainmenu();}
            break;
        default:
            break;
        }
    }
}

void menu_manage(int a)
{
    system("cls");
    char option[4][50] = {"Add", "Edit", "Delete", "Back"};
    int i(0);
    while (i < 4)
    {
        if (a == i + 1)
        {
            color(14);
            cout << "\n"
                    << option[i];
            color(9);
        }
        else
        {
            cout << "\n"
                << option[i];
        }
        i++;
    }
}

void select_manage(int n){
    switch (n)
    {
    case 1:
        add_menu();
        break;
    case 2:
        edit_menu();
        break;
    case 3:
        delete_menu();
        break;
    default:
        break;
    }
}

void search_menu()
{
    system("cls");
    menu_search(1);
    int i = 1;
    int choice = 0;
    while (true)
    {
        cout << "\n\n\n\n";
        choice = getche();
        switch (choice)
        {
        case 72:
            if (i != 1)
            {
                i--;
                menu_search(i);
            }else{
                menu_search(i);
            }
            break;
        case 80:
            if (i != 3)
            {
                i++;
                menu_search(i);
            }else{
                menu_search(i);
            }
            break;
        case 27:
            prog_to_file();
            exit(1);
            break;
        case 8:
            mainmenu();
            break;
        case 13: 
            if(i!=3){select_search(i);
            return;}
            else{
                mainmenu();}
            break;
        default:
            break;
        }
    }
}

void menu_search(int a)
{
    system("cls");
    char option[3][50] = {"Search Employee", "Search Medicine", "Back"};
    int i(0);
    while (i < 3)
    {
        if (a == i + 1)
        {
            color(14);
            cout << "\n"
                    << option[i];
            color(9);
        }
        else
        {
            cout << "\n"
                << option[i];
        }
        i++;
    }
}

void select_search(int n){
    switch (n)
    {
    case 1:
        search_employee_menu();
        break;
    case 2:
        search_medicine_menu();
        break;
    default:
        break;
    }
}

void search_medicine_menu()
{
    system("cls");
    menu_search_medicine(1);
    int i = 1;
    int choice = 0;
    while (true)
    {
        cout << "\n\n\n\n";
        choice = getche();
        switch (choice)
        {
        case 72:
            if (i != 1)
            {
                i--;
                menu_search_medicine(i);
            }else{
                menu_search_medicine(i);
            }
            break;
        case 80:
            if (i != 3)
            {
                i++;
                menu_search_medicine(i);
            }else{
                menu_search_medicine(i);
            }
            break;
        case 27:
            prog_to_file();
            exit(1);
            break;
        case 8:
            search_menu();
            break;
        case 13:
            if(i!=3){select_search_medicine(i);
            return;}
            else{
                search_menu();}
            break;
        default:
            break;
        }
    }
}

void menu_search_medicine(int a)
{
    system("cls");
    char option[3][50] = {"Search Medicine By Name", "Search Medicine By Code", "Back"};
    int i(0);
    while (i < 3)
    {
        if (a == i + 1)
        {
            color(14);
            cout << "\n"
                    << option[i];
            color(9);
        }
        else
        {
            cout << "\n"
                << option[i];
        }
        i++;
    }
}

void select_search_medicine(int n){
    switch (n)
    {
    case 1:
        searchbyname();
        break;
    case 2:
        searchbycode();
        break;
    default:
        break;
    }
}

void search_employee_menu()
{
    system("cls");
    menu_search_employee(1);
    int i = 1;
    int choice = 0;
    while (true)
    {
        cout << "\n\n\n\n";
        choice = getche();
        switch (choice)
        {
        case 72:
            if (i != 1)
            {
                i--;
                menu_search_employee(i);
            }else{
                menu_search_employee(i);
            }
            break;
        case 80:
            if (i != 4)
            {
                i++;
                menu_search_employee(i);
            }else{
                menu_search_employee(i);
            }
            break;
        case 27:
            prog_to_file();
            exit(1);
            break;
        case 8:
            search_menu();
            break;
        case 13:
            if(i!=4){select_search_employee(i);
            return;}
            else{
                search_menu();}
            break;
        default:
            break;
        }
    }
}

void menu_search_employee(int a)
{
    system("cls");
    char option[4][50] = {"Search Employee By Name", "Search  Employee By ID", "Search By Timing", "Back"};
    int i(0);
    while (i < 4)
    {
        if (a == i + 1)
        {
            color(14);
            cout << "\n"
                    << option[i];
            color(9);
        }
        else
        {
            cout << "\n"
                << option[i];
        }
        i++;
    }
}

void select_search_employee(int n){
    switch (n)
    {
    case 1:
        searchbyusername();
        break;
    case 2:
        searchbyuserid();
        break;
    case 3:
        searchbytiming();
        break;
    default:
        break;
    }
}

void add_menu()
{
    system("cls");
    menu_add(1);
    int i = 1;
    int choice = 0;
    while (true)
    {
        cout << "\n\n\n\n";
        choice = getche();
        switch (choice)
        {
        case 72:
            if (i != 1)
            {
                i--;
                menu_add(i);
            }else{
                menu_add(i);
            }
            break;
        case 80:
            if (i != 3)
            {
                i++;
                menu_add(i);
            }else{
                menu_add(i);
            }
            break;
        case 27:
            prog_to_file();
            exit(1);
            break;
        case 8:
            manage_menu();
            break;
        case 13:
            if(i!=3){select_add(i);
            return;}
            else{
                manage_menu();}
            break;
        default:
            break;
        }
    }
}

void menu_add(int a)
{
    system("cls");
    char option[3][50] = {"Add Employee", "Add Medicine", "Back"};
    int i(0);
    while (i < 3)
    {
        if (a == i + 1)
        {
            color(14);
            cout << "\n"
                    << option[i];
            color(9);
        }
        else
        {
            cout << "\n"
                << option[i];
        }
        i++;
    }
}

void select_add(int n){
    switch (n)
    {
    case 1:
        add_employee();
        break;
    case 2:
        add_medicine();
        break;
    default:
        break;
    }
}

void edit_menu()
{
    system("cls");
    menu_edit(1);
    int i = 1;
    int choice = 0;
    while (true)
    {
        cout << "\n\n\n\n";
        choice = getche();
        switch (choice)
        {
        case 72:
            if (i != 1)
            {
                i--;
                menu_edit(i);
            }else{
                menu_edit(i);
            }
            break;
        case 80:
            if (i != 3)
            {
                i++;
                menu_edit(i);
            }else{
                menu_edit(i);
            }
            break;
        case 27:
            prog_to_file();
            exit(1);
            break;
        case 8:
           manage_menu();
            break;
        case 13:
            if(i!=3){select_edit(i);
            return;}
            else{
                manage_menu();}
            break;
        default:
            break;
        }
    }
}

void menu_edit(int a)
{
    system("cls");
    char option[3][50] = {"Edit Employee", "Edit Medicine", "Back"};
    int i(0);
    while (i < 3)
    {
        if (a == i + 1)
        {
            color(14);
            cout << "\n"
                    << option[i];
            color(9);
        }
        else
        {
            cout << "\n"
                << option[i];
        }
        i++;
    }
}

void select_edit(int n){
    switch (n)
    {
    case 1:
        edit_medicine();
        break;
    case 2:
        edit_employee();
        break;
    default:
        break;
    }
}
void delete_menu()
{
    system("cls");
    menu_delete(1);
    int i = 1;
    int choice = 0;
    while (true)
    {
        cout << "\n\n\n\n";
        choice = getche();
        switch (choice)
        {
        case 72:
            if (i != 1)
            {
                i--;
                menu_delete(i);
            }else{
                menu_delete(i);
            }
            break;
        case 80:
            if (i != 4)
            {
                i++;
                menu_delete(i);
            }else{
                menu_delete(i);
            }
            break;
        case 27:
            prog_to_file();
            exit(1);
            break;
        case 8:
            manage_menu();
            break;
        case 13:
            if(i!=4){select_delete(i);
            return;}
            else{
                manage_menu();}
            break;
        default:
            break;
        }
    }
}
void menu_delete(int a)
{
    system("cls");
    char option[4][50] = {"Delete Employee", "Delete Medicine","Delete Sale", "Back"};
    int i(0);
    while (i < 4)
    {
        if (a == i + 1)
        {
            color(14);
            cout << "\n"
                    << option[i];
            color(9);
        }
        else
        {
            cout << "\n"
                << option[i];
        }
        i++;
    }
}
void select_delete(int n){
    switch (n)
    {
    case 1:
        delete_employee();
        break;
    case 2:
        delete_medicine();
        break;
    case 3:
        sell_del();
        break;
    default:
        break;
    }
}
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
#include "data/add_edit_delete.h"
#include "data/search.h"
#include "data/sales.h"
#include "data/report.h"
#include "data/file_handle.hpp"