#include <iostream>
#include <array>
#include <string>

const int MAX_PAL = 25;
const int MAX_WORD_LENGTH = 50;

using namespace std;

typedef array<string, MAX_PAL> Words;
typedef array<char, MAX_WORD_LENGTH> Letters;

struct TWords {
    Words w;
    int size;
};

bool isRepeated(TWords w, string word);
bool isLetterRepeated(const string& word, char c);
void readWords(TWords& w);
Letters getUniqueLetters(const string& word);
bool isogram(const string& pat, const string& word);
void ordered(Words& words);
void show(const TWords& w);

int main() {
    TWords w;
    readWords(w);
    show(w);
}

bool isRepeated(TWords w, string word) {
    int i = 0;
    while (i < w.size && w.w[i] != word) i++;
    return i < w.size;
}

bool isLetterRepeated(const string& word, char c) {
    return word.find(c) != string::npos;
}

void readWords(TWords& w) {
    string word;
    w.size = 0;
    cout << "Enter words ('END' to stop): ";
    cin >> word;

    while (word != "END" && w.size < MAX_PAL && !isRepeated(w, word)) {
        w.w[w.size] = word;
        w.size++;
        cin >> word;
    }
}

Letters getUniqueLetters(const string& word) {
    Letters uniqueLetters = {};

    int index = 0;
    for (char c : word) {
        if (!isLetterRepeated(uniqueLetters.data(), c)) {
            uniqueLetters[index++] = c;
        }
    }

    return uniqueLetters;
}

bool isogram(const string& pat, const string& word) {
    Letters pattern = getUniqueLetters(pat);
    Letters wordLetters = getUniqueLetters(word);

    ordered(pattern);
    ordered(wordLetters);

    for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
        if (pattern[i] != wordLetters[i]) {
            return false;
        }
    }
    return true;
}

void ordered(Words& words) {
    for (int i = 0; i < words.size - 1; ++i) {
        for (int j = 0; j < words.size - i - 1; ++j) {
            if (words[j] > words[j + 1]) {
                swap(words[j], words[j + 1]);
            }
        }
    }
}

void show(const TWords& w) {
    for (int i = 0; i < w.size; i++) {
        cout << w.w[i] << " ";
    }
}
