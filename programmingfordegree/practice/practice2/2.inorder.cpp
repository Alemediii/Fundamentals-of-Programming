#include <iostream>
using namespace std;

int main()
{
    int n;
    bool inOrder = true;
    cin >> n;
    int lowest = n;
    while (n != 0)
    {
        if (n > lowest)
        {
            lowest = n;
        }
        else if (n < lowest)
        {
            inOrder = false;
        }
        cin >> n;
    }

    if (inOrder)
        cout << "the numbers are in order";
    else
        cout << "the numbers are not in order";
}