#include <iostream>

int main() {
    int days, years, weeks, remainingDays;

    // Input number of days
    std::cout << "Enter the number of days: ";
    std::cin >> days;

    // Conversion
    years = days / 365;
    weeks = (days % 365) / 7;
    remainingDays = (days % 365) % 7;

    // Output
    std::cout << "Years: " << years << std::endl;
    std::cout << "Weeks: " << weeks << std::endl;
    std::cout << "Days: " << remainingDays << std::endl;

    return 0;
}
