#include <iostream>
#include <array>

using namespace std;
const int MAX = 25;

typedef array<int, MAX> Numbers;

void fillNumbers(Numbers& n, int& size);
void showNumbers(Numbers n, int size);
Numbers findKGreat(Numbers n, int size, int k, int& posInArray);

int main(){
    int size = 0, k = 2, sizeRepeated = 0;
    Numbers n;

    fillNumbers(n, size);
    showNumbers(n, size);
    // showNumbers(findKGreat(n, size, k), k);
    Numbers greatest = findKGreat(n, size, k, sizeRepeated);

    cout << "the " << k << " repeated numbers are: ";
    for (int i = 0; i < sizeRepeated; i++)
        cout << greatest[i] << " ";
}

void fillNumbers(Numbers& n, int& size){
    int number;
    while(cin >> number and number != 0 and size < MAX){
        n[size] = number;
        size++;
    }
}

void showNumbers(Numbers n, int size){
    for (int i = 0; i < size; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
}

Numbers findKGreat(Numbers n, int size, int k, int& posInArray){
    Numbers kRepeated = {};
    bool found[MAX] = {false};
    int count = 0;
    for (int i = 0; i < size; i++)
    {
    if(not found[i]) //these were the lines that I could not realise
        for (int j = i+1; j < size; j++)
        {
            if(n[i] == n[j]){
            count++;
            found[j] = true; //the rest is done for me
            } 
        }
        if(count == k - 1){
            kRepeated[posInArray] = n[i];
            posInArray++;
        } 
        count = 0;
    }
    
    return kRepeated;
}