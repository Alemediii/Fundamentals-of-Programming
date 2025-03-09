#include <iostream>
#include <array>

using namespace std;

typedef array<int, 5> TVec;

int lastPos(TVec v);
bool runArray(TVec v, int num);
int main(){
    int pos = lastPos({1, 5, 3, 4, 5});
    if(pos == -1) cout << "the number is not in the array";
    else cout << "the first repetition is in pos: " << pos; 
}

int lastPos(TVec v){
    for (int i = 0; i < v.size(); i++)
        if(runArray(v, i)) return i;
}

bool runArray(TVec v, int num){
    bool success = false;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == num) success = true;
    }
    return success;
    
}