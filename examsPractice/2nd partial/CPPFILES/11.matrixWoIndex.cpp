#include <iostream>
#include <array>

const int N = 3;
using namespace std;

typedef array<int, N> rows;
typedef array<rows, N> matrix;

matrix read();
void show(matrix m);
void newMatrix(matrix m, int rows, int cols);

int main(){
    matrix m = read();
    cout << "matrix:" << endl; 
    show(m);
    cout << endl;
    cout << "new matrix:" << endl; 
    newMatrix(m, 1, 2);
}

matrix read(){
    matrix m;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> m[i][j];
    return m;
}

void show(matrix m){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << m[i][j];
        }
    cout << endl;
    }
}

void newMatrix(matrix m, int rows, int cols){
    for (int i = 0; i < N; i++){
        if(i != rows){
        for (int j = 0; j < N; j++){
            if(j != cols) cout << m[i][j] << " ";
        }
        cout << endl;
        }
    }
}