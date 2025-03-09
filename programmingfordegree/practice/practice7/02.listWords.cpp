#include <iostream>
#include <array>
#include <string>

using namespace std;

const int N = 100;
typedef array<string, N> TListOfWords;

TListOfWords low(string s);
void print(TListOfWords l);

int main()
{
    print(low("if you      have a prob_lem_ : --- > change your car"));
}

bool isWord(char c);
TListOfWords low(string s)
{
    TListOfWords r;
    int pos = 0;
    bool isIt = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (isWord(s[i]))
        {
            isIt = true;
            r[pos] += s[i];
        }
        else
        {
            if (isIt)
                pos++;
            isIt = false;
        }
    }
    return r;
}

void print(TListOfWords l)
{
    for (int i = 0; i < l[i].length() != 0; i++)
        cout << '"' << l[i] << '"' << endl;
}

bool isWord(char c)
{
    return 'a' <= c and c <= 'z' or c == '_';
}