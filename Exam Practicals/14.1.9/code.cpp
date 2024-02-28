// 2024-02-28 09:08:05
//14.1.9 Write a program involving user defined function to calculate factorial of a given number.

#include <iostream>

using namespace std;

int factorial(int f_num){
    int h_limit = f_num;
    int counter = 0 ;
    int factorial = 1 ;

    while (counter < h_limit){
        counter += 1 ;
        factorial = factorial*counter ;

    }

    cout << h_limit <<"! = "<< factorial ;


}

int main (){
    int f_num ;
    cout << "Finding Factorial of any integer .\nEnter number to find its factorial : ";
    cin >> f_num ;

    factorial(f_num);


}





PS C:\Users\ar\Documents\GitHub\CS-12th\Exam Practicals\14.1.8> g++ code.cpp -o code 
PS C:\Users\ar\Documents\GitHub\CS-12th\Exam Practicals\14.1.8> .\code 
Finding Factorial of any integer .
Enter number to find its factorial : 16
16! = 2004189184
