#include <iostream>
#include <array>
using namespace std;

const int NRows = 3;
const int NCols = 3;

typedef array<int, NRows> TRows;
typedef array<TRows, NCols> TMatrix;

void printMatrix(TMatrix m);
void fillMatrix(TMatrix& m);
void firstMax(TMatrix m, int& x, int& y);


int main(){
    TMatrix m;
    int x, y;
    fillMatrix(m);
    printMatrix(m);

    firstMax(m, x, y);
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

void firstMax(TMatrix m, int& x, int& y){
    for (int i = 0; i < NRows; i++){
        for (int j = 0; j < NCols; j++){
            if(i == 0)
}