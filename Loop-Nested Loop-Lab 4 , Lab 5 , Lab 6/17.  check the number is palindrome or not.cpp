#include <iostream>

bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (reversedNumber == originalNumber) {
        return true; // Palindrome
    } else {
        return false; // Not a palindrome
    }
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
