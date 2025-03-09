#include <iostream>
#include <array>
using namespace std;

const int NRows = 4;
const int NCols = 4;

typedef array<int, NRows> TRows;
typedef array<TRows, NCols> TMatrix;

void printMatrix(TMatrix m);
void fillMatrix(TMatrix& m);
bool checkMatrix(TMatrix m);
string boolToString(bool value);

int main(){
    TMatrix m;
    fillMatrix(m);
    printMatrix(m);
    cout << "diagonal matrix? " << boolToString(checkMatrix(m));
}

void fillMatrix(TMatrix& m){
    for (int i = 0; i < NRows; i++)
        for (int j = 0; j < NCols; j++)
            if(i == j) m[i][j] = 1;
            else m[i][j] = 3;
}

void printMatrix(TMatrix m){
    for (int i = 0; i < NRows; i++){
        for (int j = 0; j < NCols; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkMatrix(TMatrix m){
    bool success = true;
    for (int i = 0; i < NRows; i++){
        for (int j = 0; j < NCols; j++){
            if((i != j && m[i][j] != 0) or (i == j && m[i][j] == 0))
            success = false;
        }
    }
    return success;
}

string boolToString(bool value){
    return value ? "true" : "false";
}