#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "define the numbers: ";
    cin >> x >> y;
    
    bool result = !(x < y) or !(y < 5);
    cout << "the result is " << result;
}