#include <iostream>

bool isPerfect(int number) {
    int sum = 0;

    // Calculate the sum of proper divisors of the number
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if the sum is equal to the number
    return (sum == number);
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (isPerfect(number)) {
        std::cout << number << " is a perfect number." << std::endl;
    } else {
        std::cout << number << " is not a perfect number." << std::endl;
    }

    return 0;
}
