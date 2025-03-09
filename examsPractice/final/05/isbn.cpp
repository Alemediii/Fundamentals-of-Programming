#include <iostream>
#include <array>
#include <string>

const int size = 11;
using namespace std;


bool isCorrect(string chain);
int convertChar(int num);
char getCode(string isbn);
int convertNum(char c);
void read(string chain, int l);

int main(){
    string group, editor, book, isbn;
    char control;

    cout << "group: "; read(group, 1);
    cout << "editor: "; read(editor, 4);
    cout << "book: "; read(book, 4);

    isbn = group + editor + book;
    control = getCode(isbn);

    isbn += control;

    cout << "the isbn is: " << isbn;
}

bool isCorrect(string chain){
    int i = 0, size = int(chain.size());
    while(i < size and chain[i] >= '0' and chain[i] <= '9') 
    i++;
    return i >= size;
}

void read(string chain, int l){
    while(int(chain.size()) != 1 or not isCorrect(chain)){
        cout << l << " digits: ";
        cin >> chain;
    }
}

int convertNum(char c){
    return int(c) - int('0');
}
int convertChar(int num){
    return char(num + int('0'));
}

char getCode(string isbn){
    int calc = 0;
    char control;

    for (int i = 0; i < int(isbn.size()); i++)
        calc += convertNum(isbn[i] * (i + 1));
    
    calc = calc % 11;
    if(calc == 10) control = 'x';
    else control = convertChar(calc);

    return control;
}