#include<bits/stdc++.h>
using namespace std;
char player= 'x', opponent= 'o';
struct Point
{
    int i , j;
};
char tic[3][3] = {
    { 'x','o', '_'},
    { '_','x', 'o'},
    { 'x','_', 'o'}
};
int evaluateDraw()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if(tic[i][j] == '_')
                return 0;
    return 1;
}
char evaluateWin()
{
    for(int i = 0; i < 3; i++)
        if(tic[i][0] == tic[i][1] &&tic[i][1] == tic[i][2])
            return tic[i][0];
    for(int i = 0; i < 3; i++)
        if(tic[0][i] == tic[1][i] && tic[1][i] == tic[2][i])
            return tic[0][i];
    if((tic[0][0] == tic[1][1] && tic[1][1] ==tic[2][2])||(tic[2][0] == tic[1][1] && tic[1][1] ==tic[0][2]))
        return tic[1][1];
    return 0; 
}
Point bestPoint()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(tic[i][j] == '_')
            {
                tic[i][j] = player;




                
                tic[i][j] = '_';
            }
        }
        
    }
    
}
int main(){



 return 0;   
}