
#include <iostream>
#include <vector>
#include <string>

using namespace std;
const int MAXDIF = 15;
const int MAXFREQ = 3;
typedef vector<string> Words;

void readWords(Words& s, int& size);
void runArray(Words s, int& size);

int main(){
    Words s(100);
    int size = 0;
    readWords(s, size);
    runArray(s, size);
}

void readWords(Words& s, int& size){
    string w;
    while(cin >> w and w != "END" and size < s.size()){
        s[size] = w;
        size++;
    }
}

void runArray(Words s, int& size){
    int unique = 0, freq = 0;
    for (int i = 0; i < size and unique < MAXDIF; i++)
    {
        int j = 0;
        bool repeated = false;
        while(not repeated and j < i){
            if(s[j] == s[i]) repeated = true;
            j++;
        }

        if(!repeated and s[i] != ""){
            cout << s[i] <<" ----> ";

            for (int k = 0; k < size; k++)
            {
                if(s[k] == s[i] and freq < MAXFREQ){
                    cout << k + 1 << " ";
                    freq++;
                    if(freq > MAXFREQ) cout << endl << "the freq of this word exceeds the allowed " << endl;
                } 
            }
            cout << endl;
            freq = 0;
            unique++;
        }
    }
}
