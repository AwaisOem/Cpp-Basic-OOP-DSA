#include<iostream>
using namespace std;int main(){
// The snail climbs up 7 feet each day and slips back 2 feet each night.
// How many days will it take the snail to get out of a well with the given depth?
int h;cin>>h;int days(1);if (h<1)days=0;while (h>7){h-=5;days++;}cout<<days<<endl;return 0;}