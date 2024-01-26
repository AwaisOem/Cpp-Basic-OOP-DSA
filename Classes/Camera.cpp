#include<bits/stdc++.h>
using namespace std;
class Camera
{
    string serialNum,brand;
    public:
    Camera():serialNum(""),brand("") {}
    Camera(string a,string b):serialNum(a),brand(b) {}
    void setSerialNum(string a)
    {serialNum = a;}
    void setBrand(string b)
    {brand = b;}
    string getSerialNum()const
    {return serialNum;}
    string getBrand()const
    {return brand;}
    void printCameraInfo()const{
        cout<<"This is a camera with the following info:\n";
        cout<<"Serial Number: "<<serialNum<<endl<<"Brand: "<<brand<<endl;
    }
};
class DigitalCamera: public Camera
{
    int pixelInM;bool isCMOS;
    public:
    DigitalCamera():Camera("000000","XXX"),pixelInM(1),isCMOS(false){}
    DigitalCamera(int pixelInm):Camera("000000","XXX"),pixelInM(pixelInm),isCMOS(false) {}
    DigitalCamera(string a,string b,int p,bool i):Camera(a,b),pixelInM(p),isCMOS(i) {}
    DigitalCamera(const DigitalCamera&V)
    {
        setSerialNum(V.getSerialNum());
        setBrand(V.getBrand());
        pixelInM=V.pixelInM;
        isCMOS=V.isCMOS;
    }
};
int main(){



 return 0;   
}