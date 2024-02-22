// 21/02/2024 03:44 PM
// 12.1.2 Write a program for each if, if-else and else-if.

#include <iostream>

using namespace std ;

int main(){
    int chk_num ;
    cout << "Please Input a number to see if its EVEN or ODD : ";
    cin >> chk_num ;

    int reminder = chk_num % 2 ;

    if (reminder == 0){
        cout << "Your Input is a EVEN number .";
    }
    else if (reminder != 0){
        cout << "Your Input is a ODD number .";
    }
    else {
        cout << "error";
    }

}