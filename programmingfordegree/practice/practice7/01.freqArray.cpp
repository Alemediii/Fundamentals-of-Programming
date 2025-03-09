#include <iostream>
#include <array>
using namespace std;

const int N = 10;
const int NINT = 6;

struct TNumFreq
{
    int n;
    int freq;
};
typedef array<TNumFreq, N> TFreqs;
typedef array<int, NINT> TVec;

TFreqs freqsOf(TVec);
void writeFreqs(TFreqs a);

int main()
{
    writeFreqs(freqsOf((TVec){{10, 800, 4, 3, 4, 10}}));
    writeFreqs(freqsOf((TVec){{10, 10, 10, 10, 10, 10}}));

    return 0;
}

void add(TFreqs &f, int x);
TFreqs freqsOf(TVec a)
{
    TFreqs r;
    r[0].freq = 0;
    for (int i = 0; i < NINT; ++i)
        add(r, a[i]);
    return r;
}

void add(TFreqs &f, int x)
{
    int i = 0;
    while (f[i].freq > 0 and f[i].n != x)
        ++i;
    if (f[i].freq == 0)
    {
        f[i].n = x;
        f[i].freq = 1;
        f[i + 1].freq = 0;
    }
    else
    {
        ++f[i].freq;
    }
}

void writeFreqs(TFreqs t)
{
    for (int i = 0; t[i].freq > 0; ++i)
        cout << t[i].n << ":" << t[i].freq << " ";
    cout << endl;
}