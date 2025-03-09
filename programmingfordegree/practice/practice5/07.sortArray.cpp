#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 5;
typedef array<int,N> TVec;

void randArr(TVec& a, int min, int max);
void bubbleSort(TVec& a);
void swap(int& a, int& b);
void printArr(TVec a);

int main(){
    srand(time(NULL));
   
    TVec a;
    int min = 1, max = 100;
    randArr(a, min, max);

    cout << "array before bubblesort: " << endl;
    printArr(a);

    cout << endl;
    bubbleSort(a);

    cout << "array after bubblesort: " << endl;
    printArr(a);
}

void randArr(TVec& a, int min, int max){
    for (int i = 0; i < a.size(); i++)
    a[i] = rand() % (max-min) + min ;
}

void swap(int& a, int& b){
    int t=a;
    a=b; b=t;
}

void bubbleSort(TVec& a){
    for (int top = a.size()-1; top >= 1; top--)
    for (int i = 0; i < top; i++)
    if ( a[i] > a[i+1]) swap(a[i], a[i+1]); 
}

void printArr(TVec a){
    for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
}