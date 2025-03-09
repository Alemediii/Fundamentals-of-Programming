#include <iostream>
#include <array>
using namespace std;

const int NRows = 3;
const int NCols = 3;

typedef array<int, NRows> TRows;
typedef array<TRows, NCols> TMatrix;

void printMatrix(TMatrix m);
void fillMatrix(TMatrix& m);
TMatrix transverse(TMatrix& m);
bool compare(TMatrix m, TMatrix n);

int main(){
    TMatrix m;
    fillMatrix(m);
    printMatrix(m);
    printMatrix(transverse(m));

    if(compare(m, transverse(m))) cout << "symmetric";
    else cout << "not symmetric";
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

TMatrix transverse(TMatrix& m){
    for (int i = 0; i < NRows; i++){
        for (int j = i + 1; j < NCols; j++){
            swap(m[i][j], m[j][i]); 
        }
    }
    return m;
}

bool compare(TMatrix m, TMatrix n){
    bool success = true;
    for (int i = 0; i < NRows and success; i++){
        for (int j = i + 1; j < NCols and success; j++){
        if(m[i][j] != n[i][j]) success = false;
        }
    }
    return success;
}