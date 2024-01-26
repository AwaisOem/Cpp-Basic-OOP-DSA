#include<iostream>
#include<fstream>
using namespace std;
int main(){
int a[100];
fstream f;
f.open("data.txt");
int n,i(0);
if (f.is_open())
{
while (!f.eof())
{
    f>>a[i];
    i++;
}
}
else
{
cout<<"Error"<<endl;
}
f.close();
bool flag=0;
for (int j = 0; j < i; j++)
{
    for (int k = 0; k <i ; k++)
    {
        if (k==j)continue;
        if (a[j]==a[k])
        {
            flag=1;
        }
    }
    // if (flag!=1)
    // {
    // cout<<"Number "<<a[j]<<" is unique"<<endl;
    // }
    // else{
    // cout<<"Number "<<a[j]<<" is not unique"<<endl;
    // }
    // flag=0;
}

    if (flag==1)
    {
    cout<<"Number are not unique"<<endl;
    }
    else{
    cout<<"Number are unique"<<endl;
    }







return 0;   
}