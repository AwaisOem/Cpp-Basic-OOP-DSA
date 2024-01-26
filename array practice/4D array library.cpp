#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int arr[4][5][2][3]={

    // ICT
    {  //chapter1
    { {1,2,3},{4,5,6}},
      //chapter2
    { {7,8,9},{10,11,12}},
      //chapter3
    { {13,14,15},{16,17,18}},
      //chapter4
    { {19,20,21},{22,23,24}},
      //chapter5
    { {25,26,27},{28,29,30}}},



    // Programming
    { //intro
    { {31,32,33},{34,35,36}},
        //Basics/syntax
    { {37,38,39},{40,41,42}},
        //Data types
    { {43,44,45},{46,47,48}},
        //conditions and selection
    { {49,50,51},{52,53,54}},
        //loops
    { {55,56,57},{58,59,60}}},



    // English
    {  //intro
    { {61,62,63},{64,65,66}},
        //part of speech
    { {67,68,69},{70,71,72}},
        //tences
    { {73,74,75},{76,77,78}},
        //other grammer
    { {79,80,81},{82,83,84}},
        //confidence and communication skills
    { {85,86,87},{88,89,90}}},


    // Calculus
    {   //Functions and linear inequalities
    { {91,92,93},{94,95,96}},
        //Limits
    { {97,98,99},{100,101,102}},
        //Derivatives
    { {103,104,105},{106,107,108}},
        //Integration
    { {109,110,111},{112,113,114}},
        //High level calculus
    { {115,116,117},{118,119,120}}}
};

    return 0;   
}