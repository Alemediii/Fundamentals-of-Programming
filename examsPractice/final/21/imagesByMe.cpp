#include <iostream>
#include <array>

using namespace std;
const int ROWS = 2;
const int COLS = 3;

typedef array<int, COLS> Rows;
typedef array<Rows, ROWS> Matrix;
typedef array<Rows, ROWS * 2> MatrixChange;

void build(Matrix m, MatrixChange& c);
int mean(Matrix m);
void printMatrix(MatrixChange m);
void fillMatrix(Matrix& m);

int main(){
    Matrix m;
    MatrixChange c;
    fillMatrix(m);

    build(m, c);
    printMatrix(c);

}
void fillMatrix(Matrix& m){
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            cin >> m[i][j];
}

void printMatrix(MatrixChange m){
    for (int i = 0; i < ROWS * 2; i++){
        for (int j = 0; j < COLS; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int absolute(int value);
int sumNeigh(MatrixChange m, int i, int j);

int sumNeigh(MatrixChange m, int i, int j){
    int neigh = 1;
    int sum = m[i][j];
    for (int row = 0; row < ROWS * 2; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            if(row == i or col == j){
                sum += m[row][col];
                neigh++;
            }
            if(absolute(i - row) == absolute(j - col)){
                sum += m[row][col];    
                neigh++;
            }
        }
        
    }
    return sum / neigh;
}

int absolute(int value){
    return (value < 0) ? -value : value;
}

int mean(Matrix m){
    int sum = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += m[i][j];
        }
    }
    return sum / (ROWS * COLS);
}

void build(Matrix m, MatrixChange& c){
    int count = 0;
    for (int i = 0; i < ROWS * 2; i += 2){
        c[i] = m[count];
        count++; 
    }

    for (int i = 1; i < ROWS * 2; i += 2)
    {
        for (int j = 0; j < COLS; j++)
        {
            c[i][j] = mean(m); 
        }
    }

    for (int i = 1; i < ROWS * 2; i += 2)
    {
        for (int j = 0; j < COLS; j++)
        {
            c[i][j] = sumNeigh(c, i, j);
        }
    }
    
}