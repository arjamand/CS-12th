// 21/02/2024 03:57 PM
// 12.1.3 Write a program using nested if statement.

#include <iostream>

using namespace std;

int main(){
    int num = 26;
    int guess ;

    cout << "Guess the number between 20 and 30 :  ";
    cin >> guess;

    if (guess >= 20 && guess <= 30  ){
        if (guess == num ){
            cout << "You Guesses it right !!!";
        }
        else{
            cout << "Wrong Guess .";
        }
   }
    else{
        cout << "Out of range .";
    }
}
