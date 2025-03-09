#include <iostream>
#include <array>
using namespace std;

const int NRows = 4;
const int NCols = 4;

typedef array<int, NRows> TRows;
typedef array<TRows, NCols> TMatrix;

void printMatrix(TMatrix m);
void fillMatrix(TMatrix& m);

int main(){
    TMatrix m;
    fillMatrix(m);
    printMatrix(m);
}

void fillMatrix(TMatrix& m){
    for (int i = 0; i < NRows; i++)
        for (int j = 0; j < NCols; j++)
            if(i == j) m[i][j] = 1;
            else m[i][j] = 0;
}

void printMatrix(TMatrix m){
    for (int i = 0; i < NRows; i++){
        for (int j = 0; j < NCols; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}