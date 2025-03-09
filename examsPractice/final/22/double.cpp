#include <iostream>
#include <array>

using namespace std;
const int MAX = 3;

typedef array<unsigned, MAX> Rows;
typedef array<Rows, MAX> Matrix;

bool isDouble(Matrix m){
    bool meets = true;
        //first condition
        //with this, we can check whenever the numbers of the matrix are
        //between 0 and 100
        for (int i = 0; i < MAX and meets; i++)
        {
            for (int j = 0; j < MAX and meets; j++)
            {
                if(m[i][j] > 100 or m[i][j] < 0) meets = false;
            }
        }

        for (int i = 0; i < MAX and meets; i++)
        {
            unsigned sumRow = 0;
            unsigned sumCol = 0;
            for (int j = 0; j < MAX; j++)
            {
                sumRow += m[i][j]; 
                sumCol += m[j][i]; 
            }
            if(sumRow != 100 or sumCol != 100) meets = false;
        }
        //these bucles check if the sum of the rows is 100, in case it is not
        //the bool meets is false, in case to keep it at 100, the sumRow is again initialized
        //to 100
        //the sum of the cols is limited by the same type of bucle that rules the rows        

        //the whole bucle is controlled by the condition meets, in case
        //that in any case the matrix does not meet a single criteria, 
        //it stops in order to make it more efficiente 
    return meets;
}

void show(Matrix m);
Matrix read();

int main(){
    Matrix m = read();
    show(m);

    if(isDouble(m)) cout << "the matrix is double stoic";
    else cout << "the matrix is not double stoic";
}

void show(Matrix m){
    cout << endl;
    cout << "matrix is: " << endl;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << m[i][j] << " ";
        }
    cout << endl;
    }
}

Matrix read(){
    Matrix m;
    cout << "define mat: " << endl;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cin >> m[i][j];
        }
    }
    return m;
}