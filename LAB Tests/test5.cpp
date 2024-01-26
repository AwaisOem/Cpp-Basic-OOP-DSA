#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int a[10];
int temp,j;
for (int z = 0; z <10; z++)
{
    cin>>a[z];
}

for(int i=1;i<10;i++){
    temp=a[i];
    j=i-1;
    while (a[j]>temp and j!=-1)
    {
        a[j+1]=a[j];
        j--;
    }
a[j+1]=temp;
}


for (int z = 0; z <10; z++)
{
    cout<<a[z]<<" ";
}

return 0;   
}