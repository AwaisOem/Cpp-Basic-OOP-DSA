#include <bits/stdc++.h>
using namespace std;
class Matrix
{
    int *matrix, r, c;
public:
    Matrix(unsigned int a = 0, unsigned int b = 0) : r(a), c(b) { matrix = new int[a * b]; }
    int getrows() { return r; }
    int getcolums() { return c; }
    void setelement(int a, int b, int value) { *(matrix + a * c + b) = value; }
    int &getelement(int a, int b) { return *(matrix + a * c + b); }
    Matrix operator+(Matrix m)
    {
        if (m.r == r && m.c == c)
        {
            Matrix t(r, c);
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    t.getelement(i, j) = getelement(i, j) + m.getelement(i, j);
            return t;
        }
        else
        {
            cout << "ERROR::invalid Addition.....";
            exit(1);
        }
    }
    Matrix operator*(Matrix m)
    {
        if (m.r == c)
        {
            Matrix t(r,m.c);
            for (int j = 0; j < r; j++)
            {
                for (int k = 0; k < m.c; k++)
                {
                    int sum = 0;
                    for (int i = 0; i < m.r || i < c; i++)
                    {
                        sum += (getelement(j, i)*m.getelement(i,k));
                    }
                    t.getelement(j,k) = sum;
                }
            }
            return t;
        }
        else
        {
            cout << "ERROR::invalid Multiplication.....";
            exit(1);
        }
    }
    void input()
    {
        cout << "\nINPUT MATRIX ELEMENTS ::\n";
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> *(matrix + i * c + j);
    }
    void get()
    {
        cout << "Enter number of rows:    ";
        cin >> r;
        cout << "Enter number of colums:    ";
        cin >> c;
        matrix = new int[r * c];
    }
    void showMatrix()
    {
        cout << "\nMatrix is ::\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << getelement(i, j) << "  ";
            cout << endl;
        }
    }
    ~Matrix() { delete[] matrix; }
};
int main()
{
    Matrix m1(3, 4), m2(4, 3), m3(4, 4);
    m1.input();
    m2.input();
    m1.showMatrix();
    m2.showMatrix();
    m3 = m1 * m2;
    m3.showMatrix();
    return 0;
}