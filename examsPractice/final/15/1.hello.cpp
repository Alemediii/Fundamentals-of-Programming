#include <iostream>
#include <array>
using namespace std;

typedef array<int, 10> cajones;

int main(){
    cajones ab;

    int i = 0;
    while(ab[i] != 1 and i < ab.size()){
        i++;
    }

    cout << i;
}