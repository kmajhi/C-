#include <iostream>

int main() {
    int side1, side2, side3;

    // Input sides
    std::cout << "Enter the three sides of the triangle:\n";
    std::cin >> side1 >> side2 >> side3;

    // Check triangle type
    if (side1 == side2 && side2 == side3) {
        std::cout << "The triangle is equilateral." << std::endl;
    } else if (side1 == side2 || side2 == side3 || side3 == side1) {
        std::cout << "The triangle is isosceles." << std::endl;
    } else {
        std::cout << "The triangle is scalene." << std::endl;
    }

    return 0;
}
