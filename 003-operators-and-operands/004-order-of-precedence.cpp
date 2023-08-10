// 2023-08-10 05:08:24

#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    float a, b, c, d;

    // Prompt user for input
    cout << "Enter Value of A: ";
    cin >> a;

    cout << "Enter Value of B: ";
    cin >> b;

    cout << "Enter Value of C: ";
    cin >> c;

    cout << "Enter Value of D: ";
    cin >> d;

    // Perform calculations
    float result = (a + b) * c / d;
    float result1 = ((a + b) / c) * d;
    float result2 = (a + b) / (a - b) / (c * d);

    // Display results
    cout << "Result = " << result << endl;
    cout << "Result 1 = " << result1 << endl;
    cout << "Result 2 = " << result2;

    return 0;
}
