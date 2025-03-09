#include <iostream>
#include <array>

using namespace std;

const int MAX = 10;

struct Numbers {
    int n;
    int freq = 0;
};

typedef array<Numbers, MAX> TNumbers;

struct TData {
    TNumbers numbers;
    int nEl = 0;
};

bool isRepeated(TData d, int num) {
    int i = 0;
    while(i < d.nEl and d.numbers[i].n != num) i++;
    return i < d.nEl;
}

int highestFreq(const TData& d) {
    int highestFreqIndex = 0;
    for (int i = 1; i < d.nEl; i++) {
        if (d.numbers[i].freq > d.numbers[highestFreqIndex].freq) {
            highestFreqIndex = i;
        }
    }
    return highestFreqIndex;
}

int main() {
    TData d;
    int num;

    cout << "Define the numbers (maximum 10, enter 0 to stop):\n";

    cin >> num;
    while (num != 0 && d.nEl < MAX) {
        if (not isRepeated(d, num)) {
            d.numbers[d.nEl].n = num;
            d.numbers[d.nEl].freq = 1;
            d.nEl++;
        } else {
            for (int i = 0; i < d.nEl; i++) {
                if (d.numbers[i].n == num) {
                    d.numbers[i].freq++;
                }
            }
        }
        cin >> num;
    }

    if (d.nEl > 0) {
        int highestFreqIndex = highestFreq(d);
        cout << "The number with the highest frequency is: " << d.numbers[highestFreqIndex].n << " (Frequency: " << d.numbers[highestFreqIndex].freq << ")\n";
    } else {
        cout << "No numbers entered or exceeded maximum limit.\n";
    }

    return 0;
}
