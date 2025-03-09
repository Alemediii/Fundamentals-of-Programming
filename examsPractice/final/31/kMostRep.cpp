#include <iostream>
#include <array>

using namespace std;
const int N = 3;

typedef array<int, N> Rows;
typedef array<Rows, N> Matrix;
typedef array<int, N*N> Numbers;

Matrix read();
int repetitions(Matrix m, int value);
bool isRepeated(Numbers numbers, int num);
void mostRepeated(Numbers& rep, Matrix m, int k, int kk);

namespace matrix
{
    void show(Matrix m){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}
} 
namespace repeated{
    void show(Matrix m, int value){
        cout << "the values are: ";
        int kk;
        Numbers n;
        mostRepeated(n, m, value, kk);
    for (int i = 0; i < value; i++)
        cout << n[i] << " ";
}
}

int main(){
    Matrix initial;
    initial = read();

    repeated::show(initial, 5);
}

void mostRepeated(Numbers& rep, Matrix m, int k, int kk){
    kk = 0;
    bool stillAny = true;
    while(kk < k and stillAny){
        int maxCount = -1;
        int xmaxcnt;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int x = m[i][j];
                if(not isRepeated(rep, x) and repetitions(m, x) > maxCount){
                    maxCount = repetitions(m, x);
                    xmaxcnt = x;
                }
            }
        }
        stillAny = maxCount != -1;
        if(stillAny) rep[kk++] = xmaxcnt;
    }
}

Matrix read(){
    Matrix m;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> m[i][j];
    return m;
}

int repetitions(Matrix m, int value){
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(value == m[i][j]) counter++;
        }
    }
    return counter;
}

bool isRepeated(Numbers numbers, int num){
    int i = 0;
    while(i < int(numbers.size()) and numbers[i] != num){
        i++;
    }
    return i < int(numbers.size());
}