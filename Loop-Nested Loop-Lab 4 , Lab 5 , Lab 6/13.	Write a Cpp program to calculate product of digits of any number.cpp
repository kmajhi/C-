#include <iostream>

int main() {
    int number, product = 1;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int temp = number;  // Store the original number in a temporary variable

    while (temp != 0) {
        int digit = temp % 10;  // Extract the rightmost digit
        product *= digit;  // Multiply the digit with the product
        temp /= 10;  // Remove the rightmost digit
    }

    std::cout << "Product of digits: " << product << std::endl;

    return 0;
}
