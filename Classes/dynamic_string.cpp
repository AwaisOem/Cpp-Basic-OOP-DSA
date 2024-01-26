#include <bits/stdc++.h>
using namespace std;
#define num_of_buf 10
#define ini_size 16
class String
{
private:
    char *s;
    unsigned int size;
    void asssign(const string &n){
        char *buffer[num_of_buf];
        int j = 0, i=0, k = 0;
        while (k < n.length())
        {
            buffer[j] = new char[ini_size];
            i = 0;
            while (i < ini_size - 1)
                buffer[j][i++] = n[k++];
            buffer[j++][i] = '\0';
        }
        size = (j - 1) * ini_size + i + 1;
        s = new char[size];
        s[0] = '\0';
        for (int l = 0; l < j; l++)
            strcat(s, buffer[l]);
        s[(j - 1) * ini_size + i] = '\0';
        for (int i = 0; i < j; i++)
            delete[] buffer[i];
    }
    void bound_error()const{cout<<"Error::Index out of bound.......";exit(1);}
    void invalid_error()const{cout<<"Error::Invalid.......";exit(1);}
    void enter(istream& in,char chr='\n'){
        delete [] s;
        char ch = '0', *buffer[num_of_buf];
        int j = 0, i;
        while (ch != chr)
        {
            buffer[j] = new char[ini_size];
            i = 0;
            while (i < ini_size - 1)
            {
                ch = in.get();
                if (ch == chr)
                    break;
                buffer[j][i++] = ch;
            }
            buffer[j++][i] = '\0';
        }
        size = (j - 1) * ini_size + i + 1;
        s = new char[size];
        s[0] = '\0';
        for (int l = 0; l < j; l++)
            strcat(s, buffer[l]);
        s[(j - 1) * ini_size + i] = '\0';
        for (int i = 0; i < j; i++)
            delete[] buffer[i];
    }
    void iinsert(int j, const string &n){
        int l = n.length(),sd = strlen(s),k = j;
        char ts[sd+l+1];
        strcpy(ts, s);
        for (int i = sd - 1; i >= j; --i)
            ts[i + l] = s[i];
        for (int k = j; k < j + l; k++)
            ts[k] = n[k - j];
        ts[sd + l] = '\0';
        delete [] s;
        s=new char[strlen(ts)];
        strcpy(s, ts);
    }
    void rreplace(int j, int l, const string &n){
        Erase(j, l);
        iinsert(j,n);
    }
public:
    String(int n=ini_size){s = new char[n];} 
    String(const char *n){asssign(n);}
    friend istream &operator>>(istream &os, String &d)
    {
        d.enter(os);
        return os;
    }
    friend ostream &operator<<(ostream &os, const String &d)
    {
        for (int i = 0; i < strlen(d.s); i++)
            cout << d.s[i];
        return os;
    }
    void Assign(const char *n){asssign(n);}
    void operator=(const string &n){asssign(n);}
    void operator=(const  char *n){asssign(n);}
    char At(const int &n) const
    { 
        if(strlen(s)>n)
        {
            return s[n];
        }
        else
        {
            bound_error();
        }
    }
    friend void Getline(istream &in, String &d, char chr = '\n')
    {
        d.enter(in,chr);
    }    
    void Copy(char h[], const int &l, const int &i)const
    {
        int j = i, k = 0;
        for (j, k; j < i + l; j++, k++)
        {
            h[k] = s[j];
        }
        h[k] = '\0';
    }
    unsigned int Capacity() { return size; }
    static unsigned int Min_Capacity() { return ini_size; }
    static unsigned int Max_size() { return num_of_buf * ini_size; } 
    String &Erase(int n = 0,int l = -1)
    {
        if (l<0)l=strlen(s)-n;
        int sd = strlen(s);
        for (int i = n; i < size - l; i++)
            s[i] = s[i + l];
        s[sd - l] = '\0';
    }
    int Find(const char &n, const unsigned int &j = 0) const
    {
        for (unsigned int i = j; i < strlen(s); i++)
        {
            if (n == s[i])
            {
                return i;
            }
        }
        return -1;
    }
    int Rfind(const char &n, int k = -1) const
    {
        if (k < 0)
        {
            k = strlen(s);
        }
        for (unsigned int i = k; i >= 0; i--)
        {
            if (n == s[i])
            {
                return i;
            }
        }
        return -1;
    }
    void Clear() { s[0] = '\0'; }
    bool operator==(const String &n)const
    {
        return (strcmp(n.s, s) == 0);
    }
    bool operator==(const string &n)const
    {
        return (n.compare(s) == 0);
    }
    bool operator==(const char *n)const
    {
        return (strcmp(n, s) == 0);
    }
    bool operator!=(const String &n)const
    {
        return (strcmp(n.s, s) != 0);
    }
    bool operator!=(const char *n)const
    {
        return (strcmp(n, s) != 0);
    }
    bool operator!=(const string &n)const
    {
        return (n.compare(s) != 0);
    }
    bool operator>(const String &n)const
    {
        return (strcmp(s, n.s) > 0);
    }
    bool operator<(const char *n)const
    {
        return (strcmp(s, n) < 0);
    }
    bool operator>=(const String &n)const
    {
        return (strcmp(s, n.s) >= 0);
    }
    bool operator<=(const char *n)const
    {
        return (strcmp(s, n) <= 0);
    }
    unsigned int Length() const { return strlen(s); }
    unsigned int Size() const { return strlen(s); }
    String &Reverse()
    {
        int sd = strlen(s);
        for (int i = 0; i <= sd / 2; i++)
            swap(s[i], s[sd - i - 1]);
    }
    String Substr(int j = 0, int k = -1)
    {
        if (j >= strlen(s) || j < 0)
            bound_error();
        if (k == -1 || k > (strlen(s) - j))
            k = strlen(s);
        String t(k-j);
        int i = j, o = 0;
        for (i, o; i < j + k; i++, o++)
            t.s[o] = s[i];
        t.s[o] = '\0';
        return t;
    }
    char &operator[](int n)
    {
        if (size <= n || n < 0)
            bound_error();
        return s[n];
    }
    String operator+(const String &n) const
    {
        String tmp(strlen(s) + strlen(n.s));
        int i = 0;
        for (i; i < strlen(s); i++)
            tmp.s[i] = s[i];
        for (i; i < (strlen(s) + strlen(n.s)); i++)
            tmp.s[i] = n.s[i - strlen(s)];
        tmp[i] = '\0';
        return tmp;
    }
    // String operator+(const char *n) const
    // {
    //     String tmp(strlen(s) + strlen(n));
    //     int i = 0;
    //     for (i; i < strlen(s); i++)
    //         tmp.s[i] = s[i];
    //     for (i; i < (strlen(s) + strlen(n)); i++)
    //         tmp.s[i] = n[i - strlen(s)];
    //     tmp[i] = '\0';
    //     return tmp;
    // }
    String operator+(const string &n) const
    {
        String tmp(strlen(s) + n.length());
        int i = 0;
        for (i; i < strlen(s); i++)
            tmp.s[i] = s[i];
        for (i; i < (strlen(s) + n.length()); i++)
            tmp.s[i] = n[i - strlen(s)];
        tmp[i] = '\0';
        return tmp;
    }
    int Compare(const char *n) const
    {
        int counter = 0;
        if (strlen(s) == strlen(n))
        {
            for (int i = 0; i < max(strlen(s), strlen(n)); i++)
                if (s[i] != n[i])
                    counter = 1;
        }
        else if (strlen(s) > strlen(n))
            counter = 1;
        else if (strlen(s) < strlen(n))
            counter = -1;
        return counter;
    }
    
