#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){cout<<"Instructions:\nIf student is Present \"Press P\" and if student is Apsent \"Press A\"."<<endl;
cout<<endl;
int date;
int month=12;
int year=2021;
  cout<<"Enter today Date:    ";
  cin>>date;
  string sjt;
  cout<<endl;
  cout<<"Enter the name of Subject:    ";
  cin>>sjt;
  cout<<endl;
 const  char* stud[51]={"Nimra Sadiq","Zain Iqbal","Muhammad Nouman Riaz","Amna Azhar","Muhammad Abdullah","Muhammad Saqib","Muhammad Usman","Mahrukh Fatima","Muhammad Awais Raza","Arslan Shah","Saira Noreen","Ariqa Nayab","Daima Iftikhar","Haseeb Bilal","Huzaifa Aslam","Muhammad Ali","Kaneez Fatima","Ayesha Atta","Subhan","Hadia Latif","Abu Bakar Khalid","Muhammad Saad Mukhtar","Arsalan Ahmad","Ismail Bin Asim","Amna Noor","Muhammad Hamza","Isbah Imran","Arshiya Arif","Qadir Usman","Hadeeqa Nisa","Sobia Zafar","Khurram Shehzad","Nasrullah Khizar","Zain Ul Abidden","Ali Hamza Yaseen","Ayesha","Mubeen Musharraf","Abeer Zafar","Muhammad Ali Abbas","Areeba Maryam","Ifra Mariam","Dilbar Ali","Haji Rahman","Muhammad Sohaib","Muhammad Yahya Khalid","Muhammad Awais","Fida Ullah","Laiba Noor","Muhammad Ateeb","Shakeel Ahmad Khan"};
  
  
  char att[49];
  for(int i=0; i<=49;i++){cout<<"Attendence of \""<<stud[i]<<"\"        (P/A)        ";
      cin>>att[i];
      cout<<endl;
      if((att[i]=='P' || att[i]=='p')    ||    (att[i]=='A' || att[i]=='a')){continue;}else{cout<<"Invalid Plz Try Again:    ";
      cin>>att[i];cout<<endl;}}
 
      cout<<"\n\n\n\n";
