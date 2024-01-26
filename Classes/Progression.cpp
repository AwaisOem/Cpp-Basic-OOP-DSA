#include<bits/stdc++.h>
using namespace std;
class Progression
{
    protected:
        long fst,cur;
    public:
    Progression(long fs=0):fst(fs),cur(fs){}
    long FirstValue() 
    {
        return (cur=fst);
    }
    virtual long nextValue()
    {
        return cur++;
    }
    void printProgression(int n)
    {
        for (int i = 1; i <=n; i++)
            cout<<" "<<nextValue();
    }
    ~Progression(){}
};
class ArtmProgression : public Progression
{
    long inc;
    public:
    ArtmProgression(long fs=0,long in=1):Progression(fs) ,inc(in){}
    long nextValue()
    {
        int n=cur;
        cur+=inc;
        return n;
    }
};
class GeoProgression : public Progression
{
    long base;
    public:
    GeoProgression(long fs=1,long bas=10):Progression(fs) ,base(bas){}
    long nextValue()
    {
        int n=cur;
        cur*=base;
        return n;
    }
};
int main(){
ArtmProgression prog1(5);
prog1.printProgression(10);


 return 0;   
}