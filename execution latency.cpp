//#include <chrono>
//#include <thread>
#include <iostream>
#include<iomanip>
#include<unistd.h>
using namespace std;
int main()
{//int i=10;
 //using namespace chrono_literals;
    
   for( int i=10; i>=0;i--){
     cout<<"Please wait for ";
     cout<< i <<" sec"<<endl;
 //this_thread::sleep_for( 1s );
 sleep(1);
        system("clear");
   }
   
        cout<<"\n\n"<<"Kis ka intizar hai nhi aye gi wo😢😥😭"<<"\n\n\n";
        
        
    return 0;
}