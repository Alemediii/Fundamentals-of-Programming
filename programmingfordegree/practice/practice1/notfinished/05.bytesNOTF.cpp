// 05.bytes.cpp
// Alejandro Medina Diaz 2023 - 10 - 05
// Bytes conversor

#include <iostream>
using namespace std;

int main()
{
    int bits, bytes, megabytes, kilobytes;
    cout << "define the bits: ";
    cin >> bits;

    megabytes = bits * 0.000000125;
    bits %= megabytes;

    kilobytes = bits * 0.000125;
    bits = (int)bits % (int)kilobytes;

    bytes = bits * 0.125;
    bits %= bytes;

    cout << "MB: " << megabytes << "KB " << kilobytes << "B: " << bytes << " b: " << bits;
}