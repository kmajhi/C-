#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Input the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Initialize the counter
    int i = 1;

    // Print the natural numbers using a while loop
    while (i <= n) {
        cout << i << " ";
        i++;
    }

    return 0;
}
