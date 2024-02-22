// 22/02/2024 03:02 PM
// 12.2.4 Write a C++ program that uses do while loop.

#include <iostream>

using namespace std ;

int main(){
    int num_1 ;
    int num_2 ;
    string exit_opt ;

    do{
        cout << "\n\nOnly Addition Calculator . \nInput first integer : ";
        cin >> num_1 ;

        cout << "Input another integer : ";
        cin >> num_2 ;

        cout << "The Sum of "<< num_1 << " and " << num_2 << " is " << num_1 + num_2 ;

        cout << "\nEnter 'exit' to exit or 'again'  to go once again : ";
        cin >> exit_opt ;
    }
    while(exit_opt != "exit");
}

