#include <iostream>
#include <array>

using namespace std;
const int MAX_NUMS = 15;
const int MAX_REP = 5;
const int MAX = 12;

typedef array<int, MAX_NUMS> Numbers;
typedef array<int, MAX_REP> Position;

struct TNumbers{
    int num;
    Position p;
    int nEl = 0;
};

typedef array<TNumbers, MAX_NUMS> Definition;

struct TData{
    Definition data;
    int nmE = 0;
};

bool isTheNumber(TData data, int num){
    int i = 0;
    while(i < data.nmE and data.data[i].num != num){
        i++;
    }
    return i < data.nmE;
}

void show(TData data){
    for (int i = 0; i < data.nmE; i++)
    {
        cout << data.data[i].num << ": ";
        for (int j = 0; j < data.data[i].nEl; j++)
        {
            cout << data.data[i].p[j] << " ";
        }
        cout << endl;
    }
}

Position pos(TData d);
int readValue();

int main(){
    TData d;
    int value = readValue();
    int num;
    int count = 0;
    cin >> num;
    while(num != 0){
        if(not isTheNumber(d, num)){
            d.data[d.nmE].num = num;
            d.nmE++;
        } else {
            d.data[d.nmE].p[count++] = count;
        }
        cin >> num;
    }

    show(d);
}

int readValue(){
    int num;
    cout << "define the number 0 <= x <= " << MAX << ": ";
    cin >> num;
    while(num > MAX or num < 0){
        cout << "wrong definition, try again: ";
        cin >> num;
    }
    return num;
}
