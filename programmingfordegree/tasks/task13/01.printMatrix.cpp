#include <iostream>
#include <array>
using namespace std;

const int NRows = 3;
const int NCols = 3;

typedef array<int, NRows> TRows;
typedef array<TRows, NCols> TMatrix;

void printMatrix(TMatrix m);
void fillMatrix(TMatrix& m);

int main(){
    TMatrix m;
    cout << "define the matrix: ";
    fillMatrix(m);
    printMatrix(m);
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
}