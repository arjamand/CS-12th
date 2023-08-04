// 2023-08-04 05:56:16

#include <iostream>
#include <iomanip>

using namespace std;

int esc_seq () {
    cout <<"Escape Sequences ." <<endl ;

    //alert: produce audible or visible alert
    cout << "This is an alert:\a" ; 

    //backspace: erase and move one position backwards
    cout << "This is some text\b with a backspace." <<endl; 

    //newline: creates a newline and moves cursor to the new line 
    cout << "This is a new line.\n";

    //carriage return: moves cursor to the start 
    cout << "This is a carriage return.\r";

    //tab: consistent spacing 
    cout << "This\tis\ta\ttab\tseparated\ttext." <<endl;

    /*
    backslash: as single backslash is used to escape charactors,
    we use doble slash "\\" to get output of "\".
    */
    cout << "Displaying a backslash: \\\\" <<endl;


    /*
    Display single quotation mark (') or (") in btw a string .
     Place it after the \ so that it is escaped and not 
     identified as the ending quot mark of the string .
    */
    cout << "Displaying single quotation marks: \'" <<endl;    
}
    

int manipulators () {
    /* 
    The setw() manipulator :  Sets the width of the next output field to some 
    x (x may be a var but it should be an integer) characters. It's commonly 
    used to format text in columns, ensuring a specific width for each field.
    */
    cout <<endl<<"Students of Class 12 CS" <<endl <<"Total score : 35" <<endl;
    cout << setw(10) << "Name" << setw(15) << "Score" << endl;
    cout << setw(10) << "Asad" << setw(15) << 25 << endl;
    cout << setw(10) << "Shahid" << setw(15) << 30 <<  endl;
    cout << setw(10) << "Faizan" << setw(15) << 22 << endl;
}


int main () {

    //Calling the functions 
    esc_seq();
    manipulators();
    
}
