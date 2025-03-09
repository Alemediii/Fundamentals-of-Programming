#include <iostream>
#include <array>

using namespace std;
const int MAX = 9;

typedef array<int, MAX> Numbers;

void read(Numbers& m){
    cout << "the array is: " << endl; 
    for (int i = 0; i < MAX; i++)
    {
        cin >> m[i];
    }
}

int manyOrdered(Numbers a);
bool isOrdered(int value, int value2);

int main(){
    Numbers a;
    read(a);

    int result = manyOrdered(a);
    cout << "the highest serie is: " << result;
}

int manyOrdered(Numbers a){
    int highestCounter = 0;
    int counter = 1;
    for (int i = 1; i < MAX; i++)
    {
        if(isOrdered(a[i - 1], a[i])) counter++;
        else{
            if(counter > highestCounter) highestCounter = counter;
            counter = 1;
        } 
    }
    return highestCounter;
}

bool isOrdered(int value, int value2){
    return value < value2;
}