#include <iostream>

int main() {
    int number, sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int temp = number;  // Store the original number in a temporary variable

    while (temp != 0) {
        int digit = temp % 10;  // Extract the rightmost digit
        sum += digit;  // Add the digit to the sum
        temp /= 10;  // Remove the rightmost digit
    }

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
