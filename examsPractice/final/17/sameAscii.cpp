#include <iostream>
#include <array>

using namespace std;
const int MAX_WORDS = 25;

typedef array<string, MAX_WORDS> Words;

struct TWords{
    Words w;
    int nEl = 0;
};

void show(TWords w){
    cout << "words are: " << endl;
    for (int i = 0; i < w.nEl; i++)
    {
        cout << w.w[i] << " ";
    }
    
}

void read(TWords& w);
int sumAscii(string word);
bool isRepeated(TWords w, string word);

int main(){
    TWords w;
    read(w);

    show(w);
}

bool isRepeated(TWords w, string word){
    int i = 0;
    while(i < w.nEl and w.w[i] != word){
        i++;
    }
    return i < w.nEl; 
}

void read(TWords& w){
    string word, pat;
    cout << "define pat: ";
    cin >> pat;
    cout << "define the words of the text: ";
    cin >> word;
    int sumAsciiPat = sumAscii(pat);
    while(word != "END"){
        if(not isRepeated(w, word) and sumAsciiPat == sumAscii(word)){
            w.w[w.nEl] = word;
            w.nEl++;
        }
        cin >> word;
    }
}

int sumAscii(string word){
    int sum = 0;
    for (int i = 0; i < int(word.size()); i++)
    {
        sum += int(word[i]);
    }
    return sum;
}
