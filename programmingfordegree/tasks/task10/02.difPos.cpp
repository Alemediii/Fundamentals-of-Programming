#include <iostream>
#include <array>

using namespace std;

typedef array<int, 5> TVec;

int lastPos(TVec v, int num);
int main(){
    int pos = lastPos({1, 5, 3, 4, 5}, 5);
    if(pos == -1) cout << "the number is not in the array";
    else cout << "the diff is: " << pos; 
}

int lastPos(TVec v, int num){
    int pos1 = 0, pos2 = 0, dif = -1;
    for (int i = 0; i < v.size(); i++){
        if(v[i] == num){
            if(i < pos1) pos1 = i;
            if(i > pos2) pos2 = i;
            dif = pos2 - pos1;
        }
    }
    return dif;
}