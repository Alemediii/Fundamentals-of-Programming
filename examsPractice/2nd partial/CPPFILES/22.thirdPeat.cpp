#include <iostream>
#include <array>

using namespace std;
const int N = 10;

typedef array<int, N> Numbers;

struct TData{
    Numbers n;
    int size;
};

void read(TData& n);
bool isRepeated(TData n, int num);
void show (TData n);

int main(){
    TData n;
    read(n);
    // Numbers m = read();
    // Numbers o = read();

    show(n); cout << endl;
    // show(m); cout << endl;
    // show(o); cout << endl;
}


void read(TData& n){
    int num;
    n.size = 0;
    cout << "define the number: "; cin >> num;
    while(n.size < N and not isRepeated(n, num)){
        n.n[n.size] = num;
        n.size++;
        cin >> num;
    }
}

bool isRepeated(TData n, int num){
    int i = 0;
    while(i < n.size and n.n[i] != num) i++;
    return i < n.size;
}

void show(TData n){
    for (int i = 0; i < n.size; i++)
    {
        cout << n.n[i] << " ";
    }
}