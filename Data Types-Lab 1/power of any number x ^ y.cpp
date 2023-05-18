#include <iostream>
#include <cmath>

int main() {
    double x;
    int y;

    // Input base (x) and exponent (y)
    std::cout << "Enter the base (x): ";
    std::cin >> x;
    std::cout << "Enter the exponent (y): ";
    std::cin >> y;

    // Calculate power
    double result = pow(x, y);

    // Output
    std::cout << x << " ^ " << y << " = " << result << std::endl;

    return 0;
}
