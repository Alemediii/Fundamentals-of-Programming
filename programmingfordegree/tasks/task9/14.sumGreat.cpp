#include <iostream>
#include <array>
using namespace std;

typedef array<int, 5> TVec;

void readArr(TVec& v);
int difIntegers(TVec v, int a, int b);

int main(){
    int n, greatA, greatB;
    TVec v;

    int result = difIntegers(v, greatA, greatB);
    cout << "the difference is: " << result; 
}


void readArr(TVec& v){
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
}

int difIntegers(TVec v, int a, int b){
    int greatA, greatB;
    greatA = greatB = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > greatA){
            greatB = greatA;
            greatA = v[i];
        }
    }
    return greatA + greatB;
}