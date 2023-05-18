#include <iostream>

int main() {
    double celsius, fahrenheit;

    // Input temperature in Celsius
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    // Conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
