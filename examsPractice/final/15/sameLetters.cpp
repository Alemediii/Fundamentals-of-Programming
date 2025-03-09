#include <iostream>
#include <array>

using namespace std;
const int MAX_WORDS = 25;

typedef array<string, MAX_WORDS> Words;

struct TWords{
    Words words;
    int nEl;
};

void show(TWords words){
    cout << "the number of words is: " << words.nEl << endl;
    for (int i = 0; i < words.nEl; i++)
    {
        cout << "word "<< i + 1 << " is: " << words.words[i];
        cout << endl;
    }
}

bool isIt(TWords w, string word){
    int i = 0;
    while(i < w.nEl and w.words[i] != word){
        i++;
    }
    return i < w.nEl;
}

bool isVowel(char c);
bool isLetterInTheWord(string pat, char c);
string wordNoVowel(string word);
bool freq(string word, string pat);

int main(){
    TWords w;
    w.nEl = 0;
    string word, pat;

    cout << "define the pat [1st for pat]: ";
    cin >> pat;
    string ref = wordNoVowel(pat);
    cin >> word;
    while(word != "END"){
        if(not isIt(w, word) and wordNoVowel(word) == ref and freq(word, pat)){
            w.words[w.nEl] = word;
            w.nEl++;
        }
        cin >> word;
    }

    show(w);
}

string wordNoVowel(string word){
    string result = "";
    for (int i = 0; i < int(word.size()); i++)
    {
        if((word[i] >= 'A' and word[i] <= 'Z') and (word[i] != 'A' and word[i] != 'E' and word[i] != 'I' and
        word[i] != 'O' and word[i] != 'U')){
            result += word[i];
        }
    }
    return result;
}

bool freq(string word, string pat){
    bool areTheLetters = true;
    //we iterate to one of the length, since these are supposed to be the same, 
    //it would work either for word.size or pat.size

    for (int i = 0; i < int(word.size()) and areTheLetters; i++)
    {
        if(isVowel(word[i]))
            areTheLetters = isLetterInTheWord(pat, word[i]);
    }
    return areTheLetters and int(word.size() == int(pat.size()));
}

bool isVowel(char c){
    return (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U');
}

bool isLetterInTheWord(string pat, char c){
    int i = 0;
    while(i < int(pat.size()) and pat[i] != c){
        i++;
    }
    return i < pat.size();
}