#include <iostream>
using namespace std;
#include <process.h>
const int LIMIT = 100;
class safearay
{
private:
int arr[LIMIT],l,u;
public:
safearay(int a=0,int b=LIMIT):l(a),u(b){}
int& operator [](int n) //note: return by reference
{
if( n<l || n>=u )
{ cout << "\nIndex out of bounds"; exit(1); }
return arr[n-l];
}
};
int main()
{
safearay sa1(0,100);
for(int j=0; j<100; j++)
    sa1[j] = j*10;
for(int j=0; j<100; j++)
cout << "Element " << j << " is " << sa1[j] << endl;
return 0;
}