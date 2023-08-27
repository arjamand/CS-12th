
#include <iostream>
using namespace std;


int main() {
    int intArray[5] = {10, 25, 18, 42, 57};

    // Using for loop
    for (int i = 0; i < 5; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    // Using while loop
    int i = 0;
    while (i < 5) {
        cout << intArray[i] << " ";
        ++i;
    }
    cout << endl;

    // Using do-while loop
    i = 0;
    do {
        cout << intArray[i] << " ";
        ++i;
    } while (i < 5);
    cout << endl;

    cout << "Size of intArray: " << sizeof(intArray) << " bytes" << endl;

    return 0;
}
