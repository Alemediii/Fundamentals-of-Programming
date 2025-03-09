#include <iostream>
#include <array>

using namespace std;
const int SIZE = 10;

typedef array<int, SIZE> Numbers;

Numbers read();
bool isOrdered(Numbers n);

int main(){
    Numbers n = read();
    cout << isOrdered(n);
}  

Numbers read(){
    Numbers n;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> n[i];
    }
    return n;
}

bool isOrdered(Numbers n){
    cout << endl;
    bool success = true;
    for (int i = 1; i < SIZE and success; i++)
        if(n[i - 1] > n[i]) success = false;
    return success;
}