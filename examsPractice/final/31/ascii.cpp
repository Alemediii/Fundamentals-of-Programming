#include <iostream>
#include <array>

using namespace std;
const int N = 25;

typedef array<string, N> Words;
struct TWords{
    Words word;
    int nEl = 0;
};

int sumAscii(string word);
bool isIt(TWords d);
void readData(TWords& w);
TWords lowerAscii(TWords w);
void show(TWords w); 

int main(){
    TWords w;
    readData(w);
    TWords lowers = lowerAscii(w);

    show(lowers);
}

int sumAscii(string word){
    int sum = 0;
    for (int i = 0; i < int(word.size()); i++)
    {
        sum += int(word[i]); 
    }
    return sum;
}

bool isIt(TWords d, string word){
    int i = 0;
    while(i < d.nEl and d.word[i] != word){
        i++;
    }
    return i < d.nEl;
}

void readData(TWords& w){
    string word;
    cout << "define: ";
    while(cin >> word and word != "END" and w.nEl < N){
        w.word[w.nEl] = word;
        w.nEl++;
    }
}

TWords lowerAscii(TWords w){
    TWords highers;
    highers.nEl = 0;    
    int firstWordSum = sumAscii(w.word[0]);
    for (int i = 1; i < w.nEl; i++) { // Start from i = 1 to avoid comparing first word with itself
        int sumI = sumAscii(w.word[i]);
        if (firstWordSum < sumI) { // Compare sum of first word with other words
            highers.word[highers.nEl] = w.word[i];
            highers.nEl++;
        }
    }
    return highers;
}


void show(TWords w){
    for (int i = 0; i < w.nEl; i++)
    {
        cout << w.word[i] << " ";
    }
}