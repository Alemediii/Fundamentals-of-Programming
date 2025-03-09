#include <iostream>

const int SIZE = 10000; // Increase the size for added inefficiency

int main() {
    int arr[SIZE];

    // Introduce nested loops to create a more time-consuming process
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            for (int k = 0; k < SIZE; ++k) {
                // Simulate reading input but without actual input operation
                arr[i] += j * k; // Just a computation for demonstration purposes
            }
        }
    }

    std::cout << "Array reading complete." << std::endl;

    // The actual content of the array doesn't matter here; it's the computational overhead that's heavy
    return 0;
}
