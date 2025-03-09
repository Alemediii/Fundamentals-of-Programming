#include <iostream>
#include <array>

using namespace std;
const int R = 2;
const int C = 3;

typedef array<int,C> TRow;
typedef array<TRow, R> TMatrix;
typedef array<TRow, R*2> TMatrixT;

void init(TMatrix& m) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
        {
            cin >> m[i][j];
        }   
    }
}

int mean(TMatrix m){
    int sum = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
        {
            sum += m[i][j];
        }   
    }
    return sum / (R*C);
}

void copyEvenRows(TMatrix m, TMatrixT& t){
    for (int i = 0; i < R; i++)
    {
        t[i * 2] = m[i];
    }
}

bool valid(int i, int j){
    return i >= 0 and i < 2*R and j >= 0 and j < 2*R;
}

int neighMean(int r, int c, TMatrixT t, int mean){
    int sum = 0, neigh = 0;
    for (int i = r - 1; i < r + 1; i++) {
        for (int j = c - 1; j < c + 1; j++)
        {
            if(valid(i, j) and not (i == r and j == c)){
                neigh++;
                if(t[i][j] == 0) sum += mean;
                else sum += t[i][j];
            }
        }   
    }
    return sum / neigh;
}

void calcOddRow(int r, TMatrixT& t, int mean){
    for (int i = 0; i < C; i++)
        t[r][i] = neighMean(r, i, t, mean);
}

void calcOddRows(TMatrixT& t, int mean){
    for (int i = 1; i < 2*i; i += 2)
        calcOddRow(i, t, mean);
}

void build(TMatrix m, TMatrixT& t){
    copyEvenRows(m, t);
    calcOddRows(t, mean(m));
}

void show(TMatrixT t){
    cout << "the matrix is: " << endl;
    for (int i = 0; i < 2*R; i++){
        for (int j = 0; j < C; j++){
           cout << t[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    TMatrix m;
    TMatrixT t = {{}};

    init(m);
    build(m, t);
    show(t);
}