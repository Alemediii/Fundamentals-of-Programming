#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;

const int NRows = 3;
const int NCols = 3;
const int RandMax = 9;

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
    srand(time(0));
    for (int i = 0; i < NRows; i++)
        for (int j = 0; j < NCols; j++)
            m[i][j] = rand() % (RandMax - 0 + 1);
}

void printMatrix(TMatrix m){
    for (int i = 0; i < NRows; i++){
        for (int j = 0; j < NCols; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}