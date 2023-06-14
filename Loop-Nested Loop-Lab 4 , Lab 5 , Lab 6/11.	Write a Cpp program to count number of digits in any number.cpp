#include <iostream>

int main() {
    int number, count = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    while (number != 0) {
        number /= 10;
        count++;
    }

    std::cout << "Number of digits: " << count << std::endl;

    return 0;
}
