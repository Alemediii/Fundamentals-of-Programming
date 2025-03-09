#include <iostream>
#include <array>

using namespace std;
const int MAX = 6;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;

struct TMatrix{
    Matrix m;
    int nRow;
    int nCol;
};

void readMatrix(TMatrix& m);
void show(TMatrix m);
TMatrix multiply(TMatrix m, TMatrix n);

int main(){
    TMatrix m, n;
    readMatrix(m);
    readMatrix(n);

    if(m.nCol == n.nRow){
    TMatrix result = multiply(m, n);
    show(result);
    } else cout << "matrix are not multipliable";
}

void readMatrix(TMatrix& m){
    cout << "define rows and cols: ";
    cin >> m.nRow >> m.nCol;

    cout << "define matrix: " << endl;
    for (int i = 0; i < m.nRow; i++)
    {
        for (int j = 0; j < m.nCol; j++)
        {
            cin >> m.m[i][j];
        }
    }
}

void show(TMatrix m){
    cout << "matrix: " << endl;
    for (int i = 0; i < m.nRow; i++)
    {
        for (int j = 0; j < m.nCol; j++)
        {
            cout << m.m[i][j] << " - ";
        }
    cout << endl;
    }
}

TMatrix multiply(TMatrix m, TMatrix n){
    TMatrix result = {{}};
    result.nRow = m.nRow; result.nCol = n.nCol;
    for (int i = 0; i < n.nRow; i++)
        for (int j = 0; j < m.nCol; j++)
            for (int k = 0; k < n.nRow; k++)
                result.m[i][j] += m.m[i][k] * m.m[k][j];

    return result;
}