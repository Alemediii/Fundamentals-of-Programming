#include <iostream>
#include <array>
using namespace std;

const int MAX = 5;

struct TMat{
    typedef array<int, MAX> Rows;
    typedef array<Rows, MAX> Matrix;
    int NRows, NCols;
};

void defineMatrix(TMat:: Matrix& a, int NRows, int NCols);
void showMatrix(TMat:: Matrix a, int NRows, int NCols);
TMat:: Matrix multiply(TMat:: Matrix a, TMat:: Matrix b, int NRowsA, int NColsB);
bool areMultipliable(TMat::Matrix& a, TMat::Matrix& b, int NColsA, int NRowsB);

int main(){
    TMat:: Matrix a, b;
    int NRowsA = 3, NRowsB = 4;
    int NColsA = 4, NColsB = 3;
    defineMatrix(a, NRowsA, NColsA);
    defineMatrix(b, NRowsB, NColsB);

    if(areMultipliable(a, b, NColsA, NRowsB)) showMatrix(multiply(a, b, NRowsA, NColsB), NRowsA, NColsB);
}



void defineMatrix(TMat::Matrix& a, int NRows, int NCols) {
    for (int i = 0; i < NRows; i++) {
        for (int j = 0; j < NCols; j++) {
            cin >> a[i][j];
        }
    }
}


void showMatrix(TMat:: Matrix a, int NRows, int NCols){
    for (int i = 0; i < NRows; i++)
    {
        for (int j = 0; j < NCols; j++)
        {
            cout << a[i][j] << " ";       
        }
    cout << endl;
    }
    cout << endl;
}

TMat:: Matrix multiply(TMat:: Matrix a, TMat:: Matrix b, int NRowsA, int NColsB){
    TMat:: Matrix mult = {};
    for (int i = 0; i < NRowsA; i++){
        for (int j = 0; j < NColsB; j++){
            mult[i][j] = 0;
            for (int k = 0; k < MAX; k++){
            mult[i][j] += a[i][k] * b[k][j];
            }}}
    return mult;
}

bool areMultipliable(TMat::Matrix& a, TMat::Matrix& b, int NColsA, int NRowsB) {
    return (NColsA == NRowsB);
} 