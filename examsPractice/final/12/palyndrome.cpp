#include <iostream>
using namespace std;

void show(string word);
bool isPalyndrome(string word);

int main(){
    show("A");
    show("ABBA");
    show("ASAP");
    show("SHOW");
    show("PALAP");
}

void show(string word){
    if(isPalyndrome(word)) cout << word << ": YES" << endl;
    else cout << word << ": NO" << endl;
}

bool isPalyndrome(string word){
    int i = 0, j = int(word.size() - 1);
    bool success = true;
    while(i < j and success){
        char c = word[i]; char d = word[j];
        if(c == d){
            i++;
            j--;
        } else
            success = false;
    }
    return success;
}