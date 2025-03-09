#include <iostream>
#include <array>

using namespace std;
const int MAX = 4;

typedef array<int, MAX> Rows; 
typedef array<Rows, MAX> Matrix; 

struct Values{
    int value;
    int nRow;
    int nCol;
};

typedef array<Values, MAX * MAX> Data; 
struct TData{
    Data d;
    int nEl = 0;
};

Matrix read(){
    Matrix m;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cin >> m[i][j];
        }
    }
    return m;
}

void showMatrix(Matrix m){
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << m[i][j] << " ";
        }
    cout << endl;
    }
    cout << endl;
}

void showArray(TData d){
    for (int i = 0; i < d.nEl; i++)
    {
        cout << d.d[i].value << " in row " << d.d[i].nRow
        << " in col " << d.d[i].nCol;
        cout << endl;
    }
    cout << endl;
}

void finder(Matrix m, TData& d, int value);

int main(){
    TData d;
    Matrix m = read();
    finder(m, d, 3);
    showMatrix(m);
    showArray(d);
}

void finder(Matrix m, TData& d, int value){
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if(m[i][j] == value){
                d.d[d.nEl].value = value;
                d.d[d.nEl].nRow = i + 1;
                d.d[d.nEl].nCol = j + 1;
                d.nEl++;
            }
        }
    }
}