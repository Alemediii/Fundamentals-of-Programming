#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

TVec readArr();
int maxInArray(TVec a);

int main(){
    TVec a = readArr();
    int high = maxInArray(a);

    cout << "the highest in the array is: " << high;
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
    int highest = a[0];
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] > highest) highest = a[i];
    }
    return highest;
}