#include <iostream>

int main() {
    int number, firstDigit, lastDigit;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Extracting the last digit
    lastDigit = number % 10;

    // Finding the first digit
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    std::cout << "First digit: " << firstDigit << std::endl;
    std::cout << "Last digit: " << lastDigit << std::endl;

    return 0;
}
