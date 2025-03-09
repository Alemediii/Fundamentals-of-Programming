#include <iostream>
#include <cmath>
#include <array>

using namespace std;

const int N = 5;
typedef array<float,N> TVec;

void readArr(TVec& a);
float meanInArray(TVec a, TVec b);

int main(){
    TVec a, b;
    readArr(a);
    readArr(b);
    float prod = meanInArray(a, b);
    cout << "the distance in the array is: " << prod;
}

void readArr(TVec& v){
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
}

float meanInArray(TVec a, TVec b){
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = pow((a[i] - b[i]), 2);
    }
    return sqrt(sum);
}