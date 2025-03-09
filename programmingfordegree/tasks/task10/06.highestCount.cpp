#include <iostream>
#include <array>

using namespace std;
typedef array<int, 15> TVec;

int longestSequence(TVec v);

int main(){
    int pos = longestSequence({1, 5, 3, 4, 5, 5, 5, 5, 3 ,2, 1});
    cout << "the longest sequence is: " << pos;
}

int longestSequence(TVec v){
    int highest = 0, counter = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == v[i + 1]) ++counter;
        else{
            if(counter > highest) highest = counter;
            counter = 1;
        }
    }
    return highest;
}