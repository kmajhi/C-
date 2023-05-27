#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients
    std::cout << "Enter the coefficients of the quadratic equation (a, b, c):" << std::endl;
    std::cin >> a >> b >> c;

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check discriminant value
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and distinct." << std::endl;
        std::cout << "Root 1: " << root1 << std::endl;
        std::cout << "Root 2: " << root2 << std::endl;
    } else if (discriminant == 0) {
        // One real root (repeated root)
        root1 = -b / (2 * a);
        std::cout << "Roots are real and identical." << std::endl;
        std::cout << "Root: " << root1 << std::endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex and imaginary." << std::endl;
        std::cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}
