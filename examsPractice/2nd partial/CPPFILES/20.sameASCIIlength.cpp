#include <iostream>
#include <array>
#include <string>

const int MAX_WORDS = 15;
const int MAX_CHAR = 7;

using namespace std;
typedef array<string, MAX_WORDS> ArrayOfWords;

struct TWord{
    ArrayOfWords w;
    int size;
};

bool isIt(TWord w, string word);
int asciiSum(string word);
void show(TWord w);

int main(){
    TWord w;
    int sumPat, sum;
    string pat, word;
    w.size = 0;

    cout << "pat: "; cin >> pat;
    sumPat = asciiSum(pat);

    cout << "text: "; cin >> word;
    while(word != "END"){
        sum = asciiSum(word);
        if(sum == sumPat and not isIt(w, word) and word.length() < MAX_CHAR){
            w.w[w.size] = word;
            w.size++;
        }
        cin >> word;
    }
    cout << endl;
    cout << "the words which meet this are: ";
    show(w);
}

bool isIt(TWord w, string word){
    int i = 0;
    while(i < w.size and w.w[i] != word) i++;
    return i < w.size;
}

int asciiSum(string word){
    int sum = 0;
    for(char c: word){
        sum += (int) c;
    }
    return sum;
}

void show(TWord w){
    for (int i = 0; i < w.size; i++)
    {
        cout << w.w[i] << " ";
    }
}