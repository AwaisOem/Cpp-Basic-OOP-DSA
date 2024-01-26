#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void gotoxy(int x,int y){
COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void outlines(){
    gotoxy(3,1);
    for (int i = 0; i <152; i++)
    {
    cout<<"_";}
    gotoxy(7,3);
    for (int i = 0; i <144; i++)
    {
    cout<<"_";}
    for (int i = 0; i <25; i++)
    {
    gotoxy(3,i+2);
    cout<<"|";}
    for (int i = 0; i <25; i++)
    {
    gotoxy(154,i+2);
    cout<<"|";}
    for (int i = 0; i <22; i++)
    {
    gotoxy(6,i+4);
    cout<<"|";}
    for (int i = 0; i <22; i++)
    {
    gotoxy(151,i+4);
    cout<<"|";}
    gotoxy(6,26);
    for (int i = 0; i <146; i++)
    {
    cout<<"-";}
    gotoxy(3,27);
    for (int i = 0; i <152; i++)
    {
    cout<<"-";}
}
void text_on_upper_portion(string n){
    gotoxy(75,8);
    cout<<n;
}
void eid_mubarak(){
    string s[5]={
    "    #######  ##  ######      ###    ###  ##    ##  ######    #####   ######   ##   ##",
    "    ##       ##  ##   ##     ####  ####  ##    ##  ##   ##  ##   ##  ##   ##  ##  ##",
    "    #####    ##  ##   ##     ## #### ##  ##    ##  ######   #######  ######   #####",
    "    ##       ##  ##   ##     ##  ##  ##  ##    ##  ##   ##  ##   ##  ##   ##  ##  ##",
    "    #######  ##  ######      ##      ##   ######   ######   ##   ##  ##   ##  ##   ##"};
    color(14);
    for (int i = 8; i <8+5; i++)
    {
        gotoxy(35,i);
        cout<<s[i-8];
    }
    return;
}
int main(){
system("cls");
outlines();
eid_mubarak();
gotoxy(72,15);
color(13);
cout<<"TO ALL FRIENDS OF";
gotoxy(74,17);
Sleep(500);
color(14);
cout<<"BSCS REGULAR";
Sleep(500);
gotoxy(76,18);
color(12);
cout<<"BSCS SS1";

gotoxy(76,19);
Sleep(500);
color(11);
cout<<"BSCS SS2";

gotoxy(74,20);
Sleep(500);
color(9);
cout<<"BSIT REGULAR";

gotoxy(76,21);
Sleep(500);
color(8);
cout<<"BSIT SS1";

gotoxy(74,22);
Sleep(500);
color(7);
cout<<"BSSE REGULAR";

gotoxy(75,23);
Sleep(500);
color(6);
cout<<"BSSE SELF";

gotoxy(75,24);
Sleep(500);
color(5);
cout<<"MSCIT 1st";
gotoxy(127,25);
Sleep(900);
color(7);
    gotoxy(0,30);
return 0;   
}