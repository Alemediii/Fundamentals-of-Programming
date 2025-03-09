#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

TVec readArr();
int maxInArray(TVec a, int value);

int main(){
    TVec a = readArr();
    int value = 5, pos = maxInArray(a, value);

    if(pos == -1) cout << "the number is not in the array";
    else cout << "the pos of the pos in value " << value << " is: " << pos;
}


TVec readArr(){
    TVec v;
    cout << "define vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    return v;
}

int maxInArray(TVec a, int value){
    int pos = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == value) pos = i;
    }
    return pos + 1;
}