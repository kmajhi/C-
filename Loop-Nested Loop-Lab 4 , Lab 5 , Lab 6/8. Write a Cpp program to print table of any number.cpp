#include <iostream>

int main() {
    int n, limit;

    std::cout << "Enter the number: ";
    std::cin >> n;

    std::cout << "Enter the limit: ";
    std::cin >> limit;

    std::cout << "Table of " << n << " up to " << limit << ":\n";

    for (int i = 1; i <= limit; i++) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }

    return 0;
}
