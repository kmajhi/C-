#include <iostream>

int main() {
    double fahrenheit, celsius;

    // Input temperature in Fahrenheit
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    // Conversion
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output
    std::cout << "Temperature in Celsius: " << celsius << std::endl;

    return 0;
}
