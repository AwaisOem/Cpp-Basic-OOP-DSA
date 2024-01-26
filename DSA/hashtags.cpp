#include<bits/stdc++.h>
using namespace std;




auto main()->int
{
    string input;
    getline(cin,input , ':');

    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] == '#'){
            if(i>0 && input[i-1] == ' ')
                input[i-1]= ',';
        }
    }
    cout<<endl<<input<<endl;

    return EXIT_SUCCESS;   
}

