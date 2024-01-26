// Use a for
// loop that swaps the first and last characters, then the second and next-to-last characters,
// and so on. The string should be passed to reversit() as an argument.
// Write a program to exercise reversit(). The program should get a string from the user,
// call reversit(), and print out the result. Use an input method that allows embedded
// blanks. Test the program with Napoleon’s famous phrase, “.”
#include<iostream>
#include<cstring>
using namespace std;
char* reverseit(char*a){
    int size = strlen(a);
    for (int i = 0; i<=size/2; i++)
        swap(a[i], a[size-i-1]);
    return a;
}
int main(){
char n[]="Able was I ere I saw Elba";
cout<<reverseit(n);
return 0;   
}