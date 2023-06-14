#include <iostream>

int main() {
    int number, reverse = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int temp = number;  // Store the original number in a temporary variable

    while (temp != 0) {
        int digit = temp % 10;  // Extract the rightmost digit
        reverse = reverse * 10 + digit;  // Append the digit to the reverse number
        temp /= 10;  // Remove the rightmost digit
    }

    std::cout << "Reverse of the number: " << reverse << std::endl;

    return 0;
}
