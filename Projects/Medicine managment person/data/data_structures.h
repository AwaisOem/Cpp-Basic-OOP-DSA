#pragma once
// saab ko file handling me 0 se initiliza bhi karwana hai
#include <iostream>
#include <string>
struct Date
{
    int day;
    int month;
    int year;
};
struct Medicine
{   string name;
    string formula;
    int price;
    Date expiry_date;
    short how_many;
    long long code;
};
Medicine medicine[100];
int count_medicine;



struct Employee
{
    string name;
    string id;
    long long phone;
    string adress;
    int salary;
    string timings;
};
Employee employee[50];
int count_employee;



struct Sell
{
    string name;
    string buyer_name;
    int price;
    short how_many;
};
Sell sales_list[100];
int count_sales;