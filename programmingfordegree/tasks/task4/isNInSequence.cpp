// isNInSequence.cpp
// Alejandro Medina Diaz
// The programme checks whether a number N is in a sequence

#include <iostream>
using namespace std;

int main(){
    int n, numbers;
    bool compare = false;
    cout << "what number should we compare: "; cin >> n;
    cout << "define the numbers: "; cin >> numbers;
    
    if(numbers == n)
    compare = true;

    while(numbers != 0){
        
        cin >> numbers;

        if(numbers == n)
        compare = true;
    }

    if(compare) cout << "the number " << n << " appears in the sequence";
    else cout << "the number " << n << "does not appear in the sequence";  
}