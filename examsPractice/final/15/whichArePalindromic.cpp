#include <iostream>
#include <array>

using namespace std;
const int MAX_WORDS = 25;

typedef array<int, MAX_WORDS> Positions;
struct Words
{
    Positions p;
    
};

typedef array<string, MAX_WORDS> Words;
struct TWords{
    Words words;
    int nEl;
};

bool isTheWord(TWords w, string word){
    int i = 0;
    while(i < w.nEl and w.words[i] != word){
        i++;
    }
    return i < w.nEl;
}

bool isPalindromic(string s)
{
    int i = 0;
    int j = s.size() - 1;
    bool ok = true;
    while (ok and i < j)
        if (not isWord(s[i]))
            ++i;
        else if (not isWord(s[j]))
            --j;
        else
            ok = s[i++] == s[j--];
 
    return ok;
}
 
bool isWord(char c)
{
    return 'a' <= c and c <= 'z';
}

void show(TWords d);

int main(){
    TWords w;
    w.nEl = 0;
    cout << "define"
}

void show(TWords d){
    for (int i = 0; i < d.nEl; i++)
    {
        cout << d.words[i] << " "; 
        for (int j = 0; j < d.nEl; i++)
        {
            
        }
        
    }
    
}