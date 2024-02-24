// 2024-02-23 04:31:28
/*
14.1.5 Write a program involving user defined function to perform basic arithmetic 
operations, i.e. add, subtract, multiply and divide.
*/

#include <iostream>
using namespace std;


double calculate(float n1, float n2){

    string operation ;
    cout << endl << "Select your operation . \n1. Addition \n2. Subtraction \n3. Division \n4. Multiplication \n>>> ";
    cin >> operation ;

    cout << endl ;

    if (operation == "1"){
        cout << "The sum of "<< n1 << " and " << n2 << " = " << n1 + n2 ; 
    }
    else if (operation == "2"){
        cout << "The difference of "<< n1 << " and " << n2 << " = " << n1 - n2 ; 
    }
    else if (operation == "3"){
        cout << "The quotient of "<< n1 << " and " << n2 << " = " << n1/n2 ; 
    }
    else if (operation == "4"){
        cout << "The product of "<< n1 << " and " << n2 << " = " << n1*n2 ; 
    }

}

int main(){
    float num_1;
    float num_2;

    cout << endl <<"Welcome to simple CLI Calculator. \nEnter first integer : ";
    cin >> num_1 ;

    cout << "Enter second integer : ";
    cin >> num_2 ;

    calculate (num_1, num_2);

    return 0 ;


}

PS C:\Users\ar\Documents\GitHub\CS-12th\Exam Practicals\14.1.5> g++ code.cpp -o code  
PS C:\Users\ar\Documents\GitHub\CS-12th\Exam Practicals\14.1.5> .\code

Welcome to simple CLI Calculator. 
Enter first integer : 13
Enter second integer : 2

Select your operation .
1. Addition
2. Subtraction
3. Division
4. Multiplication
>>> 3

The quotient of 13 and 2 = 6.5
