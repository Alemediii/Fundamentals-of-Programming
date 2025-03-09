#include <iostream>
#include <array>

using namespace std;
const int MAX = 4;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;

void read(Matrix& m){
    cout << "the matrix is: " << endl; 
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cin >> m[i][j];
        }
    }
}

int highestInRow(Matrix m, int row);
bool isOdd(int value);
int sumHighest(Matrix m);

int main(){
    Matrix m;
    read(m);

    int result = sumHighest(m);
    cout << "the sum of the highest odds is " << result;
}

int highestInRow(Matrix m, int row){
    int highest = 0;
    for (int i = 0; i < MAX; i++)
    {
        if(m[row][i] > highest and isOdd(m[row][i])) 
        highest = m[row][i];
    }
    return highest;
}

bool isOdd(int value){
    return value % 2 == 1;
}

int sumHighest(Matrix m){
    int sum = 0;
    for (int i = 0; i < MAX; i++)
    {
        sum += highestInRow(m, i);
    }
    return sum;
}