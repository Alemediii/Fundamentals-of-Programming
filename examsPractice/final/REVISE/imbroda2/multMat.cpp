#include <iostream>
#include <array>

using namespace std;
const int MAX = 5;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;

struct TMatrix{
    Matrix m;
    int nRows;
    int nCols;
};

void init(TMatrix& m);
void readMat(TMatrix& m);
void showMat(TMatrix m);
void multiplication(TMatrix& res, TMatrix m, TMatrix n, bool& multipliable);

int main(){
    TMatrix res, m, n;
    bool multipliable = true;
    init(res); readMat(m); readMat(n);
    multiplication(res, m, n, multipliable);

    if(multipliable) showMat(res);
    else cout << "the matrix is not multipliable";
}

void init(TMatrix& m){
        for (int i = 0; i < MAX; i++)
            for (int j = 0; j < MAX; j++)
                m.m[i][j] = 0;
}

void readMat(TMatrix& m){
    cout << "define nRow and nCol: ";
    cin >> m.nCols >> m.nRows;
    for (int i = 0; i < m.nRows; i++)
    {
        for (int j = 0; j < m.nCols; j++)
        {
            cin >> m.m[i][j];
        }
    }
}

void showMat(TMatrix m){
    cout << "the matrix: \n"; 
    for (int i = 0; i < m.nRows; i++)
    {
        for (int j = 0; j < m.nCols; j++)
        {
            cout << m.m[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplication(TMatrix& res, TMatrix m, TMatrix n, bool& multipliable){
    if(m.nCols == n.nRows){
        res.nRows = m.nRows;
        res.nCols = n.nCols;

        for (int i = 0; i < res.nRows; i++)
            for (int j = 0; j < res.nCols; j++)
                for (int k = 0; k < res.nRows; k++)
                    res.m[i][j] += m.m[i][k] * n.m[k][j];
    } else multipliable = false;
}