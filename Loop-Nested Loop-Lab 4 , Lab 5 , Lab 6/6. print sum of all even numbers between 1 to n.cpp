#include <iostream>

int main() {
    int n;
    int sum = 0;

    std::cout << "Enter a number (n): ";
    std::cin >> n;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    std::cout << "Sum of even numbers between 1 and " << n << " is: " << sum << std::endl;

    return 0;
}
