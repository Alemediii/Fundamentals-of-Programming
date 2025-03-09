#include <iostream>
#include <array>

using namespace std;
const int MAX = 25;

typedef array<int, MAX> Numbers;

void fillNumbers(Numbers& n, int& size);
void showNumbers(Numbers n, int size);
Numbers findKGreat(Numbers n, int size, int k);

int main(){
    int size = 0, k = 5;
    Numbers n;

    fillNumbers(n, size);
    showNumbers(n, size);
    // showNumbers(findKGreat(n, size, k), k);
    Numbers greatest = findKGreat(n, size, k);
    for (int i = 0; i < k; i++)
    {
        cout << greatest[i] << ": ";
        for (int j = 0; j < size; j++)
        {
            if(n[j] == greatest[i]) cout << j + 1 << " ";     
        }
        cout << endl;
    }
    
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

Numbers findKGreat(Numbers n, int size, int k){
    Numbers greatest = {};
    int great = n[0], count = 0;
    while (k > 0){
        for (int i = 0; i < size; i++){
            if(n[i] > great){
                great = n[i];
                if(n[i] == great) n[i] = 0;
            } 
        }
        greatest[count] = great;
        great = 0;
        count++;
        k--;
    }
    
    return greatest;
}