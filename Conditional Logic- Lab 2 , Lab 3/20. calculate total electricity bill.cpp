#include <iostream>
using namespace std;

int main() {
    float unitCharges, totalBill;
    float surcharge = 0.2; // 20% surcharge

    // Input electricity unit charges
    cout << "Enter the electricity unit charges: ";
    cin >> unitCharges;

    if (unitCharges <= 50) {
        totalBill = unitCharges * 0.50;
    } else if (unitCharges <= 150) {
        totalBill = (50 * 0.50) + ((unitCharges - 50) * 0.75);
    } else if (unitCharges <= 250) {
        totalBill = (50 * 0.50) + (100 * 0.75) + ((unitCharges - 150) * 1.20);
    } else {
        totalBill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unitCharges - 250) * 1.50);
    }

    // Add surcharge to the bill
    totalBill += totalBill * surcharge;

    // Display the total electricity bill
    cout << "Total Electricity Bill: " << totalBill << endl;

    return 0;
}
