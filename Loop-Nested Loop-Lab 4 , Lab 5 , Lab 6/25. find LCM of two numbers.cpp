#include <iostream>

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b) {
    // Calculate the product of the two numbers
    int product = a * b;

    // Calculate the GCD
    int gcdValue = gcd(a, b);

    // Calculate the LCM using the formula: LCM = product / GCD
    int lcmValue = product / gcdValue;

    return lcmValue;
}

int main() {
    int num1, num2;

    // Read the two numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate and display the LCM
    int result = lcm(num1, num2);
    std::cout << "The LCM of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}
