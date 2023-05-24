#include <iostream>

int main() {
    char character;
    std::cout << "Enter an alphabet: ";
    std::cin >> character;

    // Converting the character to lowercase for simplicity
    character = tolower(character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
        std::cout << "The character is a vowel." << std::endl;
    } else {
        std::cout << "The character is a consonant." << std::endl;
    }

    return 0;
}
