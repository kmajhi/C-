#include <iostream>

// Function to calculate the factorial of a number
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is negative
    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long result = factorial(number);
        std::cout << "Factorial of " << number << " = " << result << std::endl;
    }

    return 0;
}
