#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//input
cout<<"Enter number of rows you want in your matrix:    ";int row;cin>>row;
cout<<"Enter number of Columes you want in your matrix:     ";int col;cin>>col;
    int a[row][col],b[row][col],r[row][col];
    cout<<"********************NOW ENTER VALUES IN FIRST MATRIX*************"<<endl;
    for(int q=0;q<row;q++){
        cout<<"Enter values in row "<<q+1<<endl;
    for(int w=0;w<col;w++){
            cout<<"Enter value in "<<w+1<<" Colume:  ";cin>>a[q][w];
    }
    }
    cout<<"********************NOW ENTER VALUES IN SECOND MATRIX*************"<<endl;
    for(int q=0;q<row;q++){
        cout<<"Enter values in row "<<q+1<<endl;
    for(int w=0;w<col;w++){
            cout<<"Enter value in "<<w+1<<" Colume:  ";cin>>b[q][w];
    }
    }

  //         calculating subtraction
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            r[i][j]=(a[i][j]*b[i][j]);
    }
    }
cout<<"\n\n"<<"*********************Here is Resultant Matrixs******************"<<endl;
//                   printing
        for(int k=0;k<row;k++){
            for(int l=0;l<col;l++){
                cout<<"\t"<<r[k][l];
            }
            cout<<endl;
        }

    return 0;   
}