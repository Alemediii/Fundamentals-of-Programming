#include <iostream>
#include <array>
using namespace std;

const int NRows = 3;
const int NCols = 3;

typedef array<int, NRows> Rows;
typedef array<Rows, NCols> Matrix;

void defineMatrix(Matrix& m);
void showMatrix(Matrix m);
Matrix multiply(Matrix a, Matrix b);

int main(){
    Matrix a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Matrix b = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    // defineMatrix(a); defineMatrix(b);
    showMatrix(a); showMatrix(b);

    showMatrix(multiply(a, b));
}

void defineMatrix(Matrix& m){
    for (int i = 0; i < NRows; i++)
    {
        for (int j = 0; j < NCols; j++)
        {
            cin >> m[i][j];       
        }
    }
}

void showMatrix(Matrix m){
    for (int i = 0; i < NRows; i++)
    {
        for (int j = 0; j < NCols; j++)
        {
            cout << m[i][j] << " ";       
        }
    cout << endl;
    }
    cout << endl;
}

Matrix multiply(Matrix a, Matrix b){
    Matrix mult = {};
    for (int i = 0; i < NRows; i++)
        for (int j = 0; j < NCols; j++)
            for (int k = 0; k < NRows; k++)
            mult[i][j] += a[i][k] * b[k][j];
    return mult;
}