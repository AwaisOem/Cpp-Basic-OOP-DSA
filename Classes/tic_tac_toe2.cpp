#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
class tic_tac_toe
{
    char b[3][3];
    char turn = 'X';
public:
    tic_tac_toe() : b{{NULL}} {}
    void winner()
    {
        cout << endl;
        cout << "Player [" << turn << "] wins the match " << endl;
    }
    int Play()
    {
        bool s = false;
        int n;
        do
        {
            cout << "Player [" << turn << "] turn Enter position>>  ";
            cin >> n;
            if (n > 0 && n < 10)
            {
                int k = 0;
                for (int i = 0; i < 3; i++)
                    for (int j = 0; j < 3; j++)
                        if (n == ++k)
                            s = set(i, j);
            }
            if (s)
                break;
            cout << "Invalid:: Enter again....." << endl;
        } while (1);
        return n;
    }
    void Turn()
    {
        if (turn == 'X')
            turn = 'O';
        else
            turn = 'X';
    }
    bool gameover()
    {
        for (int i = 0; i < 3; i++)
            if ((b[i][0] != '\0' && b[i][1] != '\0' && b[i][2] != '\0') ||(b[0][i] != '\0' && b[1][i] != '\0' && b[2][i] != '\0'))
                if ((b[i][0] == b[i][1] && b[i][1] == b[i][2])||(b[0][i] == b[1][i] && b[1][i] == b[2][i]))
                    return true;
        if ((b[0][0] != '\0' && b[1][1] != '\0' && b[2][2] != '\0') || (b[0][2] != '\0' && b[1][1] != '\0' && b[2][0] != '\0'))
            if ((b[0][0] == b[1][1] && b[1][1] == b[2][2]) || (b[0][2] == b[1][1] && b[1][1] == b[2][0]))
                return true;
        return false;
    }
    bool set(int n, int c)
    {
        if (b[n][c] != '\0')
            return false;
        b[n][c] = turn;
        return true;
    }
    char get_turn()
    {
        return turn;
    }
};
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
char c[9];
void Interface(char turn = '\0', int n = 0)
{
    for (int j = 60; j < 83; j++)
    {
        gotoxy(j, 5);
        cout << "-";
        gotoxy(j, 9);
        cout << "-";
    }
    for (int j = 2; j < 13; j++)
    {
        gotoxy(67, j);
        cout << "|";
        gotoxy(75, j);
        cout << "|";
    }
    if (!(turn == '\0' || n == 0))
        c[n - 1] = turn;
    int u = 0;
    for (int j = 3; j <= 11; j += 4)
        for (int i = 0; i <= 16; i += 8)
        {
            gotoxy(63 + i, j);
            if (c[u] >= '0' && c[u] <= '9')
                color(13);
            else
            {
                if (c[u] == 'X')
                    color(14);
                else
                    color(11);
            }
            cout << c[u++];
            color(7);
        }
    gotoxy(38, 15);
}
int main()
{
    char y;
    do
    {
        for (char i = 0;i<9; i++)
            c[i]=i+49;
        system("cls");
        tic_tac_toe t;
        Interface();
        int i = 0;
        do
        {
            int n = t.Play();
            system("cls");
            Interface(t.get_turn(), n);
            if (t.gameover())
            {
                t.winner();
                break;
            }
            if (++i >= 9)
            {
                cout << endl
                    << "No one is winner...." << endl;
                break;
            }
            t.Turn();
        } while (1);
        cout << "\n\nDo you want to play again??  ";
        y = getche();
    } while (y == 89 || y == 121);
    return 0;
}