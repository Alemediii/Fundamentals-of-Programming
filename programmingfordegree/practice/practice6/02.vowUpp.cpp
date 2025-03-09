#include <iostream>
#include <string>
using namespace std;

int main()
{
    int vow, consonant, spaces;
    vow = consonant = spaces = 0;

    string input;
    cout << "define the string: ";
    getline(cin, input);

    for (char c : input)
    {
        if (c == 'a' or c == 'E' or c == 'i' or c == 'o' or c == 'U' or c == 'A' or c == 'e' or c == 'I' or c == 'O' or c == 'u')
            ++vow;
        else if (c == ' ')
            ++spaces;
        else
            ++consonant;
    }
    cout << "number of vow: " << vow << endl;
    cout << "number of consonant: " << consonant << endl;
    cout << "number of spaces: " << spaces << endl;
}