#include <iostream>
#include <array>

using namespace std;

const int MAX = 10;
typedef array<int, MAX> Numbers;

void readArray(Numbers& n);
bool isOrderedArray(Numbers n);

int main(){
    Numbers n;
    readArray(n);
    if(isOrderedArray(n)) cout << "ordered";
    else cout << "not ordered";
}

void readArray(Numbers& n){
    int i = 0, num;
    cout << "define num: ";
    for (int i = 0; i < MAX; i++)
        cin >> n[i];
}

bool isOrderedArray(Numbers n){
    bool isOrdered = true;
    for (int i = 1; i < int(n.size()) and isOrdered; i++)
    {
        if(n[i - 1] > n[i]) isOrdered = false;
    }
    return isOrdered;
}