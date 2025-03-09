#include <iostream>
#include <array>

const int r = 2;
const int c = 3;
using namespace std;

typedef array<int, r> rows;
typedef array<rows, c> matrix;

matrix read();
void show(matrix m);
int mean(matrix m);
void build(matrix m, matrix& n);

int main(){
    matrix m = read(), n;
    build(m, n);
    show(n);
}

matrix read(){
    matrix m;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
    return m;
}

void show(matrix m){
    for (int i = 0; i < r * 2; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int mean(matrix m){
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += m[i][j];
        }
    }
    return sum / (r*c);
}

void build(matrix m, matrix& n){
    int meanOfMatrix = mean(m);
    int row, next;
    for (int i = 0; i < r; i++)
    {
        row = 2*i;
        next = row + 1;   
        for (int j = 0; j < c; j++)
        {
            n[row][j] = m[i][j];
            n[next][j] = 0;
        }
    }
    
}