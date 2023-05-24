#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        cout << "The character is an alphabet." << endl;
    } else {
        cout << "The character is not an alphabet." << endl;
    }

    return 0;
}
