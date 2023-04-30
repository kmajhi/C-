#include <iostream>

using namespace std;

int main() {
    int marks;
    char grade;

    cout << "Enter the marks obtained by the student (out of 100): ";
    cin >> marks;

    if (marks < 30) {
        grade = 'C';
    } else if (marks < 70) {
        grade = 'B';
    } else if (marks < 90) {
        grade = 'A';
    } else {
        grade = 'A+';
    }

    cout << "The grade obtained by the student is: " << grade << endl;

    return 0;
}
