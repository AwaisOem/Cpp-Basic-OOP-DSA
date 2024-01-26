#include <bits/stdc++.h>
using namespace std;
struct CS
{
    char name[25];
    int numbers;
};
void search_by_name(CS *, int);
void search_overall(CS *, CS *, CS *, int, int, int);
void maax(CS *, int);
void max_overall(CS *, CS *, CS *, int, int, int);
int main()
{
    CS bscsreg[10] = {
        {"AWAIS RAZA", 786}, {"Zain Iqbal",1093}, {"Mubeen Musharaf", 1092}, {"Ismail", 1095}, {"Ali Abbas", 1096}, {"Saad Mukhtar", 1097}, {"Muhammad Saqib", 1099}, {"Muhammad Abdullah", 1098}, {"Muhammad Usman", 1092}, {"Yahya Khalid", 1091}};
    CS bscsss1[10] = {
        {"Arslan Shah", 1030}, {"Saira Noreen", 1036}, {"Ariqa Nayab", 1034}, {"Daima Iftikhar", 990}, {"Haseeb Bilal", 1076}, {"Huzaifa Aslam", 1060}, {"Muhammad Ali", 1050}, {"Kaneez Fatima", 1030}, {"Ayesha Atta", 1069}, {"Subhan", 1055}};
    CS bscsss2[10] = {
        {"Nimra Sadiq", 1096}, {"Nouman Riaz", 1062}, {"Amna Azhar", 1005}, {"Mahrukh Fatima", 1040}, {"Hadia Latif", 1029}, {"Abu Bakar Khalid", 1069}, {"Arsalan Ahmad", 1056}, {"Amna Noor", 1084}, {"Muhammad Hamza", 1045}, {"Haji Rehman", 1064}};

    while (true)
    {
        system("cls"); 
        system("color 2");
        cout << "*************Program to show high numbers in CS************" << endl;
        cout << "Press 1 for search  in BSCS REG" << endl;
        cout << "Press 2 for search  in BSCS SS1" << endl;
        cout << "Press 3 for search  in BSCS SS2" << endl;
        cout << "Press 4 for search  OverALL" << endl;
        cout << "Press 5 for Highest in BSCS REG" << endl;
        cout << "Press 6 for Highest in BSCS SS1" << endl;
        cout << "Press 7 for Highest in BSCS SS2" << endl;
        cout << "Press 8 for Highest OverALL" << endl;
        cout<<"Press Esc for Exit"<<endl;
        cout << "\n\n";
        cout << "Enter your choice  >>  ";
        int choice = getche() - 48;
        switch (choice)
        {
        case 1:
            search_by_name(bscsreg, 10);
            break;
        case 2:
            search_by_name(bscsss1, 10);
            break;
        case 3:
            search_by_name(bscsss2, 10);
            break;
        case 4:
            search_overall(bscsreg, bscsss1, bscsss2, 10, 10, 10);
            break;
        case 5:
            maax(bscsreg, 10);
            break;
        case 6:
            maax(bscsss1, 10);
            break;
        case 7:
            maax(bscsss2, 10);
            break;
        case 8:
            max_overall(bscsreg, bscsss1, bscsss2, 10, 10, 10);
            break;
        case -21:
            exit(1);
            break;
        default:
        cout<<endl;
            cout<<"Invalid Choice..."<<endl;  cout<<"\n\n";
    cout<<"Press any key to continue."<<endl;
    cin.ignore();
            break;
        }
    }

    return 0;
}

void search_by_name(CS *arr, int size)
{
    system("cls");
    cout << "*****************SEARCH BY NAME*************" << endl;
    cout << "\n";
    cout << "ENter Name of Student:   ";
    char name[25];
    cin.getline(name, 25);
    int o, flag(-1);
    for (int i = 0; i < size; i++)
    {
        o = strcmp(name, arr[i].name);
        if (o == 0)
        {
            flag = i;
            break;
        }
    }
    cout << "\n\n";
    if (flag != -1)
    {
        cout << arr[flag].name << " has " << arr[flag].numbers << " Numbers " << endl;
    }
    else
    {
        cout << "Student Don't Found....." << endl;
    }
      cout<<"\n\n";
    cout<<"Press any key to continue."<<endl;
    cin.ignore();
}

