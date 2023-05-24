#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 5 == 0 && number % 11 == 0) {
        std::cout << "The number is divisible by both 5 and 11." << std::endl;
    } else {
        std::cout << "The number is not divisible by both 5 and 11." << std::endl;
    }

    return 0;
}
