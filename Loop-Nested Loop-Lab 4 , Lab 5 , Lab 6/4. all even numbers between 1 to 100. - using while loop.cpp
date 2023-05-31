#include <iostream>

int main() {
    int num = 2;  // Starting number

    while (num <= 100) {
        std::cout << num << " ";
        num += 2;  // Increment by 2 to get the next even number
    }

    return 0;
}
