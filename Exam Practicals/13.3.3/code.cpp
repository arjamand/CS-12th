// 2024-02-27 05:02:35
/* 13.3.3 Write C++ program to perform various operations on string using string fucntions , 
i.e. strcpy, strcat, strlen and strcmp */

#include <iostream>
#include <cstring>

using namespace std;

int main(){

    // strcpy()
    char destination[] = "" ;
    char source[] = "arjamand ali";

    cout << "\nTesting copying string from variable to variable 'strcpy()'.\n";
    cout << "Destination string : "<< destination << "\nSource string : "<< source ;

    //copying string from source variable to destination variable
    strcpy(destination, source);

    cout << "\n\nDestination string  : "<< destination << "\nSource string : "<< source <<endl;


    //strcat()
    char first_name[] = "Arjamand " ;
    char last_name[] = "Ali" ;

    cout << "\nTesting concatenating two variables with 'strcat()'.\n";
    cout << "First name string  : "<< first_name << "\nLast name string string : "<< last_name ;

    // concatenating last_name to first_name
    strcat(first_name, last_name) ;

    cout << "\n\nFirst name string  : "<< first_name << "\nLast name string string : "<< last_name ;


    // strlen()
    char name[] = "Arjamand" ;
    
    cout << "\n\nFinding lenght of a string with  'strlen()'.\n";


    // finding length of the string 
    int lenght = strlen(name);

    cout << "The lenght of the string "<< name << " is "<< lenght ;

    // strcmp()

    char str_1 [] = "Arjamand" ;
    char str_2 [] = "Ali";

    cout << "\n\nComparing 'str_1 = Arjamand' and 'str_2 = Ali' wth strcmp() .\n";
    // comparing str 1 and str 2 
    int result = strcmp(str_1, str_2);

    if (result == 0){
        cout << "The strings are of equal length .";

    }
    else if (result < 0){
        cout << "The lenght of str1 is smaller then str2 .";

    }
    else {
        cout << "The lenght of str1 larger than str2 . ";
    }


    
}