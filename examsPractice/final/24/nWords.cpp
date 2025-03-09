#include <iostream>

using namespace std;

// Function prototype
int nwords(string s);

int main()
{
    cout << nwords("") << endl;            // 0
    cout << nwords(" air ") << endl;       // 1
    cout << nwords("a b") << endl;         // 2
    cout << nwords(" live on time , emit no evil ") << endl; // 6

    return 0;
}

// Function to count the number of words in a string
int nwords(string s)
{
    int count = 0;
    bool inWord = false;

    for (char c : s)
    {
        // Check if the character is an alphabet letter ('a' to 'z' or 'A' to 'Z')
        if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z'))
        {
            if (not inWord)
            {
                inWord = true;
                count++;
            }
        }
        else
            inWord = false;
    }

    return count;
}
