#include <iostream>
#include <array>

using namespace std;
const int TAM = 10;

typedef array<int, TAM> Numbers;

void read(Numbers& n);
bool isOrdered(Numbers n);
void test(Numbers n);

int main(){
    Numbers n, m;
    test(n); test(m);
}

void read(Numbers& n){
    for (int i = 0; i < TAM; i++)
    {
        cin >> n[i];
    }
}

bool isOrdered(Numbers n){
    bool success = true;
    for (int i = 1; i < TAM; i++)
    {
        if (n[i - 1] > n[i])
        success = false;
    }
    return success;
}

void test(Numbers n){
    read(n);
    
    if(isOrdered(n)) cout << "the array is ordered" << endl;
    else cout << "the array is not ordered" << endl;

}