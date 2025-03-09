#include <iostream>
using namespace std;

unsigned long long factorial(int value);

int main(){
    cout << factorial(5);
}

unsigned long long factorial(int value){
    if(value == 0 or value == 1) return 1;

    int fact = 1;
    while(value > 0){
        cout << "result is: " << fact << "*" << value << "!" << endl;
        fact *= value;
        value--;
    }
    
    return fact;
}