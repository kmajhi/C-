#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Initialize the counter
    int i = n;

    // Print the natural numbers in reverse using a while loop
    while (i >= 1) {
        cout << i << " ";
        i--;
    }

    return 0;
}
