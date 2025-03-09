#include <iostream>

using namespace std;
int main(){
    char c;
    cout << "Define c: "; cin >> c;
    cout << "C in ascii: " << (int) c << endl; 
    cout << "Next value in ascii is: " << (char) (c + 1);
}