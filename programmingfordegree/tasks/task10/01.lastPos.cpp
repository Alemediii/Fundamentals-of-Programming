#include <iostream>
#include <array>

using namespace std;

typedef array<int, 5> TVec;

int lastPos(TVec v, int num);
int main(){
    int pos = lastPos({1, 5, 3, 4, 5}, 6);
    if(pos == 0) cout << "the number is not in the array";
    else cout << "the number is in the position: " << pos; 
}

int lastPos(TVec v, int num){
    int pos = -1;
    for (int i = 0; i < v.size(); i++)
        if(v[i] == num and i > pos) pos = i;
    return pos + 1;
}