cout<<"**************************"<<date<<"/"<<month<<"/"<<year<<"*************************"<<endl;
cout<<endl;

   cout<<"**********************\"Attendence of "<<sjt<<"\"**********************";
   cout<<"\n\n";
   
   
   for(int i=0; i<=49;i++){
       
       cout<<left<<setw(21)<<setfill('-')<<stud[i];
//<<att[i]<<endl;
     if(att[i]=='A' || att[i]=='a'){cout<<setw(16)<<setfill('-')<<right<<"Apsent"<<endl;}
     else{
       cout<<setw(16)<<setfill('-')<<right<<"Present"<<endl;
       }
       
   }
   cout<<"\n\n\n\n";
   
   
   
   
   
   
   
   
   
   
   
   
   
   char disi;
   cout<<"Do you want to review Attendence:\t(Y/N)\t";cin>>disi;
   cout<<endl;
   if(disi=='Y' || disi=='y'){
   
    for(int i=0;i<=49;i++){
     if(att[i]=='A' || att[i]=='a'){
        cout<<"Attendence of \""<<stud[i]<<"\"        (P/A)        ";     
        cin>>att[i];
      cout<<endl;       
                 }else{continue;}}
      
      
   cout<<"\n\n\n\n";
   cout<<"**********************\"Attendence of "<<sjt<<"\"**********************";
   cout<<"\n\n";
   
   
   for(int i=0; i<=49;i++){
       
       cout<<left<<setw(21)<<setfill('-')<<stud[i];
//<<att[i]<<endl;
     if(att[i]=='A' || att[i]=='a'){cout<<setw(16)<<setfill('-')<<right<<"Apsent"<<endl;}
     else{
       cout<<setw(16)<<setfill('-')<<right<<"Present"<<endl;
       }}}
       
       //Entering Data in Files
       
       
       
       if(sjt=="Physics" || sjt=="physics" || sjt=="phy" || sjt=="Phy"){
   
   if(date==1){  
  ofstream set;
  set.open("phy1.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==2){  
  ofstream set;
  set.open("phy2.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==3){  
  ofstream set;
  set.open("phy3.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==4){  
  ofstream set;
  set.open("phy4.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==5){  
  ofstream set;
  set.open("phy5.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==6){  
  ofstream set;
  set.open("phy6.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==7){  
  ofstream set;
  set.open("phy7.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==8){  
  ofstream set;
  set.open("phy8.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==9){  
  ofstream set;
  set.open("phy9.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==10){  
  ofstream set;
  set.open("phy10.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==11){  
  ofstream set;
  set.open("phy11.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==12){  
  ofstream set;
  set.open("phy12.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==13){  
  ofstream set;
  set.open("phy13.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==14){  
  ofstream set;
  set.open("phy14.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==15){  
  ofstream set;
  set.open("phy15.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==16){  
  ofstream set;
  set.open("phy16.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==17){  
  ofstream set;
  set.open("phy17.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==18){  
  ofstream set;
  set.open("phy18.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==19){  
  ofstream set;
  set.open("phy19.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==20){  
  ofstream set;
  set.open("phy20.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==21){  
  ofstream set;
  set.open("phy21.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==22){  
  ofstream set;
  set.open("phy22.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==23){  
  ofstream set;
  set.open("phy23.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==24){  
  ofstream set;
  set.open("phy24.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==25){  
  ofstream set;
  set.open("phy25.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==26){  
  ofstream set;
  set.open("phy26.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==27){  
  ofstream set;
  set.open("phy27.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==28){  
  ofstream set;
  set.open("phy28.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==29){  
  ofstream set;
  set.open("phy29.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==30){  
  ofstream set;
  set.open("phy30.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==31){  
  ofstream set;
  set.open("phy31.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else{
    ofstream set;
  set.open("bin.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();
     }
    
    
    
    }else if(sjt=="Programming" || sjt=="programming" || sjt=="Prog" || sjt=="prog"){
        
        if(date==1){  
  ofstream set;
  set.open("prog1.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==2){  
  ofstream set;
  set.open("prog2.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==3){  
  ofstream set;
  set.open("prog3.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==4){  
  ofstream set;
  set.open("prog4.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==5){  
  ofstream set;
  set.open("prog5.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==6){  
  ofstream set;
  set.open("prog6.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==7){  
  ofstream set;
  set.open("prog7.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==8){  
  ofstream set;
  set.open("prog8.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==9){  
  ofstream set;
  set.open("prog9.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==10){  
  ofstream set;
  set.open("prog10.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==11){  
  ofstream set;
  set.open("prog11.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==12){  
  ofstream set;
  set.open("prog12.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==13){  
  ofstream set;
  set.open("prog13.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==14){  
  ofstream set;
  set.open("prog14.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==15){  
  ofstream set;
  set.open("prog15.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==16){  
  ofstream set;
  set.open("prog16.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==17){  
  ofstream set;
  set.open("prog17.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==18){  
  ofstream set;
  set.open("prog18.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==19){  
  ofstream set;
  set.open("prog19.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==20){  
  ofstream set;
  set.open("prog20.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==21){  
  ofstream set;
  set.open("prog21.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==22){  
  ofstream set;
  set.open("prog22.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==23){  
  ofstream set;
  set.open("prog23.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==24){  
  ofstream set;
  set.open("prog24.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==25){  
  ofstream set;
  set.open("prog25.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==26){  
  ofstream set;
  set.open("prog26.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==27){  
  ofstream set;
  set.open("prog27.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==28){  
  ofstream set;
  set.open("prog28.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==29){  
  ofstream set;
  set.open("prog29.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==30){  
  ofstream set;
  set.open("prog30.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==31){  
  ofstream set;
  set.open("prog31.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else{
    ofstream set;
  set.open("bin.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();
     }
        
        
        
        
        
        
        
        
        
        
        
        
        
    }else if(sjt=="English" || sjt=="Eng" || sjt=="eng" || sjt=="english"){
        
        if(date==1){  
  ofstream set;
  set.open("Eng1.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==2){  
  ofstream set;
  set.open("Eng2.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==3){  
  ofstream set;
  set.open("Eng3.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==4){  
  ofstream set;
  set.open("Eng4.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==5){  
  ofstream set;
  set.open("Eng5.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==6){  
  ofstream set;
  set.open("Eng6.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==7){  
  ofstream set;
  set.open("Eng7.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==8){  
  ofstream set;
  set.open("Eng8.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==9){  
  ofstream set;
  set.open("Eng9.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==10){  
  ofstream set;
  set.open("Eng10.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==11){  
  ofstream set;
  set.open("Eng11.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==12){  
  ofstream set;
  set.open("Eng12.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==13){  
  ofstream set;
  set.open("Eng13.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==14){  
  ofstream set;
  set.open("Eng14.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==15){  
  ofstream set;
  set.open("Eng15.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==16){  
  ofstream set;
  set.open("Eng16.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==17){  
  ofstream set;
  set.open("Eng17.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==18){  
  ofstream set;
  set.open("Eng18.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==19){  
  ofstream set;
  set.open("Eng19.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==20){  
  ofstream set;
  set.open("Eng20.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==21){  
  ofstream set;
  set.open("Eng21.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==22){  
  ofstream set;
  set.open("Eng22.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==23){  
  ofstream set;
  set.open("Eng23.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==24){  
  ofstream set;
  set.open("Eng24.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==25){  
  ofstream set;
  set.open("Eng25.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==26){  
  ofstream set;
  set.open("Eng26.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==27){  
  ofstream set;
  set.open("Eng27.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==28){  
  ofstream set;
  set.open("Eng28.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==29){  
  ofstream set;
  set.open("Eng29.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==30){  
  ofstream set;
  set.open("Eng30.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==31){  
  ofstream set;
  set.open("Eng31.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else{
    ofstream set;
  set.open("bin.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();
     }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }else if(sjt=="Math" || sjt=="math" || sjt=="Calculus" || sjt=="calculus"){
        
        if(date==1){  
  ofstream set;
  set.open("Math1.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==2){  
  ofstream set;
  set.open("Math2.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==3){  
  ofstream set;
  set.open("Math3.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==4){  
  ofstream set;
  set.open("Math4.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==5){  
  ofstream set;
  set.open("Math5.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==6){  
  ofstream set;
  set.open("Math6.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==7){  
  ofstream set;
  set.open("Math7.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==8){  
  ofstream set;
  set.open("Math8.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==9){  
  ofstream set;
  set.open("Math9.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==10){  
  ofstream set;
  set.open("Math10.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==11){  
  ofstream set;
  set.open("Math11.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==12){  
  ofstream set;
  set.open("Math12.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==13){  
  ofstream set;
  set.open("Math13.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==14){  
  ofstream set;
  set.open("Math14.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==15){  
  ofstream set;
  set.open("Math15.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==16){  
  ofstream set;
  set.open("Math16.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==17){  
  ofstream set;
  set.open("Math17.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==18){  
  ofstream set;
  set.open("Math18.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==19){  
  ofstream set;
  set.open("Math19.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==20){  
  ofstream set;
  set.open("Math20.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==21){  
  ofstream set;
  set.open("Math21.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==22){  
  ofstream set;
  set.open("Math22.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==23){  
  ofstream set;
  set.open("Math23.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==24){  
  ofstream set;
  set.open("Math24.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==25){  
  ofstream set;
  set.open("Math25.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==26){  
  ofstream set;
  set.open("Math26.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==27){  
  ofstream set;
  set.open("Math27.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==28){  
  ofstream set;
  set.open("Math28.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==29){  
  ofstream set;
  set.open("Math29.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==30){  
  ofstream set;
  set.open("Math30.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==31){  
  ofstream set;
  set.open("Math31.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else{
    ofstream set;
  set.open("bin.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();
     }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }else if(sjt=="Islamiat" || sjt=="islamiat" || sjt=="Isl" || sjt=="isl"){
        
        if(date==1){  
  ofstream set;
  set.open("Isl1.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==2){  
  ofstream set;
  set.open("Isl2.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==3){  
  ofstream set;
  set.open("Isl3.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==4){  
  ofstream set;
  set.open("Isl4.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==5){  
  ofstream set;
  set.open("Isl5.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==6){  
  ofstream set;
  set.open("Isl6.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==7){  
  ofstream set;
  set.open("Isl7.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==8){  
  ofstream set;
  set.open("Isl8.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==9){  
  ofstream set;
  set.open("Isl9.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==10){  
  ofstream set;
  set.open("Isl10.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==11){  
  ofstream set;
  set.open("Isl11.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==12){  
  ofstream set;
  set.open("Isl12.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==13){  
  ofstream set;
  set.open("Isl13.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==14){  
  ofstream set;
  set.open("Isl14.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==15){  
  ofstream set;
  set.open("Isl15.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==16){  
  ofstream set;
  set.open("Isl16.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==17){  
  ofstream set;
  set.open("Isl17.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==18){  
  ofstream set;
  set.open("Isl18.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==19){  
  ofstream set;
  set.open("Isl19.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==20){  
  ofstream set;
  set.open("Isl20.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==21){  
  ofstream set;
  set.open("Isl21.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==22){  
  ofstream set;
  set.open("Isl22.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==23){  
  ofstream set;
  set.open("Isl23.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==24){  
  ofstream set;
  set.open("Isl24.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==25){  
  ofstream set;
  set.open("Isl25.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==26){  
  ofstream set;
  set.open("Isl26.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==27){  
  ofstream set;
  set.open("Isl27.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==28){  
  ofstream set;
  set.open("Isl28.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==29){  
  ofstream set;
  set.open("Isl29.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==30){  
  ofstream set;
  set.open("Isl30.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==31){  
  ofstream set;
  set.open("Isl31.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else{
    ofstream set;
  set.open("bin.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();
     }
    }else if(sjt=="ICT" || sjt=="ict" || sjt=="Ict"){
        
      if(date==1){  
  ofstream set;
  set.open("ICT1.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==2){  
  ofstream set;
  set.open("ICT2.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==3){  
  ofstream set;
  set.open("ICT3.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==4){  
  ofstream set;
  set.open("ICT4.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==5){  
  ofstream set;
  set.open("ICT5.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==6){  
  ofstream set;
  set.open("ICT6.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==7){  
  ofstream set;
  set.open("ICT7.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==8){  
  ofstream set;
  set.open("ICT8.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==9){  
  ofstream set;
  set.open("ICT9.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==10){  
  ofstream set;
  set.open("ICT10.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==11){  
  ofstream set;
  set.open("ICT11.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==12){  
  ofstream set;
  set.open("ICT12.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==13){  
  ofstream set;
  set.open("ICT13.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==14){  
  ofstream set;
  set.open("ICT14.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==15){  
  ofstream set;
  set.open("ICT15.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==16){  
  ofstream set;
  set.open("ICT16.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==17){  
  ofstream set;
  set.open("ICT17.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==18){  
  ofstream set;
  set.open("ICT18.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==19){  
  ofstream set;
  set.open("ICT19.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==20){  
  ofstream set;
  set.open("ICT20.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==21){  
  ofstream set;
  set.open("ICT21.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==22){  
  ofstream set;
  set.open("ICT22.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==23){  
  ofstream set;
  set.open("ICT23.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==24){  
  ofstream set;
  set.open("ICT24.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==25){  
  ofstream set;
  set.open("ICT25.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==26){  
  ofstream set;
  set.open("ICT26.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==27){  
  ofstream set;
  set.open("ICT27.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  
  else if(date==28){  
  ofstream set;
  set.open("ICT28.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==29){  
  ofstream set;
  set.open("ICT29.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else if(date==30){  
  ofstream set;
  set.open("ICT30.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
    
    else if(date==31){  
  ofstream set;
  set.open("ICT31.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
  
  else{
    ofstream set;
  set.open("bin.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();
     } 
       
       
       
    }else{  
   ofstream set;
  set.open("bin.txt");
  for(int i=0;i<=49;i++){
  set<<att[i];}
  set.close();}
       
       
       
   return 0;
}