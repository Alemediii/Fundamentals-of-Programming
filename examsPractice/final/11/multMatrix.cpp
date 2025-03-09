#include <iostream>
#include <array>

using namespace std;
const int MAX = 8;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;

struct TMatrix{
    Matrix m;
    int nRow, nCol;
};

TMatrix read();
void show(TMatrix m);
bool valid(int value);
void readRC(int& value, int& value2); //stoopid stuff
TMatrix multipl(TMatrix m, TMatrix n);

int main(){
    TMatrix m = read();
    TMatrix n = read();
    TMatrix result = multipl(m, n);
    show(result);
}

TMatrix read(){
    TMatrix m;
    readRC(m.nCol, m.nRow);
    for (int i = 0; i < m.nRow; i++)
    {
        for (int j = 0; j < m.nCol; j++)
        {
            cin >> m.m[i][j];
        }
    }
    return m;
}

bool valid(int value){
    return value <= MAX and value > 0;
}

void readRC(int& value, int& value2){
    cout << "define rows and cols: " << endl;
    cin >> value >> value2;
    while(not valid(value) or not valid(value2)){
        cout << "wrong data, redefine R and C: " << endl; 
        cin >> value >> value2;
    }
}

void show(TMatrix m){
    cout << endl;
    for (int i = 0; i < m.nRow; i++)
    {
        for (int j = 0; j < m.nCol; j++)
        {
            cout << m.m[i][j] << "  ";
        }
        cout << endl;
    } 
}

TMatrix multipl(TMatrix m, TMatrix n){
    TMatrix multiplication {{}};
    bool validToMultiply = m.nCol == n.nRow; // Check if matrices can be multiplied
    multiplication.nCol = n.nCol;
    multiplication.nRow = m.nRow;
    if(validToMultiply){
        for (int i = 0; i < multiplication.nRow; i++) {
            for (int j = 0; j < multiplication.nCol; j++) {
                for (int k = 0; k < m.nCol; k++) { // Corrected loop bounds to m.nCol
                    multiplication.m[i][j] += m.m[i][k] * n.m[k][j];  
                }
            }
        }
    }
    return multiplication;
}