#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;


char phy1[51];
char phy2[51];
char phy3[51];
char phy4[51];
char phy5[51];
char phy6[51];
char phy7[51];
char phy8[51];
char phy9[51];
char phy10[51];
char phy11[51];
char phy12[51];
char phy13[51];
char phy14[51];
char phy15[51];
char phy16[51];
char phy17[51];
char phy18[51];
char phy19[51];
char phy20[51];
char phy21[51];
char phy22[51];
char phy23[51];
char phy24[51];
char phy25[51];
char phy26[51];
char phy27[51];
char phy28[51];
char phy29[51];
char phy30[51];
char phy31[51];
char prog1[51];
char prog2[51];
char prog3[51];
char prog4[51];
char prog5[51];
char prog6[51];
char prog7[51];
char prog8[51];
char prog9[51];
char prog10[51];
char prog11[51];
char prog12[51];
char prog13[51];
char prog14[51];
char prog15[51];
char prog16[51];
char prog17[51];
char prog18[51];
char prog19[51];
char prog20[51];
char prog21[51];
char prog22[51];
char prog23[51];
char prog24[51];
char prog25[51];
char prog26[51];
char prog27[51];
char prog28[51];
char prog29[51];
char prog30[51];
char prog31[51];
char Eng1[51];
char Eng2[51];
char Eng3[51];
char Eng4[51];
char Eng5[51];
char Eng6[51];
char Eng7[51];
char Eng8[51];
char Eng9[51];
char Eng10[51];
char Eng11[51];
char Eng12[51];
char Eng13[51];
char Eng14[51];
char Eng15[51];
char Eng16[51];
char Eng17[51];
char Eng18[51];
char Eng19[51];
char Eng20[51];
char Eng21[51];
char Eng22[51];
char Eng23[51];
char Eng24[51];
char Eng25[51];
char Eng26[51];
char Eng27[51];
char Eng28[51];
char Eng29[51];
char Eng30[51];
char Eng31[51];
char Isl1[51];
char Isl2[51];
char Isl3[51];
char Isl4[51];
char Isl5[51];
char Isl6[51];
char Isl7[51];
char Isl8[51];
char Isl9[51];
char Isl10[51];
char Isl11[51];
char Isl12[51];
char Isl13[51];
char Isl14[51];
char Isl15[51];
char Isl16[51];
char Isl17[51];
char Isl18[51];
char Isl19[51];
char Isl20[51];
char Isl21[51];
char Isl22[51];
char Isl23[51];
char Isl24[51];
char Isl25[51];
char Isl26[51];
char Isl27[51];
char Isl28[51];
char Isl29[51];
char Isl30[51];
char Isl31[51];
char ICT1[51];
char ICT2[51];
char ICT3[51];
char ICT4[51];
char ICT5[51];
char ICT6[51];
char ICT7[51];
char ICT8[51];
char ICT9[51];
char ICT10[51];
char ICT11[51];
char ICT12[51];
char ICT13[51];
char ICT14[51];
char ICT15[51];
char ICT16[51];
char ICT17[51];
char ICT18[51];
char ICT19[51];
char ICT20[51];
char ICT21[51];
char ICT22[51];
char ICT23[51];
char ICT24[51];
char ICT25[51];
char ICT26[51];
char ICT27[51];
char ICT28[51];
char ICT29[51];
char ICT30[51];
char ICT31[51];
char Math1[51];
char Math2[51];
char Math3[51];
char Math4[51];
char Math5[51];
char Math6[51];
char Math7[51];
char Math8[51];
char Math9[51];
char Math10[51];
char Math11[51];
char Math12[51];
char Math13[51];
char Math14[51];
char Math15[51];
char Math16[51];
char Math17[51];
char Math18[51];
char Math19[51];
char Math20[51];
char Math21[51];
char Math22[51];
char Math23[51];
char Math24[51];
char Math25[51];
char Math26[51];
char Math27[51];
char Math28[51];
char Math29[51];
char Math30[51];
char Math31[51];




const char* students[]={"Nimra Sadiq","Zain Iqbal","Nouman Riaz","Amna Azhar","Muhammad Abdullah","Muhammad Saqib","Muhammad Usman","Mahrukh Fatima","Awais Raza","Arslan Shah","Saira Noreen","Ariqa Nayab","Daima Iftikhar","Haseeb Bilal","Huzaifa Aslam","Muhammad Ali","Kaneez Fatima","Ayesha Atta","Subhan","Hadia Latif","Abu Bakar Khalid","Saad Mukhtar","Arsalan Ahmad","Ismail","Amna Noor","Muhammad Hamza","Isbah Imran","Arshiya Arif","Qadir Usman","Hadeeqa Nisa","Sobia Zafar","Khurram Shehzad","Nasrullah Khizar","Zain Ul Abidden","Ali Hamza Yaseen","Ayesha","Mubeen Musharraf","Abeer Zafar","Ali Abbas","Areeba Maryam","Ifra Mariam","Dilbar Ali","Haji Rahman","Muhammad Sohaib","Yahya Khalid","Muhammad Awais","Fida Ullah","Laiba Noor","Muhammad Ateeb","Shakeel Ahmad"};









