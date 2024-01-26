// *Question 8* 	
// Define a class batsman with the following specifications:
// Private members:
// bcode	4 digits code number
// bname	20 characters
// innings, notout, runs	integer type
// batavg	it is calculated according to the formula 
//  	batavg =runs/(innings-notout)
// calcavg()	Function to compute batavg
// Public members:
// readdata()	Function to accept value from bcode, name, innings,  
//  	notout and invoke the function calcavg()
// displaydata()	Function to display the data members on the screen. 

#include<iostream>
using namespace std;
class batsman
{
    private:
        short bcode;
        char bname[20];
        int innings,notout,runs;
        float batavg;
        void calcavg()
        {
            batavg =runs/float(innings-notout);
        };
    public:
    batsman():bcode(0),bname{},innings(0),notout(0),batavg(0),runs(0){}
        void readdata()
        {
            cout << "Enter code of batsman:  ";
            cin >> bcode;
            cout << "Enter Name of batsman:  ";
            cin.ignore();
            cin.getline(bname, 20);
            cout << "Enter innings:  ";
            cin >> innings;
            cout << "Enter runs:  ";
            cin >> runs;
            cout << "Enter notouts:  ";
            cin >> notout;
            calcavg();
        }
        void displaydata()
        {
            cout << "CODE of batsman:  " << bcode << endl;
            cout << "Name of batsman:  " << bname << endl;
            cout << "INNINGS:  " << innings << endl;
            cout << "RUNS:  " << runs << endl;
            cout << "NOTOUTS:  " << notout << endl;
            cout << "Average of batsman:  " << batavg << endl;
        }
};
int main()
{
batsman shahid_afridi;
shahid_afridi.readdata();
shahid_afridi.displaydata();
return 0;   
}