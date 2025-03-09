#include <iostream>
#include <array>

using namespace std;
const int N = 3;

typedef array<unsigned, N> rows;
typedef array<rows, N> matrix;

void fillNumbers(matrix& n);
void showNumbers(matrix n);
bool isDouble(matrix m);

int main(){
    matrix m;
    fillNumbers(m);
    showNumbers(m);
    if(isDouble(m)) cout << "meets";
    else cout << "does not";
}

void fillNumbers(matrix& n){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> n[i][j];
}

void showNumbers(matrix n){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << n[i][j] << " ";
        }
    cout << endl;
    }
}

bool isDouble(matrix m){
    //first condition
    bool success = true;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if(m[i][j] < 0 or m[i][j] > 100) success = false;


    //second condition
    int sumrow = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
                sumrow += m[i][j];
        }
        if(sumrow != 100) success = false;
        else sumrow = 0;
    }

    //third condition
    int sumcol = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
                sumcol += m[j][i];
        }
        if(sumcol != 100) success = false;
        else sumcol = 0;
    }       
    return success;
}