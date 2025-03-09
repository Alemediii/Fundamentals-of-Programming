#include <iostream>
#include <array>

using namespace std;
const int N = 8;

typedef array<char, N> Rows;
typedef array<Rows, N> Matrix;

void show(Matrix m){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix init(){
    Matrix m = {{
        {'x', 'o', 'x', 'o', 'o', 'x', 'x', 'x'},
        {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
        {'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o'},
        {'o', 'o', 'x', 'x', 'o', 'o', 'o', 'o'},
        {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
        {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
        {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
        {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'}
    }};
    return m;
}

bool valid(Matrix m, int row, int col);
bool border(Matrix m, int row, int col);
void occuped(Matrix m, int& black, int& white);

int main(){
    Matrix m = init();
    int black, white;
    occuped(m, black, white);

    cout << "black box: " << black;
    cout << endl;
    cout << "white box: " << white;
}

void occuped(Matrix m, int& black, int& white){
    black = white = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if((i - j) % 2 == 0 and valid(m, i, j)) black++;
            if((i - j) % 2 != 0 and valid(m, i, j)) white++;
        }
    }
}

bool valid(Matrix m, int row, int col){
    return m[row][col] == 'x' and not border(m, row, col);
}  

bool border(Matrix m, int row, int col){
    return (row == 0 || col == 0 || row == N - 1 || col == N - 1);
}
