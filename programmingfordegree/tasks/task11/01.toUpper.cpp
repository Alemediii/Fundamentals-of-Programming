#include <iostream>
#include <string>
using namespace std;

string toUpper(const string &s);

int main()
{
    string c = "kaNyeWest";
    string s = toUpper(c);
    cout << "the upper version is: " << s;
}

string toUpper(const string &s)
{
    string upp = s;
    for (int i = 0; i < s.length(); ++i)
        upp[i] = toupper(upp[i]);   
    return upp;
}