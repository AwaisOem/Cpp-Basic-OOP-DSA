#include <iostream>
using namespace std;
int main()
{ //                                                            2
   //    char n;
   //    cout << "Enter Any Letter: ";
   //    cin >> n;
   //    int in=int(n);
   //    if (in >= 65 and in <= 90)
   //    {
   //       cout << "Letter is UPPER Case....";
   //    }
   //    else if (in >= 97 and in <= 122)
   //    {
   //       cout << "Letter is lower Case....";
   //    }
   //    else if (in >= 48 and in <= 57)
   //    {
   //       cout << "Letter is Digit....";
   //    }
   //    else if ((in >= 0 and in <= 47)or(in >= 58 and in <= 64)or(in >= 91 and in <= 96)or(in >= 123 and in <= 127))
   //    {
   //       cout << "Letter is Symbol....";
   //    }else{
   //       cout<<"Invalid";
   //    }
   //
   //                                                                  3
   // long in;
   // cout << "Enter units of electricity:  ";
   // cin >> in;
   // long bill;
   // if (in <= 100)
   // {
   //    bill = in * 5.5;
   // }
   // else if (in > 100 && in <= 250)
   // {
   //    bill = (100 * 5.5) + ((in - 100) * 7.5);
   // }
   // else if (in > 250)
   // {
   //    bill = (100 * 5.5) + (150 * 7.5) + ((in - 250) * 10.5);
   // }
   // bill += 50;
   // if (bill > 1500)
   // {
   //    float s = bill * 7 / 100;
   //    bill += s;
   // }
   // cout << "Here is your Bill:  " << bill;

   //                                                   4
   // short leap;
   // cout << "Enter any year:  ";
   // cin >> leap;

   // if ((leap % 100 == 0 && leap % 400 == 0) || (leap % 4 == 0 && leap % 100 != 0))
   // {
   //    cout << "This is leap year";
   // }
   // else
   // {
   //    cout << "This is not leap year";
   // }

   //                                                         5
   // int calls;
   // cout << "Enter Number of Calls: ";
   // cin >> calls;
   // double bill;
   // if (calls <= 100)
   // {
   //    bill = 200;
   // }
   // else if (calls > 100 && calls <= 150)
   // {
   //    bill = 200 + (calls - 100) * 0.60;
   // }
   // else if (calls > 150 && calls <= 200)
   // {
   //    bill = 200 + (50 * 0.60) + (calls - 150) * 0.50;
   // }
   // else if (calls > 200)
   // {

   //    bill = 200 + (50 * 0.60) + (50 * 0.50) + (calls - 200) * 0.40;
   // }

   // cout << "Your Telephon Bill is " << bill;

   //                                                       6
   // int in;
   // cout<<"Enter any number to check if it is amstrong or not:  ";
   // cin>>in;
   // int d1,d2,d3,org;
   // org=in;
   // d3=in%10;
   // in/=10;
   // d2=in%10;
   // in/=10;
   // d1=in%10;
   // int r=d1*d1*d1+d2*d2*d2+d3*d3*d3;
   // if(r==org){
   //    cout<<"Number is Amstrong.........";
   // }
   // else{
   //    cout<<"Number is not Amstrong.....";
   // }

   //                                                           7
   // double bs,gs,HRA,DA;
   // cout<<"Enter Basic Salary:   ";
   // cin>>bs;
   // if(bs<=10000){
   //       HRA=bs*20/100;
   //       DA=bs*80/100;
   //       gs=bs+HRA+DA;
   // }else if(bs>10000&&bs<=20000){
   //       HRA=bs*25/100;
   //       DA=bs*90/100;
   //       gs=bs+HRA+DA;
   // }else if(bs>20000){
   //       HRA=bs*30/100;
   //       DA=bs*95/100;
   //       gs=bs+HRA+DA;
   // }
   // cout<<"Here is Gross Salary:  "<<gs;

   //

   //                                                            8

//    cout << "Enter the Grade: ";
//    short grade;
//    cin >> grade;
//    cout << "Enter total Salary: ";
//    double salary, per;
//    cin >> salary;

//    switch (grade)
//    {
//    case 21:
//       per = salary * 17 / 100;
//       salary -= per;
//       break;
//    case 17:
//       per = salary * 15 / 100;
//       salary -= per;
//       break;
//    case 11:
//       per = salary * 7 / 100;
//       salary -= per;
//       break;
//    default:
//       cout << "invalid variable....";
//       main();
//    }
// cout<<"Here is your salary:   "<<salary;



// Prime number
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// int l=0;
// for(int i=2;i<n;i++)
// {
//    for(int j=2;j<i;j++){
//       if(i%j==0){l=1;break;}
//    }
//    if(l==0)
//    {cout<<i<<" ";}
//    l=0;

// }

   //  consonent
//  int n;
// cout<<"Enter the number: ";
// cin>>n;
// int l=0;
// for(int i=2;i<n;i++)
// {
//    for(int j=2;j<i;j++){
//       if(i%j==0){l=1;break;}
//    }
//    if(l==1)
//    {cout<<i<<" ";}
//    l=0;

// }

                              //   2*5 rectangle
//   int r;
//    cin>>r;
//    for (int i = 1; i <= r; i++)
//    {
//       /* code */
//       for (int j = 1; j <=2.5*r; j++)
//       {
//          cout<<"*";
//       }
//       cout<<"\n";
//    }




//   int r;
//    cin>>r;
//    for (int i = 1; i <= r; i++)
//    {
//       // for (int k =1; k<=r-i; k++)
//       // {
//       //    cout<<" ";
//       // }
      
      
//       for (int j = 1; j <=i; j++)
//         { 
//             cout<<i*j;
           
//         }
//       cout<<"\n";
//    }
   


// for (int i =1; i <=r; i++)
// {
//    for (int j =1; j <=r; j++)
//    {
//       cout<<i*j<<"\t";
//    }
//    cout<<"\n\n";
// }


// for (int i =1; i <=r; i++)
// {
// for (int j =1; j <=r-i; j++)
// {
// cout<<" ";
// }
// int l=i;
// for (int k =1; k <=i; k++)
// {
// cout<<l--;
// }
// for (int m =2; m <=i; m++)
// {
// cout<<m;
// }
// cout<<"\n";
// }


//    for (int i =1; i<=r; i++){
//  static int l=r;
//       for (int k = 1; k <=r-i; k++)
//       {
//          cout<<" ";
//       }
//       for (int j =1; j <=i; j++)
//       {
//          cout<<j*l;
//       }
//          l--;
//       cout<<"\n";
//    }

   return 0;
}