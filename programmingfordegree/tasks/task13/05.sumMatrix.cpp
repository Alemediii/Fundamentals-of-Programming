//my original programme does not include the cstdint, I did some 
//research, because at executing the programme at one time, the two matrices 
//had the same values, so, in order to do these different to each other
//I did it that way, but if we talk about the main exercise, I know how to do it

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <cstdint> // For uintptr_t

using namespace std;

const int NRows = 3;
const int NCols = 3;
const int RandMax = 9;

typedef array<int, NRows> TRows;
typedef array<TRows, NCols> TMatrix;

void printMatrix(TMatrix m);
void fillMatrix(TMatrix& m);
TMatrix sumMatrix(TMatrix a, TMatrix b);

int main(){
    TMatrix m, n;
    fillMatrix(m);
    fillMatrix(n);

    printMatrix(m);
    printMatrix(n);
    printMatrix(sumMatrix(m, n));
}

void fillMatrix(TMatrix& m){
    // Get the address of the matrix 'm' and cast it to uintptr_t for better handling
    uintptr_t address = reinterpret_cast<uintptr_t>(&m);
    srand(static_cast<unsigned int>(time(0)) + static_cast<unsigned int>(address));
    
    for (int i = 0; i < NRows; i++)
        for (int j = 0; j < NCols; j++)
            m[i][j] = rand() % (RandMax - 0 + 1);
}


void printMatrix(TMatrix m){
    for (int i = 0; i < NRows; i++){
        for (int j = 0; j < NCols; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

TMatrix sumMatrix(TMatrix a, TMatrix b){
    TMatrix sum;
    for (int i = 0; i < NRows; i++)
        for (int j = 0; j < NCols; j++)
            sum[i][j] = a[i][j] + b[i][j];
    return sum;
}