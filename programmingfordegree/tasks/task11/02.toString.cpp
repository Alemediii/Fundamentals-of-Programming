#include <iostream>
#include <string>
using namespace std;

int str2int(string s, int base = 10);
int main() {
    cout << str2int("123") << endl;  // Output: 123
    cout << str2int("2021", 5) << endl;  // Output: 2021
    cout << str2int("01") << endl;  // Output: 1

    return 0;
}


int str2int(string s, int base) {
    int r = 0;

    for (int i = 0; i < s.length(); ++i) {
        if(s[i] >= 'A')
        r = r * base + (s[i] - 'A' + 10);
        else 
        r = r * base + (s[i] - '0');
    }

    return r;
}