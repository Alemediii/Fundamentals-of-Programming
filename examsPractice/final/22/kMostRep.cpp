#include <iostream>
#include <array>

using namespace std;
const int MAX = 4;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;
typedef array<int, MAX * MAX> Repeated;

struct TRepeated{
    Repeated nums;
    int nEl = 0;
};

bool isRepeated(TRepeated r, int num){
    int i = 0;
    while(i < r.nEl and r.nums[i] != num){
        i++;
    }
    return i < r.nEl;
}

int repetitions(Matrix m, int value){
    int count = 0;
    for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++){
        if(m[i][j] == value) count++;
    }
    }
    return count;
}

TRepeated kmost(Matrix m, int k){
    TRepeated r = {};
    int highestCount = 0, count;
    bool stillAny = true;
    while(count < k and stillAny){
        highestCount = -1;
        int xmaxcnt;
        for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            if(not isRepeated(r, m[i][j]) and repetitions(m, m[i][j]) > highestCount){
                highestCount = repetitions(m, m[i][j]);
                xmaxcnt = m[i][j];
            }
        }
    }
    stillAny = highestCount != -1;
    r.nums[r.nEl++] = xmaxcnt;     
    }
    return r;
}

void show(Matrix m, int value);
Matrix read();

int main(){
    Matrix m = read();
    show(m, 5);
}

void show(Matrix m, int value){
    TRepeated r = kmost(m, value);
    cout << value << " most repeated are: ";
    for (int i = 0; i < value; i++)
    {
        cout << r.nums[i] << " ";
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