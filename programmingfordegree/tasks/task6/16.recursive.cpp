#include <iostream>
using namespace std;

void reverseInput();

int main() {
  cout << "Enter a sequence of characters ending in a dot: ";
  reverseInput();
  cout << endl;
}

void reverseInput() {
  char c;
  cin >> c;
  if (c == '.') {
    return;
  }
  reverseInput();
  cout << c;
}