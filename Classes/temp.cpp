#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        /// No argument constructor
        Distance():feet(0), inches(0.0f){}
        /// Two argument constructor
        Distance(int f, float inc):feet(f), inches(inc) {}
        void getdist(); /// declaration of M.F
        void setDist(int f, float inc); /// /// declaration of M.F
        void showdist() const;

        /// Distance d3 = d1 + d2;
        Distance operator + (const Distance& dd2) const
        {
            cout<<"Operator + "<<endl;
            Distance temp;
            temp.feet = feet + dd2.feet;
            temp.inches = inches + dd2.inches;
            while(temp.inches >= 12.0f)
            {
                temp.inches -= 12.0f;
                temp.feet = temp.feet + 1;
            }
            return temp;
        }
        Distance operator - (const Distance& dd2) const
        {
            cout<<"Operator - "<<endl;
            Distance temp;
            temp.feet = feet - dd2.feet;
            temp.inches = inches - dd2.inches;
            while(temp.inches >= 12.0f)
            {
                temp.inches -= 12.0f;
                temp.feet = temp.feet + 1;
            }
            return temp;
        }
        Distance operator * (const Distance& dd2) const
        {
            cout<<"Operator * "<<endl;
            Distance temp;
            temp.feet = feet * dd2.feet;
            temp.inches = inches * dd2.inches;
            while(temp.inches >= 12.0f)
            {
                temp.inches -= 12.0f;
                temp.feet = temp.feet + 1;
            }
            return temp;
        }
        bool operator > (const Distance& dd2) const
        {
            float tfeet1 = feet + inches/12.0f;
            float tfeet2 = dd2.feet + dd2.inches/12.0f;
            if(tfeet1 > tfeet2)
                return true;
            else
                return false;
        }
        /// Destructor
        ~Distance(){}
};

int main()
{
    Distance d1, d2(7, 11.2f), d3(4, 8.1f), d4(3,3.3f);
    d1.getdist();
    cout<<"Distance-1"<<endl;
    d1.showdist();
    cout<<"Distance-2"<<endl;
    d2.showdist();
    cout<<"Distance-3"<<endl;
    d3.showdist();
    cout<<"Distance-4"<<endl;
    d4.showdist();

    cout<<endl;
    Distance d5 = d1 + d2 - d3 * d4;
    d5.showdist();
    if( d1 > d2)
        cout<<"Distance-1 is largest"<<endl;
    else
        cout<<"Distance-2 is largest"<<endl;


    return 0;
}

void Distance::getdist()        /// Defination of M.F outside of the class
{
        cout<<"Enter feets: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
}

void Distance::setDist(int f, float inc)  /// Defination of M.F outside of the class
{
    feet = f;
    inches = inc;
}
void Distance::showdist() const
{
    cout<<"Distance is "<<feet<<"\'"<<inches<<'\"'<<endl;
}
