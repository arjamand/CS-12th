#include <iostream>

using namespace std;

int main() {
    int base1, base2, height;

    // Get input from the user
    cout << "Enter the length of the first base: ";
    cin >> base1;

    cout << "Enter the length of the second base: ";
    cin >> base2;

    cout << "Enter the height: ";
    cin >> height;

    // Calculate the area using a compound expression
    int area = (base1 + base2) * height / 2;

    // Output the result
    cout << "The area of the trapezoid is: " << area << endl;

    return 0;
}
