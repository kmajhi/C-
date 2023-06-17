#include <iostream>

int factorial(int number) {
    if (number == 0) {
        return 1;
    }

    int fact = 1;
    for (int i = 1; i <= number; ++i) {
        fact *= i;
    }

    return fact;
}

bool isStrong(int number) {
    int originalNumber = number;
    int sum = 0;

    // Calculate the sum of factorials of each digit
    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += factorial(digit);
        originalNumber /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == number);
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (isStrong(number)) {
        std::cout << number << " is a strong number." << std::endl;
    } else {
        std::cout << number << " is not a strong number." << std::endl;
    }

    return 0;
}
