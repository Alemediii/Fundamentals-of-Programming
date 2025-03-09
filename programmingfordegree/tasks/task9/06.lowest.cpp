#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

TVec readArr();
int maxInArray(TVec a, int value);

int main(){
    TVec a = readArr();
    int value = 0, lowest = maxInArray(a, value);

    cout << "the lowest value is: "<< lowest;
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
    int lowest = a[0];
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] < lowest or (a[i] < value and -1*a[i] < lowest)) lowest = a[i];
    }
    return lowest;
}