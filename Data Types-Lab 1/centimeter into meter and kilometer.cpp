#include <iostream>

int main() {
    double centimeters, meters, kilometers;

    // Input length in centimeters
    std::cout << "Enter length in centimeters: ";
    std::cin >> centimeters;

    // Conversion
    meters = centimeters / 100.0;
    kilometers = centimeters / 100000.0;

    // Output
    std::cout << "Length in meters: " << meters << std::endl;
    std::cout << "Length in kilometers: " << kilometers << std::endl;

    return 0;
}
