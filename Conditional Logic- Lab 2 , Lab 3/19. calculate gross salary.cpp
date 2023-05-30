#include <iostream>
using namespace std;

int main() {
    float basicSalary, grossSalary, hra, da;

    // Input basic salary
    cout << "Enter the basic salary: ";
    cin >> basicSalary;

    // Calculate HRA and DA based on basic salary
    if (basicSalary <= 10000) {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } else {
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Display the gross salary
    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}
