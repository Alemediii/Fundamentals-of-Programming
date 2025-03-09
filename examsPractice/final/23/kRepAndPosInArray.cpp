#include <iostream>
#include <array>

using namespace std;
const int MAX_NUM = 20;

typedef array<int, MAX_NUM> Positions;
struct TNumbers{
    int num;
    Positions posit;
    int nEl = 0;
};

typedef array<TNumbers, MAX_NUM> Data;
struct TData{
    Data d;
    int ocup = 0;
};

bool isRepeated(TData d, int num){
    int i = 0;
    while(i < d.ocup and d.d[i].num != num){
        i++;
    }
    return i < d.ocup;
}

int position(TData d, int num){
    int i = 0;
    while(i < d.ocup and d.d[i].num != num){
        i++;
    }
    return i;
}

void show(TData d, int M);

int main(){
    TData d;
    int num, count = 1;
    cout << "define num: "; 
    cin >> num;
    while(num != 0){
        if(not isRepeated(d, num)){
            d.d[d.ocup].num = num;
            d.ocup++;
        }
        
        int pos = position(d, num);
        if(pos < d.ocup){
        d.d[pos].posit[d.d[pos].nEl] = count;
        d.d[pos].nEl++;
        }
        cin >> num;
        count++;
    }

    show(d, 4);
}

void show(TData d, int M) {
    cout << "k greatest: " << endl;

    // Sort the array in descending order based on num
    for (int i = 0; i < d.ocup - 1; i++) {
        for (int j = 0; j < d.ocup - i - 1; j++) {
            if (d.d[j].num < d.d[j + 1].num) {
                swap(d.d[j], d.d[j + 1]);
            }
        }
    }

    // Print the top M values
    for (int i = 0; i < min(M, d.ocup); i++) {
        cout << d.d[i].num << ": ";
        for (int j = 0; j < d.d[i].nEl; j++) {
            cout << d.d[i].posit[j] << " ";
        }
        cout << endl;
    }
}