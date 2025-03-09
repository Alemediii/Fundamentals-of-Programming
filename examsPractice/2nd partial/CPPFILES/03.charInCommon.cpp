#include <iostream>
#include <array>

using namespace std;
const int MAX = 45;

typedef array<string, MAX> Words;

Words read(int& size);
void show(Words w, int size);
Words patreon(Words w, string toCommon, int manyLetters, 
    int& sizeOfCondition, int size);

int main(){
    int size = 0, sizeOfCondition = 0;
    Words w = read(size);
    Words condition = patreon(w, "ALICIA", 1, sizeOfCondition, size);
    show(condition, sizeOfCondition);

}

Words read(int& size){
    Words w;
    while (size < MAX and cin >> w[size] and w[size] != "END")
    {
        size++;
    }
    return w;
}

void show(Words w, int size){
    for (int i = 0; i < size; i++)
    {
        cout << w[i] << " ";
    }
    
}

Words patreon(Words w, string toCommon, int manyLetters, int& sizeOfCondition, int size){
    Words condition;

    for (int i = 0; i < size; i++) //vector
    {
        int counter = 0;
        for(char c: toCommon){
            for(char s: w[i]){
                if(c == s) counter++;
            }
        }
        if(counter == manyLetters){
            condition[sizeOfCondition] = w[i];
            sizeOfCondition++;
        }
    }

    return condition;
}