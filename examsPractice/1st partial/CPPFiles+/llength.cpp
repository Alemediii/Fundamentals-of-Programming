#include <iostream>
#include <array>

using namespace std;

const int N = 10;
typedef array<int, N> Numbers;

void readElements(Numbers& n);
// bool isSorted(int& highest, int n);
int compare(Numbers n);

int main(){
    Numbers n;
    readElements(n);
    cout << "the highest counter is: " << compare(n);
}

void readElements(Numbers& n){
    for (int i = 0; i < N; i++)
    {
        cin >> n[i];
    }
}

// bool isSorted(int& highest, int n){
//     bool success = false;
//     if(n > highest){
//         highest = n;
//         success = true;
//     }
//     return success;
// }

int compare(Numbers n){
    int counter = 0, highCounter;
    for (int i = 0; i < N; i++)
    {
        if(n[i - 1] < n[i]) {
            counter++;
            if(counter >  highCounter) highCounter = counter;
        }
        else{
            if(counter >  highCounter) highCounter = counter;
        counter = 0;
        }  
    }
    return highCounter;
}