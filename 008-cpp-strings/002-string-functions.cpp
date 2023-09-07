// 2023-09-06 21:42:49

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char str_1[] = "Hello this is string function test string number 1 ";
    char str_2[] = "Hello this is string function test string number 2 ";
    char copied_str_1[100]; 

    // Using strcpy function to copy string from one to another
    strcpy(copied_str_1, str_2); 

    // Using strlen() funct to find the lenght of a string 
    cout << "The length of the string \"str_1\" is: " << strlen(str_1) << endl;
    cout << "Original string: " << str_1 << endl;
    cout << "Copied String: " << copied_str_1 << endl;

    // Concatenate str_2 to str_1 using strcat
    strcat(str_1, str_2);

    cout << "After concatenation, str_1 contains: " << str_1 << endl;

    // Compare str_1 and str_2 using strcmp
    int cmpResult = strcmp(str_1, str_2);
    if (cmpResult == 0) {
        cout << "Both strings are equal." << endl;
    } else if (cmpResult < 0) {
        cout << "str_1 is less than str_2." << endl;
    } else {
        cout << "str_1 is greater than str_2." << endl;
    }

    return 0;
}
