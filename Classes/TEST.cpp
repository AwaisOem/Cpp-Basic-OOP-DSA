// Question 9
// Define a class TEST in C++ with following description:
// Private Members
// TestCode of type integer
// Description of type string
// NoCandidate of type integer
// CenterReqd (number of centers required) of type integer
// A member function CALCNTR() to calculate and return the number of centers as
// (NoCandidates/100+1)
// Public Members 
// - A function SCHEDULE() to allow user to enter values for TestCode, Description, NoCandidate & call function CALCNTR() to calculate the number of Centres
// - A function DISPTEST() to allow user to view the content of all the data members 

#include<iostream>
#include<string>
using namespace std;
class TEST
{
    private:
        int TestCode,No_Candidate,CenterReqd;
        string Description;
        int CALCNTR()
        {
            return  (No_Candidate/100+1);
        }
    public:
    TEST():TestCode(0),No_Candidate(0),CenterReqd(0),Description("\0"){}
        void SCHEDULE()
        {
            cout << "Enter test Code:     ";
            cin >> TestCode;
            cout << "Enter Discription:   ";
            cin.ignore();
            getline(cin, Description);
            cout << "Enter Number of candidates:     ";
            cin >> No_Candidate;
            CenterReqd=CALCNTR();
        }
        void DISPTEST()
        {
            cout << "Test Code:     "<<TestCode<<endl;
            cout << "Discription:   \n"<<Description<<endl;
            cout << "Number of candidates:    "<<No_Candidate<<endl;
            cout << "Number of centers:    "<<CenterReqd<<endl;
        }
};
int main()
{
TEST phy;
phy.SCHEDULE();
phy.DISPTEST();
return 0;   
}