#include<iostream>
#include<iomanip>
using namespace std;
int main(){do{
    
    double pkr;
cout<<"Enter PKR:     ";
cin>>pkr;
cout<<endl;
  const  char* cur[30]={"Turkish Lira","USD","Saudi Riyal","indian Rs","Pound","Taka","Dinar","Euro","Chinese Yaun","UAE Dirham","Srilankan Ruppee","Russian Rubi","Singapore Dollar","Newzealand Dollar","Canadian Dollar","Afghan Afghani","Iranian Rial","Qatari Rial","Omani Rial","Hong Kong Dollar","Israeli New Shekel","Kyrgystani Som"};
    double prc[30]={12.89,176.65,47.09,2.35,233.79,2.06,583.58,199.86,27.70,48.09,0.88,2.39,128.7,119.09,137.49,1.84,0.0042,48.52,458.84,22.66,55.87,2.08};
    
    int i;
    for(i=0; i<=21; i++){      
     cout<<"press "<<i<<" for "<<cur[i]<<"."<<endl;   };
    
    
    int t;
    cout<<endl;
    cout<<"Enter the value:     ";cin>>t;
    cout<<endl;
    if(t<=21){
        switch(t){ 
        case 0: cout<<"Required amout in "<<cur[0]<<" is "<<(pkr/prc[0])<<endl;
        break;
        case 1: cout<<"Required amout in "<<cur[1]<<" is "<<(pkr/prc[1])<<endl;
        break;
        case 2: cout<<"Required amout in "<<cur[2]<<" is "<<(pkr/prc[2])<<endl;
        break;
        case 3: cout<<"Required amout in "<<cur[3]<<" is "<<(pkr/prc[3])<<endl;
        break;  
        case 4: cout<<"Required amout in "<<cur[4]<<" is "<<(pkr/prc[4])<<endl;
        break;      
        case 5: cout<<"Required amout in "<<cur[5]<<" is "<<(pkr/prc[5])<<endl;
        break;
        
        case 6: cout<<"Required amout in "<<cur[6]<<" is "<<(pkr/prc[6])<<endl;
        break;
        
        case 7: cout<<"Required amout in "<<cur[7]<<" is "<<(pkr/prc[7])<<endl;
        break;
        
        case 8: cout<<"Required amout in "<<cur[8]<<" is "<<(pkr/prc[8])<<endl;
        break;
        
        case 9: cout<<"Required amout in "<<cur[9]<<" is "<<(pkr/prc[9])<<endl;
        break;
        
        case 10: cout<<"Required amout in "<<cur[10]<<" is "<<(pkr/prc[10])<<endl;
        break;
        case 11: cout<<"Required amout in "<<cur[11]<<" is "<<(pkr/prc[11])<<endl;
        break;
        case 12: cout<<"Required amout in "<<cur[12]<<" is "<<(pkr/prc[12])<<endl;
        break;
        
        case 13: cout<<"Required amout in "<<cur[13]<<" is "<<(pkr/prc[13])<<endl;
        break;
        case 14: cout<<"Required amout in "<<cur[14]<<" is "<<(pkr/prc[14])<<endl;
        break;
        case 15: cout<<"Required amout in "<<cur[15]<<" is "<<(pkr/prc[15])<<endl;
        break;
        case 16: cout<<"Required amout in "<<cur[16]<<" is "<<(pkr/prc[16])<<endl;
        break;
       case 17: cout<<"Required amout in "<<cur[17]<<" is "<<(pkr/prc[17])<<endl;break;
       case 18: cout<<"Required amout in "<<cur[18]<<" is "<<(pkr/prc[18])<<endl;break;
         case 19: cout<<"Required amout in "<<cur[19]<<" is "<<(pkr/prc[19])<<endl;break;
         case 20: cout<<"Required amout in "<<cur[20]<<" is "<<(pkr/prc[20])<<endl;break;
         case 21: cout<<"Required amout in "<<cur[21]<<" is "<<(pkr/prc[21])<<endl;break;
        //  case 22: cout<<"Required amout in "<<cur[22]<<" is "<<(pkr/prc[22])<<endl;break;
        //  case 23: cout<<"Required amout in "<<cur[23]<<" is "<<(pkr/prc[23])<<endl;break;
        //  case 24: cout<<"Required amout in "<<cur[24]<<" is "<<(pkr/prc[24])<<endl;break;
        default:
         cout<<"good luck"<<endl;    }  
        
        
        
    }else{        cout<<"invalid entry";cout<<endl;}
   
cout<<endl;
}while(true);
  
   
   return 0;
}