#include <iostream>
#include <array>

using namespace std;

const int N = 5;
typedef array<float,N> THeights;

void readArr(THeights& a);
float meanInArray(THeights a);

int main(){
    THeights a;
    readArr(a);
    float mean = meanInArray(a);
    cout << "the mean in the array is: " << mean;
}

void readArr(THeights& v){
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
}

float meanInArray(THeights a){
    float sum = 0, counter = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        ++counter;
    }
    return sum / counter;
}