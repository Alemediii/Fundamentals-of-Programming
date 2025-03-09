#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

TVec readArr();
void printArr(TVec a);

int main(){
    TVec a = readArr();
    printArr(a);
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

void printArr(TVec v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}