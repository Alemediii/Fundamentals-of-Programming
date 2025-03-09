#include <iostream>
#include <array>
using namespace std;

const int NRows = 3;
const int NCols = 3;

typedef array<int, NRows> TRows;
typedef array<TRows, NCols> TMatrix;

void printMatrix(TMatrix m);
void fillMatrix(TMatrix& m);
TMatrix swapRows(TMatrix& m, int r1, int r2);

int main(){
    TMatrix m;
    fillMatrix(m);
    printMatrix(m);

    printMatrix(swapRows(m, 1, 2));
}

void fillMatrix(TMatrix& m){
    for (int i = 0; i < NRows; i++)
        for (int j = 0; j < NCols; j++)
            cin >> m[i][j];
}

void printMatrix(TMatrix m){
    for (int i = 0; i < NRows; i++){
        for (int j = 0; j < NCols; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

TMatrix swapRows(TMatrix& m, int r1, int r2){
    for (int i = 0; i < NRows; i++)
        for (int j = 0; j < NCols; j++)
        swap(m[r1 - 1], m[r2 - 1]);
    return m;
}