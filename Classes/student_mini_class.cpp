// *Question 12* 
// Define a class REPORT with the following specification:
// Private members :
// adno	4 digit admission number
// name	20 characters
// marks	an array of 5 floating point values
// average	average marks obtained
// GETAVG()	a function to compute the average obtained in five subject
// Public members:
// READINFO()	function to accept values for adno, name, marks. Invoke
// 	the function GETAVG () 
// DISPLAYINFO () 	function to display all data members of report on the 
//  	screen.
// You should give function definitions. 

#include<iostream>
using namespace std;
class REPORT
{
    private:
        short adno;
        char name[20];
        float marks[5];
        float average;
        void GETAVG()
        {
            float sum=0;
            for (int i = 0; i < 5; i++)
            {
                sum+= marks[i];
            }
            average=sum/5.0f;
        }
    public:
        REPORT():adno(0),name{},marks{},average(0){}
        void READINFO()
        {
           
            cin >> adno;
            
            cin.ignore();
            cin.getline(name, 20);
            for (int i = 0; i < 5; i++)
            {
                // cout << "Enter marks of subject " << i + 1 << ":  ";
                cin >> marks[i];
            }
            GETAVG();
            cout<<endl;
        }
        void DISPLAYINFO()
        {
            cout << adno<<endl;
            cout << name<<endl;
            for (int i = 0; i < 5; i++)
            {
                cout << i + 1 << ":  "<<marks[i]<<endl;
            }
            cout<<average<<endl;
            cout<<endl;
        }
};
int main(){
    REPORT r1;
    r1.READINFO();
    r1.DISPLAYINFO();
 return 0;   
}
