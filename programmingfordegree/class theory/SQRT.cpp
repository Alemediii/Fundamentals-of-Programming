#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x;
    cout << "define a number [0 ends]: "; cin >> x;

    while(x != 0){
        cout << "sqrt: " << sqrt(x) << endl;
        cin >> x; 
    }
}