void s0(){
    cout<<"__________________________________________________________"<<endl;
    cout<<setw(17)<<left<<"Student Name";
    
    
  for(int i=1;i<=10;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;

   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
cout<<endl;

for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<left<<setw(2)<<phy1[i]<<setw(2)<<"|"<<setw(2)<<left<<phy2[i]<<setw(2)<<"|"<<setw(2)<<left<<phy3[i]<<setw(2)<<"|"<<setw(2)<<left<<phy4[i]<<setw(2)<<"|"<<setw(2)<<left<<phy5[i]<<setw(2)<<"|"<<setw(2)<<left<<phy6[i]<<setw(2)<<"|"<<setw(2)<<left<<phy7[i]<<setw(2)<<"|"<<setw(2)<<left<<phy8[i]<<setw(2)<<"|"<<setw(2)<<left<<phy9[i]<<setw(2)<<"|"<<setw(2)<<left<<phy10[i]<<setw(2)<<"|"<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    cout<<"\n\n\n\n\n"; 
    cout<<"__________________________________________________________"<<endl;
     cout<<setw(17)<<left<<"Student Name";
    
for(int i=11;i<=20;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<phy11[i]<<setw(2)<<"|"<<setw(2)<<left<<phy12[i]<<setw(2)<<"|"<<setw(2)<<left<<phy13[i]<<setw(2)<<"|"<<setw(2)<<left<<phy14[i]<<setw(2)<<"|"<<setw(2)<<left<<phy15[i]<<setw(2)<<"|"<<left<<setw(2)<<phy16[i]<<setw(2)<<"|"<<setw(2)<<left<<phy17[i]<<setw(2)<<"|"<<setw(2)<<left<<phy18[i]<<setw(2)<<"|"<<setw(2)<<left<<phy19[i]<<setw(2)<<"|"<<setw(2)<<left<<phy20[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout<<"\n\n\n\n\n";
    cout<<"______________________________________________________________"<<endl;
cout<<setw(17)<<left<<"Student Name";
    for(int i=21;i<=31;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<phy21[i]<<setw(2)<<"|"<<setw(2)<<left<<phy22[i]<<setw(2)<<"|"<<setw(2)<<left<<phy23[i]<<setw(2)<<"|"<<setw(2)<<left<<phy24[i]<<setw(2)<<"|"<<setw(2)<<left<<phy25[i]<<setw(2)<<"|"<<setw(2)<<left<<phy26[i]<<setw(2)<<"|"<<setw(2)<<left<<phy27[i]<<setw(2)<<"|"<<setw(2)<<left<<phy28[i]<<setw(2)<<"|"<<setw(2)<<left<<phy29[i]<<setw(2)<<"|"<<setw(2)<<left<<phy30[i]<<"|"<<setw(3)<<phy31[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    }



void s1(){
    cout<<"__________________________________________________________"<<endl;
    cout<<setw(17)<<left<<"Student Name";
    
    
  for(int i=1;i<=10;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;

   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
cout<<endl;

for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<left<<setw(2)<<prog1[i]<<setw(2)<<"|"<<setw(2)<<left<<prog2[i]<<setw(2)<<"|"<<setw(2)<<left<<prog3[i]<<setw(2)<<"|"<<setw(2)<<left<<prog4[i]<<setw(2)<<"|"<<setw(2)<<left<<prog5[i]<<setw(2)<<"|"<<setw(2)<<left<<prog6[i]<<setw(2)<<"|"<<setw(2)<<left<<prog7[i]<<setw(2)<<"|"<<setw(2)<<left<<prog8[i]<<setw(2)<<"|"<<setw(2)<<left<<prog9[i]<<setw(2)<<"|"<<setw(2)<<left<<prog10[i]<<setw(2)<<"|"<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    cout<<"\n\n\n\n\n"; 
    cout<<"__________________________________________________________"<<endl;
     cout<<setw(17)<<left<<"Student Name";
    
for(int i=11;i<=20;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<prog11[i]<<setw(2)<<"|"<<setw(2)<<left<<prog12[i]<<setw(2)<<"|"<<setw(2)<<left<<prog13[i]<<setw(2)<<"|"<<setw(2)<<left<<prog14[i]<<setw(2)<<"|"<<setw(2)<<left<<prog15[i]<<setw(2)<<"|"<<left<<setw(2)<<prog16[i]<<setw(2)<<"|"<<setw(2)<<left<<prog17[i]<<setw(2)<<"|"<<setw(2)<<left<<prog18[i]<<setw(2)<<"|"<<setw(2)<<left<<prog19[i]<<setw(2)<<"|"<<setw(2)<<left<<prog20[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout<<"\n\n\n\n\n";
    cout<<"______________________________________________________________"<<endl;
cout<<setw(17)<<left<<"Student Name";
    for(int i=21;i<=31;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<prog21[i]<<setw(2)<<"|"<<setw(2)<<left<<prog22[i]<<setw(2)<<"|"<<setw(2)<<left<<prog23[i]<<setw(2)<<"|"<<setw(2)<<left<<prog24[i]<<setw(2)<<"|"<<setw(2)<<left<<prog25[i]<<setw(2)<<"|"<<setw(2)<<left<<prog26[i]<<setw(2)<<"|"<<setw(2)<<left<<prog27[i]<<setw(2)<<"|"<<setw(2)<<left<<prog28[i]<<setw(2)<<"|"<<setw(2)<<left<<prog29[i]<<setw(2)<<"|"<<setw(2)<<left<<prog30[i]<<"|"<<setw(3)<<left<<prog31[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    }



void s2(){
    cout<<"__________________________________________________________"<<endl;
    cout<<setw(17)<<left<<"Student Name";
    
    
  for(int i=1;i<=10;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;

   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
cout<<endl;

for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<left<<setw(2)<<ICT1[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT2[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT3[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT4[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT5[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT6[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT7[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT8[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT9[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT10[i]<<setw(2)<<"|"<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    cout<<"\n\n\n\n\n"; 
    cout<<"__________________________________________________________"<<endl;
     cout<<setw(17)<<left<<"Student Name";
    
for(int i=11;i<=20;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT11[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT12[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT13[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT14[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT15[i]<<setw(2)<<"|"<<left<<setw(2)<<ICT16[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT17[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT18[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT19[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT20[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout<<"\n\n\n\n\n";
    cout<<"______________________________________________________________"<<endl;
cout<<setw(17)<<left<<"Student Name";
    for(int i=21;i<=31;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT21[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT22[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT23[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT24[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT25[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT26[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT27[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT28[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT29[i]<<setw(2)<<"|"<<setw(2)<<left<<ICT30[i]<<"|"<<setw(3)<<left<<ICT31[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    }
void s3(){
    cout<<"__________________________________________________________"<<endl;
    cout<<setw(17)<<left<<"Student Name";
    
    
  for(int i=1;i<=10;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;

   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
cout<<endl;

for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<left<<setw(2)<<Eng1[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng2[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng3[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng4[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng5[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng6[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng7[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng8[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng9[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng10[i]<<setw(2)<<"|"<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    cout<<"\n\n\n\n\n"; 
    cout<<"__________________________________________________________"<<endl;
     cout<<setw(17)<<left<<"Student Name";
    
for(int i=11;i<=20;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng11[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng12[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng13[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng14[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng15[i]<<setw(2)<<"|"<<left<<setw(2)<<Eng16[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng17[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng18[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng19[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng20[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout<<"\n\n\n\n\n";
    cout<<"______________________________________________________________"<<endl;
cout<<setw(17)<<left<<"Student Name";
    for(int i=21;i<=31;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng21[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng22[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng23[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng24[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng25[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng26[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng27[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng28[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng29[i]<<setw(2)<<"|"<<setw(2)<<left<<Eng30[i]<<"|"<<setw(3)<<left<<Eng31[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    }


void s4(){
    cout<<"__________________________________________________________"<<endl;
    cout<<setw(17)<<left<<"Student Name";
    
    
  for(int i=1;i<=10;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;

   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
cout<<endl;

for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<left<<setw(2)<<Isl1[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl2[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl3[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl4[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl5[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl6[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl7[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl8[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl9[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl10[i]<<setw(2)<<"|"<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    cout<<"\n\n\n\n\n"; 
    cout<<"__________________________________________________________"<<endl;
     cout<<setw(17)<<left<<"Student Name";
    
for(int i=11;i<=20;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl11[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl12[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl13[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl14[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl15[i]<<setw(2)<<"|"<<left<<setw(2)<<Isl16[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl17[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl18[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl19[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl20[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout<<"\n\n\n\n\n";
    cout<<"______________________________________________________________"<<endl;
cout<<setw(17)<<left<<"Student Name";
    for(int i=21;i<=31;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl21[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl22[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl23[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl24[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl25[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl26[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl27[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl28[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl29[i]<<setw(2)<<"|"<<setw(2)<<left<<Isl30[i]<<"|"<<setw(3)<<left<<Isl31[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    }

void s5(){
    cout<<"__________________________________________________________"<<endl;
    cout<<setw(17)<<left<<"Student Name";
    
    
  for(int i=1;i<=10;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;

   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
cout<<endl;

for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<left<<setw(2)<<Math1[i]<<setw(2)<<"|"<<setw(2)<<left<<Math2[i]<<setw(2)<<"|"<<setw(2)<<left<<Math3[i]<<setw(2)<<"|"<<setw(2)<<left<<Math4[i]<<setw(2)<<"|"<<setw(2)<<left<<Math5[i]<<setw(2)<<"|"<<setw(2)<<left<<Math6[i]<<setw(2)<<"|"<<setw(2)<<left<<Math7[i]<<setw(2)<<"|"<<setw(2)<<left<<Math8[i]<<setw(2)<<"|"<<setw(2)<<left<<Math9[i]<<setw(2)<<"|"<<setw(2)<<left<<Math10[i]<<setw(2)<<"|"<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    cout<<"\n\n\n\n\n"; 
    cout<<"__________________________________________________________"<<endl;
     cout<<setw(17)<<left<<"Student Name";
    
for(int i=11;i<=20;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";
   cout<<endl;
   
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<Math11[i]<<setw(2)<<"|"<<setw(2)<<left<<Math12[i]<<setw(2)<<"|"<<setw(2)<<left<<Math13[i]<<setw(2)<<"|"<<setw(2)<<left<<Math14[i]<<setw(2)<<"|"<<setw(2)<<left<<Math15[i]<<setw(2)<<"|"<<left<<setw(2)<<Math16[i]<<setw(2)<<"|"<<setw(2)<<left<<Math17[i]<<setw(2)<<"|"<<setw(2)<<left<<Math18[i]<<setw(2)<<"|"<<setw(2)<<left<<Math19[i]<<setw(2)<<"|"<<setw(2)<<left<<Math20[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout<<"\n\n\n\n\n";
    cout<<"______________________________________________________________"<<endl;
cout<<setw(17)<<left<<"Student Name";
    for(int i=21;i<=31;i++){
cout<<setw(2)<<right<<"|"<<setw(2)<<i;}cout<<setw(2)<<"|";
cout<<endl;
   cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";
   
   cout<<endl;
   
for (int i = 0; i <= 49; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<setw(2)<<left<<Math21[i]<<setw(2)<<"|"<<setw(2)<<left<<Math22[i]<<setw(2)<<"|"<<setw(2)<<left<<Math23[i]<<setw(2)<<"|"<<setw(2)<<left<<Math24[i]<<setw(2)<<"|"<<setw(2)<<left<<Math25[i]<<setw(2)<<"|"<<setw(2)<<left<<Math26[i]<<setw(2)<<"|"<<setw(2)<<left<<Math27[i]<<setw(2)<<"|"<<setw(2)<<left<<Math28[i]<<setw(2)<<"|"<<setw(2)<<left<<Math29[i]<<setw(2)<<"|"<<setw(2)<<left<<Math30[i]<<"|"<<setw(3)<<left<<Math31[i]<<setw(2)<<"|"<<endl; cout<<"__________________|___|___|___|___|___|___|___|___|___|___|___|";cout<<endl;};
    
    
    
    
    
    
    
    }


int main(){
    
    ifstream gst1;
   gst1.open("phy1.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst1>>phy1[i];}
   gst1.close();
   
   //char phy2[51];
   ifstream gst2;
   gst2.open("phy2.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst2>>phy2[i];}
   gst2.close();
   
   //char phy3[51];
   ifstream gst3;
   gst3.open("phy3.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst3>>phy3[i];}
   gst3.close();
   
   //char phy4[51];
   ifstream gst4;
   gst4.open("phy4.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst4>>phy4[i];}
   gst4.close();
   
   //char phy5[51];
   ifstream gst5;
   gst5.open("phy5.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst5>>phy5[i];}
   gst5.close();
   
   //char phy6[51];
   ifstream gst6;
   gst6.open("phy6.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst6>>phy6[i];}
   gst6.close();
   
   //char phy7[51];
   ifstream gst7;
   gst7.open("phy7.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst7>>phy7[i];}
   gst7.close();
   
   

//char phy8[51];
   ifstream gst8;
   gst8.open("phy8.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst8>>phy8[i];}
   gst8.close();
   

//char phy9[51];
   ifstream gst9;
   gst9.open("phy9.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst9>>phy9[i];}
   gst9.close();
   

//char phy10[51];
   ifstream gst10;
   gst10.open("phy10.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst10>>phy10[i];}
   gst10.close();
   

//char phy11[51];
   ifstream gst11;
   gst11.open("phy11.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst11>>phy11[i];}
   gst11.close();
   

//char phy12[51];
   ifstream gst12;
   gst12.open("phy12.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst12>>phy12[i];}
   gst12.close();
   

//char phy13[51];
   ifstream gst13;
   gst13.open("phy13.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst13>>phy13[i];}
   gst13.close();
   

//char phy14[51];
   ifstream gst14;
   gst14.open("phy14.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst14>>phy14[i];}
   gst14.close();
   

//char phy15[51];
   ifstream gst15;
   gst15.open("phy15.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst15>>phy15[i];}
   gst15.close();
   

//char phy16[51];
   ifstream gst16;
   gst16.open("phy16.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst16>>phy16[i];}
   gst16.close();
   

//char phy17[51];
   ifstream gst17;
   gst17.open("phy17.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst17>>phy17[i];}
   gst17.close();
   

//char phy18[51];
   ifstream gst18;
   gst18.open("phy18.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst18>>phy18[i];}
   gst18.close();
   

//char phy19[51];
   ifstream gst19;
   gst19.open("phy19.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst19>>phy19[i];}
   gst19.close();
   

//char phy20[51];
   ifstream gst20;
   gst20.open("phy20.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst20>>phy20[i];}
   gst20.close();
   

//char phy21[51];
   ifstream gst21;
   gst21.open("phy21.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst21>>phy21[i];}
   gst21.close();
   

//char phy22[51];
   ifstream gst22;
   gst22.open("phy22.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst22>>phy22[i];}
   gst22.close();
   

//char phy23[51];
   ifstream gst23;
   gst23.open("phy23.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst23>>phy23[i];}
   gst23.close();
   

//char phy24[51];
   ifstream gst24;
   gst24.open("phy24.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst24>>phy24[i];}
   gst24.close();
   

//char phy25[51];
   ifstream gst25;
   gst25.open("phy25.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst25>>phy25[i];}
   gst25.close();
   

//char phy26[51];
   ifstream gst26;
   gst26.open("phy26.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst26>>phy26[i];}
   gst26.close();
   

//char phy27[51];
   ifstream gst27;
   gst27.open("phy27.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst27>>phy27[i];}
   gst27.close();
   

//char phy28[51];
   ifstream gst28;
   gst28.open("phy28.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst28>>phy28[i];}
   gst28.close();
   

//char phy29[51];
   ifstream gst29;
   gst29.open("phy29.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst29>>phy29[i];}
   gst29.close();
   

//char phy30[51];
   ifstream gst30;
   gst30.open("phy30.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst30>>phy30[i];}
   gst30.close();
   

//char phy31[51];
   ifstream gst31;
   gst31.open("phy31.txt");
   for(int i=0;i<=49;i++){
   //into program
   gst31>>phy31[i];}
   gst31.close(); 
   
   
   
//**************programming*********






//char prog1[51];
   ifstream gpt1;
   gpt1.open("prog1.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt1>>prog1[i];}
   gpt1.close();
   
   //char prog2[51];
   ifstream gpt2;
   gpt2.open("prog2.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt2>>prog2[i];}
   gpt2.close();
   
   //char prog3[51];
   ifstream gpt3;
   gpt3.open("prog3.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt3>>prog3[i];}
   gpt3.close();
   
   //char prog4[51];
   ifstream gpt4;
   gpt4.open("prog4.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt4>>prog4[i];}
   gpt4.close();
   
   //char prog5[51];
   ifstream gpt5;
   gpt5.open("prog5.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt5>>prog5[i];}
   gpt5.close();
   
   //char prog6[51];
   ifstream gpt6;
   gpt6.open("prog6.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt6>>prog6[i];}
   gpt6.close();
   
   //char prog7[51];
   ifstream gpt7;
   gpt7.open("prog7.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt7>>prog7[i];}
   gpt7.close();
   
   

//char prog8[51];
   ifstream gpt8;
   gpt8.open("prog8.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt8>>prog8[i];}
   gpt8.close();
   

//char prog9[51];
   ifstream gpt9;
   gpt9.open("prog9.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt9>>prog9[i];}
   gpt9.close();
   

//char prog10[51];
   ifstream gpt10;
   gpt10.open("prog10.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt10>>prog10[i];}
   gpt10.close();
   

//char prog11[51];
   ifstream gpt11;
   gpt11.open("prog11.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt11>>prog11[i];}
   gpt11.close();
   

//char prog12[51];
   ifstream gpt12;
   gpt12.open("prog12.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt12>>prog12[i];}
   gpt12.close();
   

//char prog13[51];
   ifstream gpt13;
   gpt13.open("prog13.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt13>>prog13[i];}
   gpt13.close();
   

//char prog14[51];
   ifstream gpt14;
   gpt14.open("prog14.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt14>>prog14[i];}
   gpt14.close();
   

//char prog15[51];
   ifstream gpt15;
   gpt15.open("prog15.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt15>>prog15[i];}
   gpt15.close();
   

//char prog16[51];
   ifstream gpt16;
   gpt16.open("prog16.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt16>>prog16[i];}
   gpt16.close();
   

//char prog17[51];
   ifstream gpt17;
   gpt17.open("prog17.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt17>>prog17[i];}
   gpt17.close();
   

//char prog18[51];
   ifstream gpt18;
   gpt18.open("prog18.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt18>>prog18[i];}
   gpt18.close();
   

//char prog19[51];
   ifstream gpt19;
   gpt19.open("prog19.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt19>>prog19[i];}
   gpt19.close();
   

//char prog20[51];
   ifstream gpt20;
   gpt20.open("prog20.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt20>>prog20[i];}
   gpt20.close();
   

//char prog21[51];
   ifstream gpt21;
   gpt21.open("prog21.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt21>>prog21[i];}
   gpt21.close();
   

//char prog22[51];
   ifstream gpt22;
   gpt22.open("prog22.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt22>>prog22[i];}
   gpt22.close();
   

//char prog23[51];
   ifstream gpt23;
   gpt23.open("prog23.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt23>>prog23[i];}
   gpt23.close();
   

//char prog24[51];
   ifstream gpt24;
   gpt24.open("prog24.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt24>>prog24[i];}
   gpt24.close();
   

//char prog25[51];
   ifstream gpt25;
   gpt25.open("prog25.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt25>>prog25[i];}
   gpt25.close();
   

//char prog26[51];
   ifstream gpt26;
   gpt26.open("prog26.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt26>>prog26[i];}
   gpt26.close();
   

//char prog27[51];
   ifstream gpt27;
   gpt27.open("prog27.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt27>>prog27[i];}
   gpt27.close();
   

//char prog28[51];
   ifstream gpt28;
   gpt28.open("prog28.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt28>>prog28[i];}
   gpt28.close();
   

//char prog29[51];
   ifstream gpt29;
   gpt29.open("prog29.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt29>>prog29[i];}
   gpt29.close();
   

//char prog30[51];
   ifstream gpt30;
   gpt30.open("prog30.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt30>>prog30[i];}
   gpt30.close();
   

//char prog31[51];
   ifstream gpt31;
   gpt31.open("prog31.txt");
   for(int i=0;i<=49;i++){
   //into program
   gpt31>>prog31[i];}
   gpt31.close();   
   
   
   
   
   //************English************
   
   
   
   
   //char Eng1[51];
   ifstream gyt1;
   gyt1.open("Eng1.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt1>>Eng1[i];}
   gyt1.close();
   
   //char Eng2[51];
   ifstream gyt2;
   gyt2.open("Eng2.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt2>>Eng2[i];}
   gyt2.close();
   
   //char Eng3[51];
   ifstream gyt3;
   gyt3.open("Eng3.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt3>>Eng3[i];}
   gyt3.close();
   
   //char Eng4[51];
   ifstream gyt4;
   gyt4.open("Eng4.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt4>>Eng4[i];}
   gyt4.close();
   
   //char Eng5[51];
   ifstream gyt5;
   gyt5.open("Eng5.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt5>>Eng5[i];}
   gyt5.close();
   
   //char Eng6[51];
   ifstream gyt6;
   gyt6.open("Eng6.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt6>>Eng6[i];}
   gyt6.close();
   
   //char Eng7[51];
   ifstream gyt7;
   gyt7.open("Eng7.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt7>>Eng7[i];}
   gyt7.close();
   
   

//char Eng8[51];
   ifstream gyt8;
   gyt8.open("Eng8.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt8>>Eng8[i];}
   gyt8.close();
   

//char Eng9[51];
   ifstream gyt9;
   gyt9.open("Eng9.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt9>>Eng9[i];}
   gyt9.close();
   

//char Eng10[51];
   ifstream gyt10;
   gyt10.open("Eng10.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt10>>Eng10[i];}
   gyt10.close();
   

//char Eng11[51];
   ifstream gyt11;
   gyt11.open("Eng11.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt11>>Eng11[i];}
   gyt11.close();
   

//char Eng12[51];
   ifstream gyt12;
   gyt12.open("Eng12.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt12>>Eng12[i];}
   gyt12.close();
   

//char Eng13[51];
   ifstream gyt13;
   gyt13.open("Eng13.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt13>>Eng13[i];}
   gyt13.close();
   

//char Eng14[51];
   ifstream gyt14;
   gyt14.open("Eng14.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt14>>Eng14[i];}
   gyt14.close();
   

//char Eng15[51];
   ifstream gyt15;
   gyt15.open("Eng15.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt15>>Eng15[i];}
   gyt15.close();
   

//char Eng16[51];
   ifstream gyt16;
   gyt16.open("Eng16.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt16>>Eng16[i];}
   gyt16.close();
   

//char Eng17[51];
   ifstream gyt17;
   gyt17.open("Eng17.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt17>>Eng17[i];}
   gyt17.close();
   

//char Eng18[51];
   ifstream gyt18;
   gyt18.open("Eng18.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt18>>Eng18[i];}
   gyt18.close();
   

//char Eng19[51];
   ifstream gyt19;
   gyt19.open("Eng19.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt19>>Eng19[i];}
   gyt19.close();
   

//char Eng20[51];
   ifstream gyt20;
   gyt20.open("Eng20.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt20>>Eng20[i];}
   gyt20.close();
   

//char Eng21[51];
   ifstream gyt21;
   gyt21.open("Eng21.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt21>>Eng21[i];}
   gyt21.close();
   

//char Eng22[51];
   ifstream gyt22;
   gyt22.open("Eng22.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt22>>Eng22[i];}
   gyt22.close();
   

//char Eng23[51];
   ifstream gyt23;
   gyt23.open("Eng23.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt23>>Eng23[i];}
   gyt23.close();
   

//char Eng24[51];
   ifstream gyt24;
   gyt24.open("Eng24.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt24>>Eng24[i];}
   gyt24.close();
   

//char Eng25[51];
   ifstream gyt25;
   gyt25.open("Eng25.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt25>>Eng25[i];}
   gyt25.close();
   

//char Eng26[51];
   ifstream gyt26;
   gyt26.open("Eng26.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt26>>Eng26[i];}
   gyt26.close();
   

//char Eng27[51];
   ifstream gyt27;
   gyt27.open("Eng27.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt27>>Eng27[i];}
   gyt27.close();
   

//char Eng28[51];
   ifstream gyt28;
   gyt28.open("Eng28.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt28>>Eng28[i];}
   gyt28.close();
   

//char Eng29[51];
   ifstream gyt29;
   gyt29.open("Eng29.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt29>>Eng29[i];}
   gyt29.close();
   

//char Eng30[51];
   ifstream gyt30;
   gyt30.open("Eng30.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt30>>Eng30[i];}
   gyt30.close();
   

//char Eng31[51];
   ifstream gyt31;
   gyt31.open("Eng31.txt");
   for(int i=0;i<=49;i++){
   //into Engram
   gyt31>>Eng31[i];}
   gyt31.close();   



//**************Islamiat************



//char Isl1[51];
   ifstream gqt1;
   gqt1.open("Isl1.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt1>>Isl1[i];}
   gqt1.close();
   
   //char Isl2[51];
   ifstream gqt2;
   gqt2.open("Isl2.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt2>>Isl2[i];}
   gqt2.close();
   
   //char Isl3[51];
   ifstream gqt3;
   gqt3.open("Isl3.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt3>>Isl3[i];}
   gqt3.close();
   
   //char Isl4[51];
   ifstream gqt4;
   gqt4.open("Isl4.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt4>>Isl4[i];}
   gqt4.close();
   
   //char Isl5[51];
   ifstream gqt5;
   gqt5.open("Isl5.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt5>>Isl5[i];}
   gqt5.close();
   
   //char Isl6[51];
   ifstream gqt6;
   gqt6.open("Isl6.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt6>>Isl6[i];}
   gqt6.close();
   
   //char Isl7[51];
   ifstream gqt7;
   gqt7.open("Isl7.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt7>>Isl7[i];}
   gqt7.close();
   
   

//char Isl8[51];
   ifstream gqt8;
   gqt8.open("Isl8.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt8>>Isl8[i];}
   gqt8.close();
   

//char Isl9[51];
   ifstream gqt9;
   gqt9.open("Isl9.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt9>>Isl9[i];}
   gqt9.close();
   

//char Isl10[51];
   ifstream gqt10;
   gqt10.open("Isl10.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt10>>Isl10[i];}
   gqt10.close();
   

//char Isl11[51];
   ifstream gqt11;
   gqt11.open("Isl11.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt11>>Isl11[i];}
   gqt11.close();
   

//char Isl12[51];
   ifstream gqt12;
   gqt12.open("Isl12.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt12>>Isl12[i];}
   gqt12.close();
   

//char Isl13[51];
   ifstream gqt13;
   gqt13.open("Isl13.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt13>>Isl13[i];}
   gqt13.close();
   

//char Isl14[51];
   ifstream gqt14;
   gqt14.open("Isl14.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt14>>Isl14[i];}
   gqt14.close();
   

//char Isl15[51];
   ifstream gqt15;
   gqt15.open("Isl15.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt15>>Isl15[i];}
   gqt15.close();
   

//char Isl16[51];
   ifstream gqt16;
   gqt16.open("Isl16.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt16>>Isl16[i];}
   gqt16.close();
   

//char Isl17[51];
   ifstream gqt17;
   gqt17.open("Isl17.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt17>>Isl17[i];}
   gqt17.close();
   

//char Isl18[51];
   ifstream gqt18;
   gqt18.open("Isl18.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt18>>Isl18[i];}
   gqt18.close();
   

//char Isl19[51];
   ifstream gqt19;
   gqt19.open("Isl19.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt19>>Isl19[i];}
   gqt19.close();
   

//char Isl20[51];
   ifstream gqt20;
   gqt20.open("Isl20.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt20>>Isl20[i];}
   gqt20.close();
   

//char Isl21[51];
   ifstream gqt21;
   gqt21.open("Isl21.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt21>>Isl21[i];}
   gqt21.close();
   

//char Isl22[51];
   ifstream gqt22;
   gqt22.open("Isl22.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt22>>Isl22[i];}
   gqt22.close();
   

//char Isl23[51];
   ifstream gqt23;
   gqt23.open("Isl23.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt23>>Isl23[i];}
   gqt23.close();
   

//char Isl24[51];
   ifstream gqt24;
   gqt24.open("Isl24.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt24>>Isl24[i];}
   gqt24.close();
   

//char Isl25[51];
   ifstream gqt25;
   gqt25.open("Isl25.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt25>>Isl25[i];}
   gqt25.close();
   

//char Isl26[51];
   ifstream gqt26;
   gqt26.open("Isl26.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt26>>Isl26[i];}
   gqt26.close();
   

//char Isl27[51];
   ifstream gqt27;
   gqt27.open("Isl27.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt27>>Isl27[i];}
   gqt27.close();
   

//char Isl28[51];
   ifstream gqt28;
   gqt28.open("Isl28.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt28>>Isl28[i];}
   gqt28.close();
   

//char Isl29[51];
   ifstream gqt29;
   gqt29.open("Isl29.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt29>>Isl29[i];}
   gqt29.close();
   

//char Isl30[51];
   ifstream gqt30;
   gqt30.open("Isl30.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt30>>Isl30[i];}
   gqt30.close();
   

//char Isl31[51];
   ifstream gqt31;
   gqt31.open("Isl31.txt");
   for(int i=0;i<=49;i++){
   //into Islram
   gqt31>>Isl31[i];}
   gqt31.close();   



//**************Math****************
   
   
   
   
   //char Math1[51];
   ifstream gft1;
   gft1.open("Math1.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft1>>Math1[i];}
   gft1.close();
   
   //char Math2[51];
   ifstream gft2;
   gft2.open("Math2.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft2>>Math2[i];}
   gft2.close();
   
   //char Math3[51];
   ifstream gft3;
   gft3.open("Math3.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft3>>Math3[i];}
   gft3.close();
   
   //char Math4[51];
   ifstream gft4;
   gft4.open("Math4.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft4>>Math4[i];}
   gft4.close();
   
   //char Math5[51];
   ifstream gft5;
   gft5.open("Math5.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft5>>Math5[i];}
   gft5.close();
   
   //char Math6[51];
   ifstream gft6;
   gft6.open("Math6.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft6>>Math6[i];}
   gft6.close();
   
   //char Math7[51];
   ifstream gft7;
   gft7.open("Math7.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft7>>Math7[i];}
   gft7.close();
   
   

//char Math8[51];
   ifstream gft8;
   gft8.open("Math8.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft8>>Math8[i];}
   gft8.close();
   

//char Math9[51];
   ifstream gft9;
   gft9.open("Math9.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft9>>Math9[i];}
   gft9.close();
   

//char Math10[51];
   ifstream gft10;
   gft10.open("Math10.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft10>>Math10[i];}
   gft10.close();
   

//char Math11[51];
   ifstream gft11;
   gft11.open("Math11.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft11>>Math11[i];}
   gft11.close();
   

//char Math12[51];
   ifstream gft12;
   gft12.open("Math12.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft12>>Math12[i];}
   gft12.close();
   

//char Math13[51];
   ifstream gft13;
   gft13.open("Math13.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft13>>Math13[i];}
   gft13.close();
   

//char Math14[51];
   ifstream gft14;
   gft14.open("Math14.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft14>>Math14[i];}
   gft14.close();
   

//char Math15[51];
   ifstream gft15;
   gft15.open("Math15.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft15>>Math15[i];}
   gft15.close();
   

//char Math16[51];
   ifstream gft16;
   gft16.open("Math16.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft16>>Math16[i];}
   gft16.close();
   

//char Math17[51];
   ifstream gft17;
   gft17.open("Math17.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft17>>Math17[i];}
   gft17.close();
   

//char Math18[51];
   ifstream gft18;
   gft18.open("Math18.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft18>>Math18[i];}
   gft18.close();
   

//char Math19[51];
   ifstream gft19;
   gft19.open("Math19.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft19>>Math19[i];}
   gft19.close();
   

//char Math20[51];
   ifstream gft20;
   gft20.open("Math20.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft20>>Math20[i];}
   gft20.close();
   

//char Math21[51];
   ifstream gft21;
   gft21.open("Math21.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft21>>Math21[i];}
   gft21.close();
   

//char Math22[51];
   ifstream gft22;
   gft22.open("Math22.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft22>>Math22[i];}
   gft22.close();
   

//char Math23[51];
   ifstream gft23;
   gft23.open("Math23.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft23>>Math23[i];}
   gft23.close();
   

//char Math24[51];
   ifstream gft24;
   gft24.open("Math24.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft24>>Math24[i];}
   gft24.close();
   

//char Math25[51];
   ifstream gft25;
   gft25.open("Math25.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft25>>Math25[i];}
   gft25.close();
   

//char Math26[51];
   ifstream gft26;
   gft26.open("Math26.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft26>>Math26[i];}
   gft26.close();
   

//char Math27[51];
   ifstream gft27;
   gft27.open("Math27.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft27>>Math27[i];}
   gft27.close();
   

//char Math28[51];
   ifstream gft28;
   gft28.open("Math28.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft28>>Math28[i];}
   gft28.close();
   

//char Math29[51];
   ifstream gft29;
   gft29.open("Math29.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft29>>Math29[i];}
   gft29.close();
   

//char Math30[51];
   ifstream gft30;
   gft30.open("Math30.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft30>>Math30[i];}
   gft30.close();
   

//char Math31[51];
   ifstream gft31;
   gft31.open("Math31.txt");
   for(int i=0;i<=49;i++){
   //into Mathram
   gft31>>Math31[i];}
   gft31.close();   



//*************ICT******************
   
   
   
   //char ICT1[51];
   ifstream gdt1;
   gdt1.open("ICT1.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt1>>ICT1[i];}
   gdt1.close();
   
   //char ICT2[51];
   ifstream gdt2;
   gdt2.open("ICT2.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt2>>ICT2[i];}
   gdt2.close();
   
   //char ICT3[51];
   ifstream gdt3;
   gdt3.open("ICT3.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt3>>ICT3[i];}
   gdt3.close();
   
   //char ICT4[51];
   ifstream gdt4;
   gdt4.open("ICT4.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt4>>ICT4[i];}
   gdt4.close();
   
   //char ICT5[51];
   ifstream gdt5;
   gdt5.open("ICT5.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt5>>ICT5[i];}
   gdt5.close();
   
   //char ICT6[51];
   ifstream gdt6;
   gdt6.open("ICT6.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt6>>ICT6[i];}
   gdt6.close();
   
   //char ICT7[51];
   ifstream gdt7;
   gdt7.open("ICT7.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt7>>ICT7[i];}
   gdt7.close();
   
   

//char ICT8[51];
   ifstream gdt8;
   gdt8.open("ICT8.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt8>>ICT8[i];}
   gdt8.close();
   

//char ICT9[51];
   ifstream gdt9;
   gdt9.open("ICT9.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt9>>ICT9[i];}
   gdt9.close();
   

//char ICT10[51];
   ifstream gdt10;
   gdt10.open("ICT10.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt10>>ICT10[i];}
   gdt10.close();
   

//char ICT11[51];
   ifstream gdt11;
   gdt11.open("ICT11.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt11>>ICT11[i];}
   gdt11.close();
   

//char ICT12[51];
   ifstream gdt12;
   gdt12.open("ICT12.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt12>>ICT12[i];}
   gdt12.close();
   

//char ICT13[51];
   ifstream gdt13;
   gdt13.open("ICT13.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt13>>ICT13[i];}
   gdt13.close();
   

//char ICT14[51];
   ifstream gdt14;
   gdt14.open("ICT14.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt14>>ICT14[i];}
   gdt14.close();
   

//char ICT15[51];
   ifstream gdt15;
   gdt15.open("ICT15.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt15>>ICT15[i];}
   gdt15.close();
   

//char ICT16[51];
   ifstream gdt16;
   gdt16.open("ICT16.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt16>>ICT16[i];}
   gdt16.close();
   

//char ICT17[51];
   ifstream gdt17;
   gdt17.open("ICT17.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt17>>ICT17[i];}
   gdt17.close();
   

//char ICT18[51];
   ifstream gdt18;
   gdt18.open("ICT18.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt18>>ICT18[i];}
   gdt18.close();
   

//char ICT19[51];
   ifstream gdt19;
   gdt19.open("ICT19.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt19>>ICT19[i];}
   gdt19.close();
   

//char ICT20[51];
   ifstream gdt20;
   gdt20.open("ICT20.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt20>>ICT20[i];}
   gdt20.close();
   

//char ICT21[51];
   ifstream gdt21;
   gdt21.open("ICT21.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt21>>ICT21[i];}
   gdt21.close();
   

//char ICT22[51];
   ifstream gdt22;
   gdt22.open("ICT22.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt22>>ICT22[i];}
   gdt22.close();
   

//char ICT23[51];
   ifstream gdt23;
   gdt23.open("ICT23.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt23>>ICT23[i];}
   gdt23.close();
   

//char ICT24[51];
   ifstream gdt24;
   gdt24.open("ICT24.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt24>>ICT24[i];}
   gdt24.close();
   

//char ICT25[51];
   ifstream gdt25;
   gdt25.open("ICT25.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt25>>ICT25[i];}
   gdt25.close();
   

//char ICT26[51];
   ifstream gdt26;
   gdt26.open("ICT26.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt26>>ICT26[i];}
   gdt26.close();
   

//char ICT27[51];
   ifstream gdt27;
   gdt27.open("ICT27.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt27>>ICT27[i];}
   gdt27.close();
   

//char ICT28[51];
   ifstream gdt28;
   gdt28.open("ICT28.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt28>>ICT28[i];}
   gdt28.close();
   

//char ICT29[51];
   ifstream gdt29;
   gdt29.open("ICT29.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt29>>ICT29[i];}
   gdt29.close();
   

//char ICT30[51];
   ifstream gdt30;
   gdt30.open("ICT30.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt30>>ICT30[i];}
   gdt30.close();
   

//char ICT31[51];
   ifstream gdt31;
   gdt31.open("ICT31.txt");
   for(int i=0;i<=49;i++){
   //into ICTram
   gdt31>>ICT31[i];}
   gdt31.close();   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    string name;
   cout<<"Enter Subject name:    ";
    cin >>name;
    cout<<endl;
    cout<<endl;    
  if( name=="Physics") {s0();}  
  else if (name== "Programming"){s1();}
  else if (name== "ICT"){s2();}
  else if (name== "English"){s3();} 
  else if (name=="Islamiat"){s4();}
  else if (name=="Math")  {s5();}
  else if( name=="physics") {s0();}  
  else if (name== "programming"){s1();}
  else if (name== "ict"){s2();}
  else if (name== "english"){s3();} 
  else if (name=="islamiat"){s4();}
  else if (name=="math")  {s5();} 
  else if( name=="phy") {s0();}  
  else if (name== "prog"){s1();}
  else if (name== "ict"){s2();}
  else if (name== "eng"){s3();} 
  else if (name=="isl"){s4();}
  else if (name=="math")  {s5();}  
  else if( name=="Phy") {s0();}  
  else if (name== "Prog"){s1();}
  else if (name== "Eng"){s3();} 
  else if (name=="Isl"){s4();}
  else {cout<<"Sorry Subject is not in our data";}cout<<"\n\n\n";
   return 0;}