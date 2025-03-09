#include <iostream>
#include <array>

using namespace std;
const int MAX = 4;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;

Matrix read();
void show(Matrix& m, int level);
void rotate(Matrix& m);

int main(){
    Matrix matrix = read();
    show(matrix, 1);
}

Matrix read(){
    Matrix matrix;
    for (int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
            cin >> matrix[i][j];
    return matrix;
}

void show(Matrix& m, int level){
    for (int i = 0; i < level; i++)
        rotate(m);

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl; 
    }
}

void rotate(Matrix& m) {
    // Transpose the matrix
    for (int i = 0; i < MAX; i++) {
        for (int j = i + 1; j < MAX; j++) {
            swap(m[i][j], m[j][i]);
        }
    }

    // Flip horizontally (reverse each row)
    for (int i = 0; i < MAX; i++) {
        int left = 0;
        int right = MAX - 1;
        while (left < right) {
            swap(m[i][left], m[i][right]);
            ++left;
            --right;
        }
    }
}
