#include <iostream>
#include <array>

using namespace std;
const int SIZE = 10;

typedef array<int, SIZE> Numbers;

Numbers read();
int highest(Numbers n);

int main(){
    Numbers data = read();
    int highestSerie = highest(data);

    cout << "the highest serie is: " << highestSerie;
}

Numbers read(){
    Numbers n;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> n[i];
    }
    return n;
}

int highest(Numbers n){
    //lower to higher
    int counterLToH = 1, highestCounterLToH = 0;
    for (int i = 1; i <= SIZE; i++)
    {
        if(n[i - 1] <= n[i]) counterLToH++;
        else{
            if(highestCounterLToH > highestCounterLToH) 
            highestCounterLToH = counterLToH;
            counterLToH = 1;
        }
    }

    //higher to lower
    int counterHToL = 1, highestCounterHToL = 0;
    for (int i = 1; i <= SIZE; i++)
    {
        if(n[i - 1] >= n[i]) counterHToL++;
        else{
            if(highestCounterHToL > highestCounterHToL) 
            highestCounterHToL = counterHToL;
            counterHToL = 1;
        }
    }

    return max(highestCounterHToL, highestCounterLToH);
}
