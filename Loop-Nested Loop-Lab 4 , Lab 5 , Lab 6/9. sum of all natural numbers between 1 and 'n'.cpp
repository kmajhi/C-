#include <iostream>

int main() {
    int n, sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    std::cout << "Sum of natural numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}
