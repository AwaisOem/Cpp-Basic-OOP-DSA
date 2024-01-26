#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
int main(){
   const char* stud[]={"Nimra Sadiq","Zain Iqbal","Muhammad Nouman Riaz","Amna Azhar","Muhammad Abdullah","Muhammad Saqib","Muhammad Usman","Mahrukh Fatima","Muhammad Awais Raza","Arslan Shah","Saira Noreen","Ariqa Nayab","Daima Iftikhar","Haseeb Bilal","Huzaifa Aslam","Muhammad Ali","Kaneez Fatima","Ayesha Atta","Subhan","Hadia Latif","Abu Bakar Khalid","Muhammad Saad Mukhtar","Arsalan Ahmad","Ismail Bin Asim","Amna Noor","Muhammad Hamza","Isbah Imran","Arshiya Arif","Qadir Usman","Hadeeqa Nisa","Sobia Zafar","Khurram Shehzad","Nasrullah Khizar","Zain Ul Abidden","Ali Hamza Yaseen","Ayesha","Mubeen Musharraf","Abeer Zafar","Muhammad Ali Abbas","Areeba Maryam","Ifra Mariam","Dilbar Ali","Haji Rahman","Muhammad Sohaib","Muhammad Yahya Khalid","Muhammad Awais","Fida Ullah","Laiba Noor","Muhammad Ateeb","Shakeel Ahmad Khan"};
   
char phy[51]={'P','A','A','P','P','A','P','A','P','P','A','A','P','A','A','P','P','P','A','P','A','P','A','A','P','P','A','P','P','P','P','A','P','A','P','P','P','P','A','A','P','P','P','P','P','A','A','P','P','A','-'};
   
   
  int numbers[]={1096,1091,1088,1084,1082,1081,1081,1080,1079,1077,1077,1075,1074,1073,1072,1072,1070,1066,1065,1064,1064,1063,1063,1061,1060,1060,1055,1054,1053,1052,1052,1052,1052,1051,1051,1050,1049,1049,1045,1042,1018,1010,936,928,926,849,845,784,619,577};
  
  
  /*ofstream set;
  set.open("phy1.cpp");
  for(int i=0;i<=49;i++){
      set<<att[i];
   }
  set.close();*/
 /* char frt[51];
   ifstream gst1;
   gst1.open("file.txt");
   for(int i=0;i<=49;i++){
       gst1>>frt[i];
   
   
   }
   gst1.close();
   
   
   cout<<setw(6)<<sizeof(frt);
   
   cout<<"\n\n\n";
   
   for(int i=0;i<=49;i++){
   
   cout<<frt[i];}*/
   
   
   
   ifstream gst31;
   gst31.open("phy4.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst31>>phy[i];}
   gst31.close();
   return 0;
}