#include <iostream>
using namespace std;

void printTeeth(int x, int y);

int main(){
    printTeeth(3,5);
}

void printTeeth(int x, int y){
    for (int i = 1; i <= x; ++i){
        for (int j = 1; j <= y; ++j){
            for (int k = 0; k < (x - i); k++)
                cout << ' '; 
            cout << '*';
        for (int k = 0; k < (2 * (i - 1) - 1); k++)
        cout << ' ';
        if(i > 1 and i < x) cout << '*';
        for (int k = 0; k < (x - i - 1); k++)
            cout << ' ';
        
    }
    cout << endl;
    } 
}