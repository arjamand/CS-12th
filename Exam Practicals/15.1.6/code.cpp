// 2024-02-28 10:46:58
// 15.1.6 Write a C++ program that uses pointer variable.

#include <iostream>

using namespace std ;

int main(){
    float x = 5 ;
    float *xPointer ;

    xPointer = &x ;

    cout << "\nThe value of x = \t"<< x ;
    cout << "\nThe address of variable x = \t"<< &x ;
    cout << "\nThe value of xPointer = \t"<< xPointer ;

}

