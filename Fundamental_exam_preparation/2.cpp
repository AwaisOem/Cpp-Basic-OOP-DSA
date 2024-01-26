#include<iostream>
using namespace std;
int main(){
//     for(int i=5;i>=1;i--)
//     {for(int j=4;j>=i;j--)
//     cout<<" ";
//         for(int k=1;k<=10;k++)
//         {
//             if(i==5){
//                 cout<<k;
//                 if(k==5)
//                 {cout<<endl;
//                 break;}
//             }
//             else if(i==4){
//                 if(k%2==0)
//                 cout<<k;
//                 if(k==8)
//                 {cout<<endl;
//                 break;}
//             }
//             else if(i==3){
//                 if(k%3==0)
//                 cout<<k;
//                 if(k==9)
//                 {cout<<endl;
//                 break;}
//             }
//             else if(i==2){
//                 if(k%4==0)
//                 cout<<k;
//                 if(k==8)
//                 {cout<<endl;
//                     break;}
//             }
//             else if(i==1){
//                 if(k%5==0)
//                 cout<<k;
//                 if(k==5)
//                 {cout<<endl;
//                 break;}
//             }
//     }
// }
for (int i =1; i<=5; i++)
{
    for (int j=1; j<=i; j++)
    {
        cout<<" ";
    }
    for (int k = 1; k <=5-i+1; k++)
    {
        cout<<i*k;
    }
    cout<<"\n";
    
}

}