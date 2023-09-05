// 2023-09-05 08:56:56

#include <iostream>     
using namespace std;  

int main()
{
    char str_1 = 'H';  // Declare and initialize a character variable 
    char str_2[10] = "Hello";  // Declared a character array with a predefined lenght using char
    string str_3 = "Hello World";  // Declare a string variable using string 
    char day[10]; // Defined an empty cahracter array

    cout <<"Day : ";
    cin.get(day, 10);  //  Store first 10 characters of user input in "day"
    cout <<"day = "<<day<<endl; 

    cout << str_1 <<endl<< str_2 << endl << str_3 ; 
    return 0;  
}
