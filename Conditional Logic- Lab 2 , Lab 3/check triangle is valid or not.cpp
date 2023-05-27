#include <iostream>

int main() {
    int angle1, angle2, angle3;

    // Input angles
    std::cout << "Enter the three angles of the triangle:\n";
    std::cin >> angle1 >> angle2 >> angle3;

    // Check validity
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        std::cout << "The triangle is valid." << std::endl;
    } else {
        std::cout << "The triangle is not valid." << std::endl;
    }

    return 0;
}
