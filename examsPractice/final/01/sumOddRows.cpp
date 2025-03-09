#include <iostream>
#include <array>

using namespace std;
const int MAX = 4;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;

void read(Matrix& m){
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            cin >> m[i][j];
}

void show(Matrix m){
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << m[i][j] << " "; 
        }
    cout << endl;
    }
}

bool odd(int value);
int highestOddSum(Matrix m);
int highestOdd(Matrix m, int row);
bool repeated(Matrix m, int row, int value);

int main(){
    Matrix m;
    read(m);
    show(m);

    int result = highestOddSum(m);
    cout << "the highest sum is: " << result; 
}

bool odd(int value){
    return value % 2 == 1;
}

bool repeated(Matrix m, int row, int value){
    int counter = 0;
    for (int i = 0; i < MAX; i++)
    {
        if(m[row][i] == value) counter++;
    }
    return counter < 2;
}

int highestOddSum(Matrix m){
    int sum = 0;
    for (int i = 0; i < MAX; i++)
    {
        if(not repeated(m, i, highestOdd(m, i)))
        sum += highestOdd(m, i); 
    }
    return sum;
}

int highestOdd(Matrix m, int row){
    int highest = 0;
    for (int i = 0; i < MAX; i++)
        if(odd(m[row][i]) and m[row][i] > highest) highest = m[row][i];    
    return highest;
}