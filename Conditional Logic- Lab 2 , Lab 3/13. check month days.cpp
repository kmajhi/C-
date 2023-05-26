#include <iostream>

int main() {
    int month;

    // Input month number
    std::cout << "Enter the month number (1-12): ";
    std::cin >> month;

    // Check the number of days based on the month number
    int days;
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
        case 2:  // February
            days = 28;
            break;
        default:
            std::cout << "Invalid month number!" << std::endl;
            return 0;
    }

    // Print the number of days
    std::cout << "Number of days in month " << month << ": " << days << std::endl;

    return 0;
}
