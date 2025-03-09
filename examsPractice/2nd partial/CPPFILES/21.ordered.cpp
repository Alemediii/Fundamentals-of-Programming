#include <iostream>
#include <array>

using namespace std;
const int N = 10;

typedef array<int, N> Numbers;

Numbers read();
bool isOrdered(Numbers n);

int main(){
    Numbers n = read();
    bool works = isOrdered(n);
    if(works) cout << "it is ordered";
    else cout << "it is not ordered";
}

Numbers read(){
    Numbers n;
    for (int i = 0; i < N; i++)
    cin >> n[i];
    return n;
}

bool isOrdered(Numbers n){
    bool suc = true;
    for (int i = 0; i < N - 1; i++)
        if(n[i] > n[i + 1]) suc = false;
    return suc;
}