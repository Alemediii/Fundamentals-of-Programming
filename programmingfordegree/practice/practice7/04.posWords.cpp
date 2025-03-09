#include <iostream>
#include <array>
#include <string>

using namespace std;

#define MAX_DIFF_WORDS 10
struct TWord
{
    string w;
    int pos;
};

typedef array<TWord, MAX_DIFF_WORDS>
    Words;

void add(Words &words, string w, int pos);
void printWords(Words words);

int main()
{
    Words words;
    int pos = 0;
    string w;
    while (cin >> w and w != "end")
        add(words, w, ++pos);
    printWords(words);
}

void add(Words &words, string w, int pos)
{
    int i = 0;
    while (words[i].w != "" and words[i].w != w)
        ++i;
    if (words[i].w == "")
        words[i].w = w;
    words[i].pos = pos;
}

void printWords(Words words)
{
    for (int i = 0; words[i].w != ""; i++)
    {
        cout << "word: " << words[i].w;
        cout << " in pos: " << words[i].pos << endl;
    }
}