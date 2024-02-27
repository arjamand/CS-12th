// 2024-02-27 02:48:15
// 12.2.3 Write a C++ program that uses while loop.

#include <iostream>
using namespace std ;

int main() {
    int h_limit ;
    int counter = 0 ;
    int factorial = 1 ;
    
    cout << "Finding Factorial of any integer .\nEnter number to find its factorial : ";
    cin >> h_limit ;

    while (counter < h_limit){
        counter += 1 ;
        factorial = factorial*counter ;
    }

    cout << h_limit <<"! = "<< factorial ;

}





