// 21/02/2024 04:22 PM
// 12.2.2 Write a C++ program that uses for loop

#include <iostream>

using namespace std ;

int main(){
    int num = 33 ;
    int guess ;

    for (int i = 0; i < 5; ++i ){
        cout << "\nGuess the number between 30 and 40 .\nYou have 5 attempts.";
        cout << "Guess (Attempt " << i+1 << " ) : " ;
        cin >> guess ;

        if (guess == num){
            cout <<"Yay !! Correct guess .";
            break ;
        }
    }   
    
}