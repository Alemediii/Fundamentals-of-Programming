#include <iostream>
#include <array>

using namespace std;
typedef array<int, 15> TVec;

void longestSequence(TVec v, int& trend, bool& ok);

int main(){
    int trend;
    bool ok = true;
    longestSequence({1, 5, 3, 4, 5, 5, 5, 5, 3, 2, 5}, trend, ok);
    if(ok) cout << "trend is: " << trend;
    else cout << "there is no trend";
}

void longestSequence(TVec v, int& trend, bool& ok){
    int counter = 1, highCounter = 0;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if(v[i] == v[j]) ++counter;
            else{
                if(counter > highCounter) trend = v[i];
                else if(counter == highCounter and v[i] != trend) ok = false;
                counter = 1;
            }
        }
        
    }
        
}