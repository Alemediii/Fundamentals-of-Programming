#include <iostream>
#include <array>

using namespace std;
const int SIZE_ARR = 11;
const int SIZE_PERM = 4;

typedef array<int, SIZE_ARR> Array;
typedef array<int, SIZE_PERM> Perm;

template <size_t size>
void read(array<int, size>& numbers){
    cout << endl << "define: ";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
}

bool isTheNumber(Array a, int num, int begin);
unsigned perms(Array a, Perm p);

int main(){
    Array a; Perm p;
    cout << "define array: "; read(a);
    cout << "define perm: "; read(p);  

    cout << endl;
    int result = perms(a, p);
    cout << "there is: " << result << " permutations";
}

bool isTheNumber(Array a, int num, int begin){
    int i = 0;
    while(i < SIZE_PERM and a[begin] != num){
        i++;
        begin++;
    }
    return i < 4;
}

unsigned perms(Array a, Perm p){
    int counter = 0;
    for (int i = 0; i < SIZE_ARR - SIZE_PERM + 1; i++)
    {
        bool success = true;
        for (int j = 0; j < SIZE_PERM and success; j++)
        {
            if(not isTheNumber(a, p[j], i)) success = false;
        }
        if(success) counter++;    
    }
    return counter;
}