#include <iostream>
#include <string>
#include <array>

using namespace std;

typedef array<string, 100> TWords;

void add(TWords &l, string w, int &i);
bool isIt(TWords &l, string w);
void show(TWords l);

int main()
{
    int i = 0;
    string w; // w.lenght() -> 0
    TWords listOfWords;
    while (cin >> w and w != "end")
        add(listOfWords, w, i);

    show(listOfWords);
    return 0;
}

void show(TWords l)
{
    for (int i = 0; i < l.size(); i++)
    {
        cout << l[i] << "   ";
    }
}

void add(TWords &l, string w, int &i)
{
    if (isIt(l, w))
    {
        l[i] = w;
        ++i;
    }
}

bool isIt(TWords &l, string w)
{
    bool success = true;
    for (int i = 0; i < l.size(); i++)
    {
        if (w == l[i])
            success = false;
    }
    return success;
}