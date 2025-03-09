#include <iostream>
#include <array>

using namespace std;
const int TAM = 10;

typedef array<unsigned, TAM> Numbers;

struct TNumbers{
    Numbers n;
    int nEl;
};

void read(TNumbers& n);
bool isRepeated(TNumbers n, int num);
void show(TNumbers n, int value);
void showTrios(TNumbers m, TNumbers n, TNumbers p);

int main(){
    TNumbers n, m, p;
    read(n); read(m); read(p);
    show(n, 1); show(m, 2); show(p, 3);
    showTrios(m, n, p);
}

void read(TNumbers& n){
    unsigned num;
    n.nEl = 0;
    cin >> num;
    while(num != 0){
        if(not isRepeated(n, num)){
        n.n[n.nEl] = num;
        n.nEl++;
        }
        cin >> num;
    }
}

bool isRepeated(TNumbers n, int num){
    int i = 0;
    while(i < n.nEl and n.n[i] != num){
        i++;
    }
    return i < n.nEl;
}

void show(TNumbers n, int value){
    cout << "list " << value << ": ";
    for (int i = 0; i < n.nEl; i++)
    {
        cout << n.n[i] << " ";
    }
    cout << endl;
}

void showTrios(TNumbers m, TNumbers n, TNumbers p){
    int counter = 0;
    cout << endl;
    for (int i = 0; i < m.nEl; i++)
    {
        for (int j = 0; j < n.nEl; j++)
        {
            for (int k = 0; k < p.nEl; k++)
            {
                if(m.n[i] + n.n[j] == p.n[k]){
                cout << "account " << counter;
                cout << i << " " << j << " " << k;
                counter++;
                } 
            }
        }
    }
}