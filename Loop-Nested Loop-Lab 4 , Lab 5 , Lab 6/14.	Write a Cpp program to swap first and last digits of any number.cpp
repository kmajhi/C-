#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int temp = number;  // Store the original number in a temporary variable

    // Find the number of digits in the input number
    int digitCount = 0;
    while (temp != 0) {
        temp /= 10;
        digitCount++;
    }

    // Calculate the power of 10 needed to extract the first digit
    int powerOf10 = 1;
    for (int i = 1; i < digitCount; i++) {
        powerOf10 *= 10;
    }

    // Extract the first and last digits
    int firstDigit = number / powerOf10;
    int lastDigit = number % 10;

    // Swap the first and last digits
    int swappedNumber = lastDigit * powerOf10;
    swappedNumber += number % powerOf10;  // Add the remaining digits
    swappedNumber -= lastDigit;
    swappedNumber += firstDigit;

    std::cout << "Number after swapping first and last digits: " << swappedNumber << std::endl;

    return 0;
}
