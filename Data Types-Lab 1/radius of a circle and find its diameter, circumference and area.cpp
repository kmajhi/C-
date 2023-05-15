#include <iostream>
using namespace std;

const float PI = 3.14159;

int main() {
    float radius, diameter, circumference, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    cout << "The diameter of the circle is: " << diameter << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
