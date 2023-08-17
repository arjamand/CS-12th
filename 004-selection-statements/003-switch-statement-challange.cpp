/*

Write a program in cpp using switch statements which :
1. Takes score input from user 
2. Return the grade according to the score using switvh statement

*/

#include <iostream>
using namespace std;

void result(int score) {
    switch (score - (score % 10)) {
        case 100:
            cout << "Distinction";
            break;
        case 90:
            cout << "A++";
            break;
        case 80:
            cout << "A+";
            break;
        case 70:
            cout << "A";
            break;
        case 60:
            cout << "B";
            break;
        case 6:
            cout << "C";
            break;
        case 7:
            cout << "D";
            break;
        default:
            cout << "invalid score";
            break;
    }
}

int main() {
    int score; 
    cout << "Enter your score+ between (0 - 100): ";
    cin >> score; // Taking user input as int
    result(score); // Calling the result funct with the score

    return 0;
}

