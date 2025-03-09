#include <iostream>
#include <array>

using namespace std;

void reverse(string& word){
    string token = "";
    for (int i = int(word.size()) - 1; i >= 0; i--)
    {
        token += word[i];
    }
    word = token;
}

bool arepali(string word1, string word2){
    return word1 == word2;
}

int main(){
    string word1 = "AMERCEDESESEDECREMA";
    string word = word1;
    reverse(word);
    cout << word << " " << word1;
    if(arepali(word1, word)) cout << endl << "palyndrome";
}

