#include <iostream>

int main() {
    int side1, side2, side3;

    // Input sides
    std::cout << "Enter the three sides of the triangle:\n";
    std::cin >> side1 >> side2 >> side3;

    // Check validity
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2 && side1 > 0 && side2 > 0 && side3 > 0) {
        std::cout << "The triangle is valid." << std::endl;
    } else {
        std::cout << "The triangle is not valid." << std::endl;
    }

    return 0;
}