    void Pop_back()
    {
        s[strlen(s) - 1] = '\0';
    }
    void Push_back(char n)
    {
        if(size>(strlen(s)+1)){
        s[strlen(s)] = n;
        s[strlen(s) + 1] = '\0';
        }
        else
        {
            char l[strlen(s)+2];
            strcpy(l, s);
            l[strlen(s)] = n;
            l[strlen(s) + 1] = '\0';
            delete [] s;
            s= new char[strlen(l)];
            strcpy(s, l);
        }
    }
    void Swap(String &n)
    {
        if (strlen(s)==strlen(n.s))
        {
            char t[strlen(s)];
            strcpy(t, s);
            strcpy(s, n.s);
            strcpy(n.s, t);
        }
        else
        {
            int sd= strlen(n.s);
            char t[sd];
            strcpy(t, n.s);
            delete [] n.s;
            n.s =new char[strlen(s)];
            strcpy(n.s, s);
            delete [] s;
            s= new char[sd];
            strcpy(s,t);
        }
    }
    String &Insert(int j, const string &n){iinsert(j,n);}
    String &Insert(int j, const String &n){iinsert(j,n.s);}
    String &Insert(int j, const char *n){iinsert(j,n);}
    String &Replace(int j, int l, const char *n)
    {
        rreplace(j,l,n);
    }
    String &Replace(int j, int l, const string &n)
    {
        rreplace(j,l,n);
    }
    String &Replace(int j, int l, const String &n)
    {
        rreplace(j,l,n.s);
    }
    void operator+=(const string &n)
    {
        // char ts[n.length()+strlen(s)+1];
        // int i;
        // for (i = strlen(s); i < (strlen(s) + n.length()); i++)
        //     ts[i] = n[i - strlen(s)];
        // ts[i] = '\0';
        // delete[] s;
        // s= new char[strlen(ts)+1];
        // strcpy(s, ts);
        // s[strlen(s)]='\0';
        Append(n);
    }
    void operator+=(const String &n)
    {
        // char ts[strlen(n.s)+strlen(s)+1];
        // int i;
        // for (i = strlen(s); i < (strlen(s) + strlen(n.s)); i++)
        //     ts[i] = n.s[i - strlen(s)];
        // ts[i] = '\0';
        // delete[] s;
        // s= new char[strlen(ts)+1];
        // strcpy(s, ts);
        // s[strlen(s)]='\0';
        Append(n.s);
    }
    void Append(const string &n)
    {
        char ts[n.length()+strlen(s)+1];
        int i;
        for (i = strlen(s); i < (strlen(s) + n.length()); i++)
            ts[i] = n[i - strlen(s)];
        ts[i] = '\0';
        delete[] s;
        s= new char[strlen(ts)+1];
        strcpy(s, ts);
        s[strlen(s)]='\0';
    }
    ~String() {delete[] s;}
};
int main() {
    String s1("AWAIS RAZA IS BEST");
    // String s2="best",s3="NOT BEST";
    // string ss1="Muhammad",ss2="asdfassfasfa";
    // char sss1[]="AWAIS RAZA";
    // s1=ss1+" "+sss1+" "+ss2;
    s1.Insert(7," DGgsdg ");
    if (s1[0]=='\0')
    {
        cout<<"Error";
    }
    
    cout<<s1<<endl;
    cout<<s1.Length()<<endl;
}