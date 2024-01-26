#include<iostream>
#include<iomanip>
using namespace std;
char lg_arr(char s[]){
        char lg=s[0];
        int size=sizeof(s)-1;

        for (int i =1; i<size; i++)
            if(s[i]>lg)
                lg=s[i];
    return lg;
}

int main(){
int n;cin>>n;

char a[n+1];
// cin.getline(a,n);
cin>>a;
cout<<"LARGEST WORD in THis array is "<<lg_arr(a)<<endl;

    return 0;   
}