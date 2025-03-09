#include <iostream>
#include <array>
#include <string>

const int N = 15;
using namespace std;

typedef array<string, N> Words;

Words readWords(int& size);
void showWords(Words w, int size);
Words onlyPrefix(Words& w, string a, int& pos, int size);

int main() {
    int size = 0, pos = 0;
    Words w = readWords(size);
    Words prefix = onlyPrefix(w, "ing", pos, size);
    showWords(w, size);
    showWords(prefix, pos);
}

Words readWords(int& size) {
    Words w;
    while (size < N and cin >> w[size] and w[size] != "end") {
        size++;
    }
    return w;
}

void showWords(Words w, int size) {
    for (int i = 0; i < size; i++) {
        cout << w[i] << " ";
    }
    cout << endl;
}

Words onlyPrefix(Words& w, string a, int& pos, int size) {
    Words prefix;
    for (int i = 0; i < size; i++) {
        if (w[i].substr(w[i].length() - 3, 3) == a) {
            prefix[pos] = w[i];
            pos++;
        }
    }
    return prefix;
}
