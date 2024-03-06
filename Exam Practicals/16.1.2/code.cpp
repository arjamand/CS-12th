// 2024-03-06 09:16:22
/*
* Write a C++ program to declare a class along with data members and member 
* functions in its body and create the objects of class in the main( ) function and call 
* member functions of class with the help of objects.
*/

#include <iostream>

using namespace std ;

class Calculator{
    public :
        CalAdd(){
            int num_1 ;
            int num_2 ;

            cout << "Addition \nEnter Num 1 : ";
            cin >> num_1 ;

            cout <<"Enter Num 2 : ";
            cin >> num_2 ;

            cout << "Answer : "<< num_1 + num_2 ;

        }

};
int main(){
    Calculator obj1 ;
    obj1.CalAdd();
    
    return 0;
}

