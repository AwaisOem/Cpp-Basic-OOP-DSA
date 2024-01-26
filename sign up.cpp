#include<iostream>
#include<ctime>
#include<cstdlib>
#include<unistd.h>
#include<string>
using namespace std;
int main(){char disi;

    //sign up fuction program
   //input from user
cout<<"Do you want to sign up    (Y/N):";
cin>>disi;
if(disi=='Y' || disi=='y'){
   system("clear");
   char* id;
   char disi2;
   string pass,cpass;
   string Rollno;
  cout<<"Enter your RollNo. OR CNIC:    ";
  cin>>Rollno;
  cout<<endl;
  cout<<"Create user name:    ";
  cin>>id;
  line:
  cout<<endl;
  cout<<"Plz Create a password(dont use spacebar):    ";
  cin>>pass;
  cout<<"Confirm Password:    ";
  cin>>cpass;
  if(pass==cpass){
      goto line2;}
      else{cout<<endl;
          cout<<"-------------------Password don\'t match plz try again--------------"<<endl;
          goto line;} 
  line2:
  cout<<"\n\n";
  cout<<"Your information will be store PLZ read terms & conditions."<<endl;
  cout<<"\n\n\n";
 sleep(2);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 cout<<"@@@@@@@@@@@@@@@@@@@@@@@@Terms and conditions@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
 cout<<endl;
 
 cout<<"Subject to the other Terms, upon your successful registration for the Service you shall, when prompted by our system(s), complete any Security Details in order to use the Service.\nYou must at all times keep the Security Details secret and secure and take all reasonable precautions to prevent unauthorised or fraudulent access and/or use of them. For example, you must\:\nnever write or otherwise record your Login Password in a way that can be understood and/or known by someone else or for any other reason\;\navoid any Security Details which are easy to guess and never reveal your Security Details to anyone else;and change your Security Details regularly.\nYou must not disclose the Security Details to any other person.\nYou acknowledge that after initial registration we will never contact you, or ask anyone to do so on our behalf, with a request to disclose your Security Details in full. If you receive any such request from anyone (even if they are using our name and logo and appear to be genuine) then it is likely to be fraudulent and you must not supply your Security Details to them in any circumstances. You should report any such requests to us immediately.\nWhere any transaction on any of your account(s) is confirmed by use of the Security Details but you subsequently show that the transaction was not authorised by you, you will not be liable for that transaction provided that can provide evidence that you have kept your Security Details confidential, you have acted with reasonable care and in accordance with these Terms, and there is no evidence that you have acted fraudulently.\nYou will be responsible for all instructions given by you or anyone acting with your authority between the time you pass the security procedures and the time you exit from the Service. In your own interests, you should not leave the computer/device you are using to access the Service unattended while you are logged onto the Service and/or our website and further you should ensure that you log out from the Service at the end of each session.\nIf you suspect someone knows your Security Details then you must contact us immediately. If you fail to do so, you will be liable for any unauthorised payments on your account(s) confirmed by use of the Security Details.\nYou must immediately notify us; (i) of any known or suspected loss, theft, unauthorised usage of the Service and/or the Security Details; (ii) any other breach of security; (iii) any receipt by you of a confirmation of a transaction, fund transfer or other activity which you did not authorise; (iv) any inaccurate information in your account balances or transaction history and if you fail to do so, you will be liable for any unauthorised transactions on your account confirmed by use of the Security Details.\nNotwithstanding Agreement\nThese Terms shall apply to you if you have requested and we have agreed that you may use our internet banking service.\nThese Terms set out our obligations to you and your obligations to us for use of our internet banking service.\nDefinitions\nUnless otherwise stated herein, the words defined below shall mean the following:\n\“Login Password\” means the unique auto generated password, phrase, number or any other identification of any kind initially given to you by us which is required for you to login to use the Service and which you will be required to change on receipt and as prompted by our systems from time to time.\n\n\“Security Details\” means the User Login ID, Login Password, Transaction password, identifying words, user name, codes and numbers agreed between you and us that are used in the security and authentication procedure as we may require from time to time.\n\n“Service” means our internet and online banking services when accessed using the internet.\n\n\"Transaction password\" means the auto generated password, phrase, number or any other identification of any kind initially given to you by us which you will require to effect any transaction and which you will be required to change on receipt and as prompted by our systems from time to time.\n\n“User Login ID” means the unique auto generated personal identification number given to you by us";
 
 
 
 cout<<endl;
 cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
cout<<"\n\n\n";
  cout<<"Alright make sure you read terms & conditions and want to proceed (Y/N):    ";
  cin>>disi2;
  if(disi2=='Y' || disi2=='y'){
  
   for( int i=10; i>=0;i--){
     system("clear");
     cout<<"Ok....Wait for ";
     cout<< i <<" sec"<<endl;
 //this_thread::sleep_for( 1s );
 sleep(1);
      //  system("clear");
   }
   cout<<"\n";
   
   srand(time(0));
   int PIN;
   
   PIN=(1000+(rand()%8999));
   
  cout<<"Here is your PIN plz remeber it:    "<<PIN;
   
   
   cout<<"\n\n";
   cout<<"Your Account was Created😊";
   cout<<"\n\n";}
   
   
   
   
   
   
   
   //filling code
   
   switch(i){
   case 0 : demo(); break;
   case 1 : user1(); break;
   case 2 : user2(); break;
   case 3 : user3(); break;
   case 4 : user4(); break;
   case 5 : user5(); break;
   case 6 : user6(); break;
   case 7 : user7(); break;
   case 8 : user8(); break;
   case 9 : user9(); break;
   case 10 : user10(); break;
   case 11 : user11(); break;
   case 12 : user12(); break;
   case 13 : user13(); break;
   case 14 : user14(); break;
   case 15 : user15(); break;
   case 16 : user16(); break;
   case 17 : user17(); break;
   case 18 : user18(); break;
   case 19 : user19(); break;
   case 20 : user20(); break;
   case 21 : user21(); break;
   case 22 : user22(); break;
   case 23 : user23(); break;
   case 24 : user24(); break;
   case 25 : user25(); break;
   case 26 : user26(); break;
   case 27 : user27(); break;
   case 28 : user28(); break;
   case 29 : user29(); break;
   case 30 : user30(); break;
   case 31 : user31(); break;
   case 32 : user32(); break;
   case 33 : user33(); break;
   case 34 : user34(); break;
   case 35 : user35(); break;
   case 36 : user36(); break;
   case 37 : user37(); break;
   case 38 : user38(); break;
   case 39 : user39(); break;
   case 40 : user40(); break;
   case 41 : user41(); break;
   case 42 : user42(); break;
   case 43 : user43(); break;
   case 44 : user44(); break;
   case 45 : user45(); break;
   case 46 : user46(); break;
   case 47 : user47(); break;
   case 48 : user48(); break;
   case 49 : user49(); break;
   case 50 : user50(); break;
  /* case 51 : user51(); break;
   case 52 : user52(); break;
   case 53 : user53(); break;
   case 54 : user54(); break;
   case 55 : user55(); break;
   case 56 : user56(); break;*/
   
   
   
   
   
   
   
   else{
   goto line3; }
  }
  line3: 
   return 0;
}