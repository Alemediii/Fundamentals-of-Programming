#include <iostream>
#include <array>

using namespace std;
typedef array<int, 6> TVec;

int firstPeak(TVec v);

int main(){
    int pos = firstPeak({1, 5, 3, 4, 5});
    if(pos == -1) cout << "there is no peak";
    else cout << "the peak is in position " << pos;
}

int firstPeak(TVec v){
    int res = -1; bool succ = false;
    for (int i = 0; i < v.size() and not succ; i++)
    {
        if(i == 0 and v[i] > v[i + 1]){
            res = i; //first case
            succ = true;
        }
        else if(i == v.size() and v[i] > v[i - 1]){
            res = i; //last case
            succ = true;
        }
        else if(v[i] > v[i+1] and v[i] > v[i-1]){
            res = i; //mid case
            succ = true;
        } 
    }
    return res;
}