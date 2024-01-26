#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void CopyLower(){
    string s;
    fstream read,write;
    read.open("Book.txt");
    write.open("newbook.txt");
    if (read.is_open() && write.is_open()){
    while (!read.eof())
    {
        getline(read, s);
        for (int i = 0; i <s.length(); i++)
        {
            s[i]=tolower(s[i]);
        }
        write<<s<<endl;
    }
    }
    else
    {
    cout<<"Error"<<endl;
    }
    read.close();
    write.close();
}
int main(){
CopyLower();
return 0;   
}