#include <iostream>

int main() {
    int amount;
    std::cout << "Enter the amount: ";
    std::cin >> amount;

    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 1};
    int totalNotes = 0;

    for (int i = 0; i < 8; i++) {
        if (amount >= denominations[i]) {
            int notes = amount / denominations[i];
            totalNotes += notes;
            amount %= denominations[i];
        }
    }

    std::cout << "Total number of notes: " << totalNotes << std::endl;

    return 0;
}
