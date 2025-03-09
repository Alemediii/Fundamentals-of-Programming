#include <iostream>
#include <string>
using namespace std;

string wordFromCamelCase(string s);
string lower(string s);

int main()
{
    string input;
    cout << "define the string: ";
    getline(cin, input);

    cout << "new string is: " << wordFromCamelCase(input);
}

string wordFromCamelCase(string s)
{
    string input;
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            if(i > 0 and s[i-1] != '_')
            input += '_';
            input += (s[i]);
        } else input += s[i];
    }
    return lower(input);
}

string lower(string s)
{
    string upp = s;
    for (char &c : upp)
    {
        if (c >= 'A' and c <= 'Z')
            c = tolower(c);
    }
    return upp;
}