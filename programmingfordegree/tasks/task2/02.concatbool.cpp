#include <iostream>
using namespace std;

int main(){
    int n;
    bool isIt = false;
    cout << "define n: "; cin >> n;
    if (n >= 0 and n <= 100)
        cout << "The number " << n << " is between the gap [0, 100]";
    else cout << "The number " << n << " is not between the gap [0, 100]";

}