void search_overall(CS *arr1, CS *arr2, CS *arr3, int s1, int s2, int s3)
{   system("cls");
    cout << "*****************SEARCH BY NAME*************" << endl;
    cout << "\n";
    cout << "ENter Name of Student:   ";
    char name[25];
    cin.getline(name, 25);
    int o, flag(-1);

    for (int i = 0; i < s1; i++)
    {
        o = strcmp(name, arr1[i].name);
        if (o == 0)
        {
            flag = i;
            break;
        }
    }
    cout << "\n\n";
    if (flag != -1)
    {
        cout << arr1[flag].name << " has " << arr1[flag].numbers << " Numbers "<<"and from BSCS 1st REG" << endl;
    }
    else
    {
        for (int i = 0; i < s2; i++)
        {
            o = strcmp(name, arr2[i].name);
            if (o == 0)
            {
                flag = i;
                break;
            }
        }
        cout << "\n\n";
        if (flag != -1)
        {
            cout << arr2[flag].name << " has " << arr2[flag].numbers << " Numbers " <<"and from BSCS Self SS1"<< endl;
        }
        else
        {
            for (int i = 0; i < s3; i++)
            {
                o = strcmp(name, arr3[i].name);
                if (o == 0)
                {
                    flag = i;
                    break;
                }
            }
            cout << "\n\n";
            if (flag != -1)
            {
                cout << arr3[flag].name << " has " << arr3[flag].numbers << " Numbers "<<"and from BSCS Self SS2" << endl;
            }
            else
            {
                cout << "Student Don't Found....." << endl;
            }
        }
    }
    cout<<"\n\n";
cout<<"Press any key to continue."<<endl;
    cin.ignore();
}
void maax(CS *arr, int size)
{
    system("cls");
    cout << "*****************MAXIMUM MARKS*************" << endl;
    int max=0,min(0);
    for (int i = 0; i < size; i++){
        if (arr[i].numbers>arr[max].numbers)
        {
            max=i;
        }
        if (arr[i].numbers<arr[min].numbers)
        {
            min=i;
        }
    }
    cout << "\n";
        cout << arr[max].name << " has Maximum " << arr[max].numbers << " Numbers " << endl;
        cout << arr[min].name << " has Minimum " << arr[min].numbers << " Numbers " << endl;
    cout<<"\n\n";
    cout<<"Press any key to continue."<<endl;
    cin.ignore();
}
void max_overall(CS *arr1, CS *arr2, CS *arr3, int s1, int s2, int s3)
{
 system("cls");
    cout << "*****************MAXIMUM MARKS*************" << endl;
    int max1=0,min1(0);
    for (int i = 0; i < s1; i++){
        if (arr1[i].numbers>arr1[max1].numbers)
        {
            max1=i;
        }
        if (arr1[i].numbers<arr1[min1].numbers)
        {
            min1=i;
        }
    }
    int max2=0,min2(0);
    for (int i = 0; i < s2; i++){
        if (arr2[i].numbers>arr2[max2].numbers)
        {
            max2=i;
        }
        if (arr2[i].numbers<arr2[min2].numbers)
        {
            min2=i;
        }
    }
    int max3=0,min3(0);
    for (int i = 0; i < s3; i++){
        if (arr3[i].numbers>arr3[max3].numbers)
        {
            max3=i;
        }
        if (arr3[i].numbers<arr3[min3].numbers)
        {
            min3=i;
        }
    }
    cout<<"\n\n";
if ((arr1[max1].numbers>arr3[max3].numbers)&&(arr1[max1].numbers>arr2[max2].numbers))
        cout << arr1[max1].name << " has Maximum " << arr1[max1].numbers << " Numbers " << endl;

if ((arr2[max2].numbers>arr3[max3].numbers)&&(arr2[max2].numbers>arr1[max1].numbers))
        cout << arr2[max2].name << " has Maximum " << arr2[max2].numbers << " Numbers " << endl;

if ((arr3[max3].numbers>arr1[max1].numbers)&&(arr3[max3].numbers>arr2[max2].numbers))
        cout << arr3[max3].name << " has Maximum " << arr3[max3].numbers << " Numbers " << endl;





if ((arr1[min1].numbers<arr3[min3].numbers)&&(arr1[min1].numbers<arr2[min2].numbers))
        cout << arr1[min1].name << " has Minimum " << arr1[min1].numbers << " Numbers " << endl;

if ((arr2[min2].numbers<arr3[min3].numbers)&&(arr2[min2].numbers<arr1[min1].numbers))
        cout << arr2[min2].name << " has Minimum " << arr2[min2].numbers << " Numbers " << endl;

if ((arr3[min3].numbers<arr1[min1].numbers)&&(arr3[min3].numbers<arr2[min2].numbers))
        cout << arr3[min3].name << " has Minimum " << arr3[min3].numbers << " Numbers " << endl;





    cout<<"\n\n";
    cout<<"Press any key to continue."<<endl;
    cin.ignore();
}
