#include <iostream>
using namespace std;

string fileName(string path);
string fileName2(string path);

int main()
{
    string substr(string s, int pos, int len);
    cout << fileName("C:/Users/aleme/OneDrive/Escritorio/ASTON BIRRA") << endl;
    cout << fileName2("C:/Users/aleme/OneDrive/Escritorio/ASTON BIRRA")<< endl;
    return 0;
}

string fileName(string path)
{
    int i = path.length();
    while (i >= 0 and path[i] != '/')
        --i;
    return path.substr(i+1, path.length());
}

string substr(string s, int pos, int len);

string fileName2(string path)
{
    int i = path.length()-1;
    while (i >= 0 and path[i] != '/')
        --i;
    return substr(path, i+1, path.length()-i-1);
    // return substr(path, i+1, path.length());
}

string substr(const string s, int pos, int len)
{
    string r;
    int i = pos;
    while (i < s.length() and i-pos < len)
        r += s[i++];
    return r;
}