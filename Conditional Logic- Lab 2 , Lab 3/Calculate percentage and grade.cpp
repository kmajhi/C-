#include <iostream>

int main() {
    int physics, chemistry, biology, mathematics, computer;
    double totalMarks, percentage;

    // Input marks
    std::cout << "Enter the marks of five subjects: Physics, Chemistry, Biology, Mathematics, and Computer:\n";
    std::cin >> physics >> chemistry >> biology >> mathematics >> computer;

    // Calculate total marks and percentage
    totalMarks = physics + chemistry + biology + mathematics + computer;
    percentage = (totalMarks / 500) * 100;

    // Assign grade based on percentage
    char grade;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Output percentage and grade
    std::cout << "Percentage: " << percentage << "%" << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}
