/*
Escriba un programa que lea desde teclado una secuencia de caracteres terminada
en punto. Como resultado, el programa debe de mostrar el tamaño de la palabra
más larga. Ten en cuenta que entre dos palabras y tanto al inicio como al final del
programa, puede haber una serie indeterminada de espacios en blanco. A
continuación, se muestran varios ejemplos de la ejecución del programa.
*/

#include <iostream>
#include <array>

using namespace std;

void readWords(char word, int& highest);
void lengthMax(int& length, int& highest);

int main(){
    char word;
    int highest = -1;
    readWords(word, highest);

    cout << "LONGEST WORD: " << highest;
}


void lengthMax(int& length, int& highest){
    if(length > highest)
        highest = length;
}

void readWords(char word, int& highest){
    int length = 0;
    while(cin.get(word) && word != '.'){
        if(word == ' ' or word == '\n' or word == '\t'){
            lengthMax(length, highest);
            length = 0;
        }else{
        length++;
        } 
    }
}