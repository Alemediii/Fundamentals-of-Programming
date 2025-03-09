#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 5;
typedef array<float,N> TVec;

void randArr(TVec& a, int min, int max);
void printArr(TVec v);
float meanInArray(TVec a);

int main(){
    srand(time(NULL));
    TVec a;
    int min = 1, max = 100;
    randArr(a, min, max);
    printArr(a);
    cout << endl;


    float mean = meanInArray(a);
    cout << "the mean in the array is: " << mean;
}

void randArr(TVec& a, int min, int max){
    for (int i = 0; i < a.size(); i++)
    a[i] = rand() % (max-min) + min ;
}

void printArr(TVec v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

float meanInArray(TVec a){
    float sum = 0, counter = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        ++counter;
    }
    return sum / counter;
}