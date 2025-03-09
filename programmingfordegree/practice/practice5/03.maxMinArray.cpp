#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

TVec readArr();
void maxInArray(TVec a, int& highest, int& lowest);

int main(){
    int highest, lowest;
    TVec a = readArr();
    maxInArray(a, highest, lowest);

    cout << "the highest in the array is: " << highest;
    cout << endl;
    cout << "the lowest in the array is: " << lowest;
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

void maxInArray(TVec a, int& highest, int& lowest){
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] > highest) highest = a[i];
        if(a[i] < lowest) lowest = a[i];
    }
}