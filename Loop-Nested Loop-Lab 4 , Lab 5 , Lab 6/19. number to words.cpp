#include <iostream>
#include <string>

std::string convertNumberToWords(int number) {
    // Arrays to store the words for numbers up to 19 and multiples of 10 up to 90
    std::string below20[] = {"",  "One", "Two",   "Three", "Four",   "Five",
                             "Six", "Seven", "Eight", "Nine",   "Ten",
                             "Eleven", "Twelve", "Thirteen", "Fourteen",
                             "Fifteen", "Sixteen", "Seventeen", "Eighteen",
                             "Nineteen"};

    std::string tens[] = {"", "",   "Twenty",  "Thirty", "Forty", "Fifty",
                          "Sixty", "Seventy", "Eighty", "Ninety"};

    if (number < 20) {
        return below20[number];
    }

    if (number < 100) {
        return tens[number / 10] + " " + below20[number % 10];
    }

    if (number < 1000) {
        return below20[number / 100] + " Hundred " + convertNumberToWords(number % 100);
    }

    if (number < 1000000) {
        return convertNumberToWords(number / 1000) + " Thousand " + convertNumberToWords(number % 1000);
    }

    if (number < 1000000000) {
        return convertNumberToWords(number / 1000000) + " Million " + convertNumberToWords(number % 1000000);
    }

    return "Number out of range";
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::string numberInWords = convertNumberToWords(number);
    std::cout << "Number in words: " << numberInWords << std::endl;

    return 0;
}
