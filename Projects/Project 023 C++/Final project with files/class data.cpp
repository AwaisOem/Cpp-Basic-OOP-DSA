#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
  

//void s0(){
//cout<<"Student Name: "<<student[0]<<endl;
//cout<<"Father name: "<<FN[0]<<endl;
//cout<<"Roll no: "<<roll[0]<<endl;
//cout<<"Discipline: "<<disip[0]<<endl;
//cout<<"FSC marks: "<<fscM[0]<<endl;
//cout<<"Application Number: "<<AppN[0]<<endl;},
int main(){
    
    
    const char* student[]={"Nimra Sadiq","Zain Iqbal","Muhammad Nouman Riaz","Amna Azhar","Muhammad Abdullah","Muhammad Saqib","Muhammad Usman","Mahrukh Fatima","Muhammad Awais Raza","Arslan Shah","Saira Noreen","Ariqa Nayab","Daima Iftikhar","Haseeb Bilal","Huzaifa Aslam","Muhammad Ali","Kaneez Fatima","Ayesha Atta","Subhan","Hadia Latif","Abu Bakar Khalid","Hafiz Muhammad Saad Mukhtar","Arsalan Ahmad","Ismail Bin Asim","Amna Noor","Muhammad Hamza","Isbah Imran","Arshiya Arif","Qadir Usman","Hadeeqa Nisa","Sobia Zafar","Khurram Shehzad","Nasrullah Khizar","Zain Ul Abidden","Ali Hamza Yaseen","Ayesha","Mubeen Musharraf","Abeer Zafar","Muhammad Ali Abbas","Areeba Maryam","Ifra Mariam","Dilbar Ali","Haji Rahman","Muhammad Sohaib","Muhammad Yahya Khalid","Muhammad Awais","Fida Ullah","Laiba Noor","Muhammad Ateeb","Shakeel Ahmad Khan"};
    
    const char* roll[]={"BSCS51F21R001","BSCS51F21R002","BSCS51F21R003","BSCS51F21R004","BSCS51F21R005","BSCS51F21R006","BSCS51F21R007","BSCS51F21R008","BSCS51F21R009","BSCS51F21R010","BSCS51F21R011","BSCS51F21R012","BSCS51F21R013","BSCS51F21R014","BSCS51F21R015","BSCS51F21R016","BSCS51F21R017","BSCS51F21R018","BSCS51F21R019","BSCS51F21R020","BSCS51F21R021","BSCS51F21R022","BSCS51F21R023","BSCS51F21R024","BSCS51F21R025","BSCS51F21R026","BSCS51F21R027","BSCS51F21R028","BSCS51F21R029","BSCS51F21R030","BSCS51F21R031","BSCS51F21R032","BSCS51F21R033","BSCS51F21R034","BSCS51F21R035","BSCS51F21R036","BSCS51F21R037","BSCS51F21R038","BSCS51F21R039","BSCS51F21R040","BSCS51F21R041","BSCS51F21R042","BSCS51F21R043","BSCS51F21R044","BSCS51F21R045","BSCS51F21R046","BSCS51F21R047","BSCS51F21R048","BSCS51F21R049","BSCS51F21R050"};
    
 const int AppN[]={2021162521,2021161867,2021158537,2021175387,2021193546,2021177819,2021161751,2021176524,2021159657,2021164545,2021166727,2021171422,2021164785,2021189681,2021189268,2021188478,2021169099,2021167336,2021162860,2021182238,2021195539,2021166509,2021159173,2021161173,2021184245,2021158956,2021168918,2021171490,2021194955,2021172598,2021166365,2021171525,2021182124,2021171913,2021172268,2021175190,2021167898,2021180816,2021157909,2021164999,2021187580,2021180661,2021175578,2021174753,2021159996,2021160121,2021177639,2021167171,2021158420,2021177659};
    
    const char* FN[]={"Muhammad Sadiq","Chaudhary Muhammad Iqbal","Muhammad Riaz","Azhar Hussain","Rana Zafar Hussain","Muhammad Sadiq","Sheikh Muhammad Ashraf","Ishaque Mehmood","Muhammad Ehsan","Shah Sawar Ahmad","Shamshad Ali","Shaukat Masih","Iftikhar Ali","Muhammad Nasir","Muhammad Aslam","Khalid Mehmood","Muhammad Sher","Atta Ullah Khan","Qamar Jameel","Abdul Latif","Khalid Mehmood","Mukhtar Ahmad","Saif Ullah","Asim Khan","Muhammad Ilyas","Shahbaz Ahmad","Muhammad Imran","Malik Muhammad Arif","Sanwal Khan","Ishaq Ahmed","Zafar Iqbal","Muhammad Iqbal","Khizar Hayat","Naeem Irfan","Ghulam Yaseen","Muhammad Ashraf","Musharraf Ali","Zafar Iqbal","Muhammad Sibtain","Muhammad Akram","Yaqub AkhtarGhauri","Akbar Khan","Ashaq","Muhammad Siddique","Khalid Naseer","Muhammad Anwar","Ashraf Ali","Akhter Pervaiz","Sardar HarisNaseer","Taj Muhammad Khan"};
    
    
    const char* disip[]={"BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science ","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science ","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science","BS Computer Science"};
    
   const int fscM[]={1096,1091,1088,1084,1082,1081,1081,1080,1079,1077,1077,1075,1074,1073,1072,1072,1070,1066,1065,1064,1064,1063,1063,1061,1060,1060,1055,1054,1053,1052,1052,1052,1052,1051,1051,1050,1049,1049,1045,1042,1018,1010,936,928,926,849,845,784,619,577};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   static int i;
    string name;
    cout<<"Enter student name:    ";
    cin >>name;
    cout<<endl;
    cout<<endl;    
  if( name=="Nimra") i=0 ;
 else if (name== "Zainiqbal")  i=1 ;   
  else if (name== "Nouman") i=2 ; 
  else if (name== "Amnaazhar") i=3; 
  else if (name== "Abdullah") i=4 ; 
  else if (name=="Saqib") i=5 ;   
  else if (name=="Usman") i=6 ; 
  else if (name=="Mahrukh") i=7 ;  
  else if (name=="Awaisraza") i=8;
  else if(name== "Arslanshah")i=9; 
  else if (name== "Saira") i=10 ; 
  else if (name== "Ariqa") i=11 ; 
  else if (name== "Daima") i=12 ;  
  else if (name== "Haseeb")i=13 ; 
  else if (name== "Huzaifa") i=14 ; 
  else if (name== "Ali") i=15 ; 
  else if (name== "Kaneez") i=16 ; 
  else if (name== "Ayeshaatta") i=17 ; 
  else if (name== "Subhan") i=18 ;   
  else if (name== "Hadia") i=19 ;  
  else if (name== "AbuBakar")i=20 ; 
  else if (name== "Saad") i=21 ;  
 else if (name== "Arsalanahmad") i=22 ; 
  else if (name== "Ismail")i=23; 
  else if (name== "AmnaNoor") i=24 ; 
  else if (name== "Hamza") i=25;  
  else if (name== "Isbah") i=26; 
  else if (name== "Arshiya") i=27; 
  else if (name== "Qadir") i=28; 
  else if (name== "Hadeeqa") i=29; 
  else if (name== "Sobia")  i=30; 
  else if (name== "Khurram") i=31;  
  else if (name== "Nasrullah")  i=32; 
else if (name== "Zainulabidden") i=33; 
  else if (name== "Alihamza")i=34; 
  else if (name== "Ayesha") i=35; 
  else if (name== "Mubeen" )  i=36; 
  else if (name== "Abeer")   i=37; 
 else if (name== "Aliabbas") i=38; 
  else if (name== "Areeba") i=39; 
  else if (name== "Ifra")   i=40; 
  else if (name== "Dildar") i=41; 
else if(name== "Rahman")i=42; 
  else if (name== "Sohaib") i=43; 
  else if (name== "Yahya")   i=44; 
else if (name== "Awaisanwar")i=45; 
 else if (name== "Fidaullah")i=46; 
  else if (name== "Laiba")  i=47; 
  else if (name== "Ateeb")  i=48; 
  else if (name== "Shakeel") i=49; 
  else {cout<<"Sorry This person is not in our data";i=i+50;}
  
  
   
   
   cout<<endl;
   
   
cout<<"Student Name: "<<student[i]<<endl;
cout<<endl;
cout<<"Father name: "<<FN[i]<<endl;
cout<<endl;
cout<<"Roll no: "<<roll[i]<<endl;
cout<<endl;
cout<<"Discipline: "<<disip[i]<<endl;
cout<<endl;
cout<<"FSC marks: "<<fscM[i]<<endl;
cout<<endl;
cout<<"Application Number: "<<AppN[i]<<endl;
cout<<endl;
   return 0;
}