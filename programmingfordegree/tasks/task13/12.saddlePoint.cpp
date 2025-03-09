#include <iostream>
#include <array>
 
using namespace std;
const int NRows = 3;
const int NCols = 3;

typedef array<int, NRows> Rows;
typedef array<Rows, NCols> Matrix;

void fillMatrix(Matrix& m);
void showMatrix(Matrix m);
bool saddlePoint(Matrix m, int& i, int j);
Matrix saddlePoints(Matrix m);

int main(){
    Matrix m;
    fillMatrix(m);
    showMatrix(m);

    cout << "the saddlePoints matrix is: " << endl; 
    showMatrix(saddlePoints(m));
}

void fillMatrix(Matrix& m){
    for (int i = 0; i < NRows; i++)
    for (int j = 0; j < NCols; j++)
    cin >> m[i][j];
}

void showMatrix(Matrix m){
    for (int i = 0; i < NRows; i++){
    for (int j = 0; j < NCols; j++){
    cout <<  m[i][j] << " ";
    }
        cout << endl;
    }
    cout << endl;
}

bool saddlePoint(Matrix m, int& a, int b){
    bool success = true;
    for (int i = 0; i < NRows; i++)
    for (int j = 0; j < NCols; j++)
        if(m[a][b] > m[i][b] or m[a][b] < m[a][j]) success = false;
    return success;
}

Matrix saddlePoints(Matrix m){
    Matrix saddle = {};
    for (int i = 0; i < NRows; i++)
    for (int j = 0; j < NCols; j++)
    if(saddlePoint(m, i, j)) saddle[i][j] = m[i][j];
    return saddle;
}