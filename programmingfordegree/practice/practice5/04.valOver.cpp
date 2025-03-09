#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

TVec readArr();
int maxInArray(TVec a, int value);

int main(){
    TVec a = readArr();
    int value = 5, counter = maxInArray(a, value);

    cout << "the values that go over " << value << " is: " << counter;
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
    int counter = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] > value) ++counter;
    }
    return counter;
}