#include <iostream>
using namespace std;

string int2str(int n, int base=10);

int main()
{
    cout << int2str(123) << endl;
    cout << int2str(456) << endl;
    cout << int2str(0456, 8) << endl;
    cout << int2str(0xAF60, 16) << endl;
    return 0;
}

string int2str(int n, int base)
{
    string r;
    if (n == 0) {
        r += '0';
    } else {
        int sign = (n < 0) ? -1 : 1;
        n *= sign;
        while (n > 0) {
            int remainder = n % base;
            n /= base;
            r += ((remainder < 10) ? '0' : 'A'- 10) + remainder;
        }
        if (sign == -1) r += '-';
    }

    // reversing
    int j = r.size() - 1;
    for (int i = 0; i < j; i++, j--) {
        char t = r[i];
        r[i] = r[j];
        r[j] = t;
    }
    return r;
}