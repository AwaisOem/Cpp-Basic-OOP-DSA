#include "iostream"
using namespace std;
class Matrix
{
    private:
    static const int colum=5,row=5;
    int matrix[row][colum];
    public:
    Matrix(){
        for (int i = 0; i < row; i++)
            for (int j = 0; j < colum; j++)
                matrix[i][j] =0;
    }
    int get_col(){return colum;}
    int get_row(){return row;}
    void set_element(int a,int b,int c) {
        matrix[a][b]= c;
    }
    void show(){
        cout<<"\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < colum; j++)
                cout<<" "<<matrix[i][j];
            cout<<endl;
        }
        cout<<"\n";
    }
    Matrix Add(Matrix& mat);
};
Matrix Matrix::Add(Matrix& mat){
        Matrix temp;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < colum; j++)
                temp.matrix[i][j]=matrix[i][j]+mat.matrix[i][j];
        return temp;
    }
int main(){
    Matrix A,B;
    A.set_element(1,1,67);
    A.set_element(1,2,45);
    A.set_element(2,4,23);
    A.set_element(3,2,89);
    A.set_element(1,3,48);
    B.set_element(1,1,27);
    B.set_element(1,2,41);
    B.set_element(2,4,12);
    B.set_element(3,2,55);
    B.set_element(1,3,33);
    Matrix C=A.Add(B);
    A.show();
    B.show();
    C.show();
return 0;   
}