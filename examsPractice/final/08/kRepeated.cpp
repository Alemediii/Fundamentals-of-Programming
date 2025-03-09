#include <iostream>
#include <array>

using namespace std;
const int MAX = 4;

typedef array<int, MAX> Rows;
typedef array<Rows, MAX> Matrix;
typedef array<int, MAX*MAX> Repeated;

struct TData{
    Repeated rep;
    Matrix mat;
    int nEl = 0;
};

void read(TData& d){
    cout << "define matrix: " << endl;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cin >> d.mat[i][j];
        }
    }
}

void show(TData d){
    cout << endl << "the " << d.nEl << " most repeated are: ";
    for (int i = 0; i < d.nEl; i++)
    {
        cout << d.rep[i] << ", ";
    }
}

void getRepeated(TData& d, int k);
bool isRepeated(TData d, int num);
int getRepetitions(TData d, int value);

int main(){
    TData d;
    read(d);

    getRepeated(d, 4);
    show(d);
}

void getRepeated(TData& d, int k) {
    int highestRep = 0;
    int highestCount = 0;
    bool any = true;
    while(d.nEl < k and any){
    highestCount = -1;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (not isRepeated(d, d.mat[i][j]) and
                getRepetitions(d, d.mat[i][j]) > highestCount) {
                highestCount = getRepetitions(d, d.mat[i][j]);
                highestRep = d.mat[i][j];
            }
        }
    d.rep[d.nEl] = highestRep;
    d.nEl++;
    any = highestCount == -1;
    }
    }
}


int getRepetitions(TData d, int value){
    int counter = 0;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if(d.mat[i][j] == value) counter++;
        }
    }
    return counter;
}

bool isRepeated(TData d, int num){
    int i = 0;
    while(i < d.nEl and d.rep[i] != num){
        i++;
    }
    return i < d.nEl;
}