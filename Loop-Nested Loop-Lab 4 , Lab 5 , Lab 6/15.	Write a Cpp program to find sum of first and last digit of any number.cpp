#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int lastDigit = number % 10;  // Extract the last digit

    while (number >= 10) {
        number /= 10;  // Remove the rightmost digit until the number becomes a single digit
    }

    int firstDigit = number;  // The remaining single digit is the first digit

    int sum = firstDigit + lastDigit;

    std::cout << "Sum of first and last digits: " << sum << std::endl;

    return 0;
}
