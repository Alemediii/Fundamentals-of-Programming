#include <iostream>
#include <array>

using namespace std;
const int SIZE = 3;

typedef array<int, SIZE> Rows;
typedef array<Rows, SIZE> Matrix;

struct Peaks{
    int num;
    int nCol;
    int nRow;
};

typedef array<Peaks, SIZE*SIZE> TPeaks;

struct TData{
    Matrix m;
    TPeaks peaks;
    int nEl = 0;
};


bool isNeigh(int row, int i, int col, int j) {
    return abs(row - i) <= 1 and abs(col - j) <= 1 and (row != i or col != j);
}

bool isDominator(Matrix m, int row, int col){
    bool higherThanAll = true;
    for (int i = 0; i < SIZE and higherThanAll; i++)
    {
        for (int j = 0; j < SIZE and higherThanAll; j++)
        {
            if(isNeigh(row, i, col, j) and m[row][col] <= m[i][j]) higherThanAll = false;    
        }
    }
    return higherThanAll;
}

void getDominators(TData& d){
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if(isDominator(d.m, i, j)){
                d.peaks[d.nEl].num = d.m[i][j];
                d.peaks[d.nEl].nRow = i;
                d.peaks[d.nEl].nCol = j;
                d.nEl++;
            }
        } 
    }
}

void show(TData d);
void read(TData& d);

int main(){
    TData d;
    read(d);
    getDominators(d);
    show(d);
}

void read(TData& d){
    cout << "define the matrix: ";
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cin >> d.m[i][j];
        }
    }
}

void show(TData d){
    cout << "peak in: ";
    for (int i = 0; i < d.nEl; i++)
    {
        cout << d.peaks[i].num << ", in row " << d.peaks[i].nRow 
        << " in column "<< d.peaks[i].nCol;
        cout << endl;
    }
}