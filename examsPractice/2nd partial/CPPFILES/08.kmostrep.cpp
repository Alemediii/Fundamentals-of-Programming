#include <iostream>
#include <array>

using namespace std;
const int MAX = 3;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;
typedef array<int, MAX*MAX> Data;

void fillNumbers(Matrix& n);
void showNumbers(Matrix n);
Data findKGreat(Matrix n);

int main(){
    
}


void fillNumbers(Matrix& n){
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            cin >> n[i][j];
}

void showNumbers(Matrix n, int size){
    for (int i = 0; i < MAX; j++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << n[i][j] << " ";
        }
    cout << endl;
    }
}

Data findKGreat(Matrix n){
    Data greatests = {};
    bool Matrix = {false};
    for (int i = 0; i < MAX; i++)
    {
        int counter = 0;
        for (int j = 0; j < MAX; j++)
        {
            for (int k = 0; k < MAX; k++)
            {
                if(n[i][j] == n[j][k] and m[i][j]){
                    counter++;
                }
            }
        }
        
    }
    
    return greatests;
}