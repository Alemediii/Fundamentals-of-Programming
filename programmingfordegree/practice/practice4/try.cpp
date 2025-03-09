#include <iostream>
#include <string>

int main() {
    std::string input, modified;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    for (char c : input) {
        if (std::islower(c)) {
            modified += '_';
            modified += c;
        } else {
            modified += std::tolower(c);
        }
    }

    std::cout << "Modified String: " << modified << std::endl;

    return 0;
}