#include <bits/stdc++.h>
#define size 100
#define lsize 6
using namespace std;
class master
{
    char *arr[size];
    int count;
    static int gcount;
    int nog;
    char secret[lsize];

public:
    master(char *n[], int k,int v=10) :nog(v),count(k)
    {
        if(k >size){cout<<"Invalid......";exit(1);}
        for (int i = 0; i < k; i++)
            arr[i] = n[i];
    }
    void set_secret(const char *n = "")
    {
        if (n != "")
        {
            for (int i = 0; i < count; i++)
            {
                if (!strcmp(n, arr[i]))
                {
                    strcpy(secret, n);
                    return;
                }
            }
            cout << "secret key doesn't matches in list....\n";
        }
        do
        {
            cout << "Enter Secret Key     ";
            cin >> secret;
            for (int i = 0; i < count; i++)
                if (!strcmp(secret, arr[i]))
                    return;
            cout << "secret key doesn't matches in list....\n";
        } while (1);
    }
    int guess(const char *n)
    {
        if (gcount < nog)
        {
            gcount++;
            int flag = -1;
            for (int i = 0; i < count; i++)
                if (!strcmp(n, arr[i]))
                {
                    flag = i;
                    break;
                }
            if (flag != -1)
            {
                int t = flag;
                flag = 0;
                for (int i = 0; i < lsize; ++i)
                    if (n[i] == secret[i])
                        flag++;
                return flag;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            cout << "Hey you go to hell, You cheater, Your tries are over YOU LOST, LOSER ;)  .....\n";
            exit(1);
        }
    }
};
int master::gcount=0;
int main()
{
    system("cls");
    char *n[4] = {"acckzz","ccbazz","eiowzz","abcczz"};
    master m(n, 4,4);
    m.set_secret("acwkzz");
    if(m.guess("aaaaaa")==lsize || 
    m.guess("acckzz")==lsize||
    m.guess("ccbazz")==lsize||
    m.guess("sdjsnjn")==lsize||
    m.guess("abcczz")==lsize){
        cout<<"secret key matches in list....\n";
    }else
    {
        cout<<"secret key doesn't matches in list....\n";
    }
    return 0;
}