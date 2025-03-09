#include <iostream>
#include <array>

using namespace std;
const int MAX = 3;

typedef array<float, MAX> Rows;
typedef array<Rows, MAX> Matrix;

void read(Matrix& m){
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            cin >> m[i][j];
}

void show(Matrix m){
    cout << endl;
    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            cout << m[i][j] << " ";
        }
    cout << endl;
    }
    cout << endl;
}

int meanNeigh(Matrix m, int row, int col);
Matrix softear(Matrix m, Matrix n);
Matrix definite(Matrix m);
bool isNeigh(int row, int col, int i, int j);

int main(){
    Matrix m, n;
    read(m);
    read(n);


    Matrix soft = softear(m, n);
    cout << "ndvi is: ";
    show(soft);

    Matrix defSof = definite(soft);
    cout << "soft is: ";
    show(defSof);
}

Matrix softear(Matrix m, Matrix n){
    Matrix soft = {{}};
    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            soft[i][j] = (m[i][j] - n[i][j]) / (m[i][j] + n[i][j]);
        }
    }
    return soft;
}

int meanNeigh(Matrix m, int row, int col){
    int sum = 0, count = 0;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {   
            if(isNeigh(row, col, i, j)){
                sum += m[i][j];
                count++;
            } 
        }
    }
    return sum / count;
}

Matrix definite(Matrix m){
    Matrix def = {{}};
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            def[i][j] = meanNeigh(m, i, j);
        }
    }
    return def;
}

bool isNeigh(int row, int col, int i, int j){
    return (i != row || j != col) &&     // Not the same cell
           i >= 0 && j >= 0 &&           // Valid indices
           i < MAX && j < MAX &&         // Within matrix boundaries
           abs(i - row) <= 1 &&          // Within one row distance
           abs(j - col) <= 1;            // Within one column distance
}
