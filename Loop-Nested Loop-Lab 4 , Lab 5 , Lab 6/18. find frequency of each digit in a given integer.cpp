#include <iostream>
#include <unordered_map>

void findDigitFrequency(int number) {
    std::unordered_map<int, int> digitFrequency;

    // Count the frequency of each digit
    while (number != 0) {
        int digit = number % 10;
        digitFrequency[digit]++;
        number /= 10;
    }

    // Display the frequency of each digit
    std::cout << "Frequency of each digit:" << std::endl;
    for (const auto& entry : digitFrequency) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
}

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    findDigitFrequency(number);

    return 0;
}
