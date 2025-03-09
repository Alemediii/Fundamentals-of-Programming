#include <iostream>
#include <array>

using namespace std;
const int MAX = 8;

typedef array<char, MAX> Row;
typedef array<Row, MAX> Matrix;

void read(Matrix& m, string& word){
    cout << "define soup: " << endl;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cin >> m[i][j];
        }
    }

    cout << "define the word: "; 
    cin >> word;
}

bool isNorth(int row, int col, string word, Matrix m);
bool isSouth(int row, int col, string word, Matrix m);
bool isWest(int row, int col, string word, Matrix m);
bool isEast(int row, int col, string word, Matrix m);
void search(string word, Matrix m, bool& is, int& row, int& col, string& direction);

int main(){
    string word, direction;
    Matrix m;
    bool is;
    int row, col;

    read(m, word);
    search(word, m, is, row, col, direction);
    
    if(is) cout << "word " << word << " is in pos " << row << ", " << col <<
    " and the direciton is " << direction;
    else cout << "the word is not found";
}

bool isNorth(int row, int col, string word, Matrix m){
    int north = row;
    int counter = 0;

    while(north >= 0 and counter < int(word.size()) and 
    m[north][col] == word[counter]){
        north--;
        counter++;
    }
    return counter >= int(word.size());
}

bool isSouth(int row, int col, string word, Matrix m){
    int south = row;
    int counter = 0;

    while(south < MAX and counter < int(word.size()) and 
    m[south][col] == word[counter]){
        south++;
        counter++;
    }
    return counter >= int(word.size());
}

bool isWest(int row, int col, string word, Matrix m){
    int west = col;
    int counter = 0;

    while(west >= 0 and counter < int(word.size()) and 
    m[row][west] == word[counter]){
        west--;
        counter++;
    }
    return counter >= int(word.size());
}

bool isEast(int row, int col, string word, Matrix m){
    int east = col;
    int counter = 0;

    while(east < MAX and counter < int(word.size()) and 
    m[row][east] == word[counter]){
        east++;
        counter++;
    }
    return counter >= int(word.size());
}

void search(string word, Matrix m, bool& is, int& row, int& col, string& direction){
    is = false;
    row = 0;
    while(not is and row < MAX){
        col = 0;
        while(not is and col < MAX){
            if(m[row][col] == word[0]){
                if(isNorth(row, col, word, m)){
                    is = true;
                    direction = "NORTH";
                } else if(isSouth(row, col, word, m)){
                    is = true;
                    direction = "SOUTH";
                } else if(isWest(row, col, word, m)){
                    is = true;
                    direction = "WEST";
                } else if(isEast(row, col, word, m)){
                    is = true;
                    direction = "EAST";
            }
        }
        if(not is) col++;
    }
    if(not is) row++;
}
}