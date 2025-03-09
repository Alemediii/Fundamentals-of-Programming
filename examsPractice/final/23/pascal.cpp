#include <iostream>
#include <array>

using namespace std;
const int MAX = 10;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;

void show(Matrix m);
void pascal(Matrix& m);

int main(){
    Matrix m;
    pascal(m);
    show(m);
}

void pascal(Matrix& m){
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            m[i][j] = 0;
        }
    }
}

void show(Matrix m){
    int val = MAX;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}