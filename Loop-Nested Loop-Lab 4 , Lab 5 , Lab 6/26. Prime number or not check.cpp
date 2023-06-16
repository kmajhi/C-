#include <iostream>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;

    // Check if num is divisible by any number from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int num;

    // Read the number from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is prime
    bool result = isPrime(num);

    // Display the result
    if (result)
        std::cout << num << " is a prime number." << std::endl;
    else
        std::cout << num << " is not a prime number." << std::endl;

    return 0;
}
