#include <iostream>
#include <cmath>

using namespace std;

int prevSq(int n);

int main() {
    int n = 968;
    int result = prevSq(n);
    cout << "prevSq(" << n << ") = " << result << std::endl;
    
    return 0;
}

int prevSq(int n) {
    int p = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i * i <= n) {
            p = i;
        } else {
            break;
        }
    }
    
    return p;
}
