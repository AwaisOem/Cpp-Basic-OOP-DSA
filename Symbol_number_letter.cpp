#include<iostream>
#include<iomanip>
using namespace std;
int main(){

string a;
getline(cin,a);
int sym(0),num(0),let(0);
for(int i = 0; i <a.length(); i++){
    if((a[i] >=33 && a[i] <=47) || (a[i] >=58 && a[i] <=64) || (a[i] >=91 && a[i] <=96) ||  (a[i] >=123 && a[i] <=126)){
        sym++;
    }
    if (a[i]>='0' && a[i]<='9')
    {
        num++;
    }
    if ((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
    {
        let++;
    }
}
cout<<"\t"<<sym<<"\t"<<num<<"\t"<<let<<endl;
 return 0;   
}