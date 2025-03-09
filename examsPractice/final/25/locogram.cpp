#include <iostream>
#include <array>
#include <string>

using namespace std;
const int SIZE_ARR = 25;
const int SIZE_REF = 5;

typedef array<char, SIZE_REF> Letters;

struct Words {
    string word;
    Letters let;
};

typedef array<Words, SIZE_ARR> TWords;

struct TData {
    TWords w;
    int nEl = 0;
};

bool isAPerm(string word, string reference);
void add(TData& d, string word, string reference);
void shoWords(TData d);

int main() {
    TData d;
    string word;
    cout << "define reference: ";
    cin >> word;
    string reference = word;
    while (cin >> word && word != "END") {
        add(d, word, reference);
    }

    shoWords(d);

    return 0;
}

void add(TData& d, string word, string reference) {
    int i = 0;
    while (i < d.nEl && d.w[i].word != word) {
        i++;
    }
    if (i == d.nEl && isAPerm(word, reference) && d.nEl < SIZE_ARR) {
        d.w[i].word = word;
        d.nEl++;
    }
}

bool isAPerm(string word, string reference) {
    int i = 0;
    while (i < int(reference.size()) && word.find(reference[i]) != string::npos) {
        i++;
    }
    return i == int(reference.size());
}

void shoWords(TData d) {
    cout << "Data is: \n";
    for (int i = 0; i < d.nEl; i++) {
        cout << d.w[i].word << endl;
    }
}
