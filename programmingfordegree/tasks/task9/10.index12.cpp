#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

TVec readArr();
int maxInArray(TVec a);

int main(){
    TVec a = readArr();
    int counter = maxInArray(a);

    cout << "the times that 1 2 appears in a serie is: " << counter;
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

int maxInArray(TVec a){
    int counter = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == 1 and a[i+1] == 2) ++counter;
    }
    return counter;
}