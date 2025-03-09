#include <iostream>
#include <array>
#include <string>

using namespace std;

typedef array<string, 7> Words;

void readWords(Words& s, int& size);
int runArray(Words s, int pos1, int size);

int main(){
    Words s;
    int size = 0;
    readWords(s, size);

    for (int i = 0; i < s.size(); i++) {
        int distance = runArray(s, i, size);
        if (distance != 0) {
            cout << s[i] << " DISTANCE " << distance << endl;
        }
    }
}

void readWords(Words& s, int& size){
    string w;
    while(cin >> w and w != "FIN" and size < s.size()){
        s[size] = w;
        size++;
    }
}

int runArray(Words s, int pos1, int size){
    int pos2 = pos1 + 1;
    while (pos2 < size && s[pos2] != s[pos1]) {
        pos2++;
    }
    if (pos2 < size) {
        return pos2 - pos1;
    }
    return 0;
}
