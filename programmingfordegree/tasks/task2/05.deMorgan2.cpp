#include <iostream>
using namespace std;

int main(){
    int a = 2, b = 3, c = 2;
    bool found = ((a and b) and c);
    bool success = !(found) and !(a = b) or !(a = c);

    cout << "the result is: " << success;
}