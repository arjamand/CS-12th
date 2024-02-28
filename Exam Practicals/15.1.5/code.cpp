// 2024-02-28 10:20:27
/*
15.1.5 Write a simple program using & to return memory address of a variable and storing it 
in a pointer variable
*/

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


