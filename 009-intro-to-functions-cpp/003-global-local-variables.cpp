// 2023-09-18 04:13:48

#include <iostream>
using namespace std ;

/*  "a" and "b" are example of global variables
    they are accessible throughout the program 
*/
int a = 12, b = 15 ;

int add(){
    /* "answer" is an example of local variable
        it is only accessible inside this function 
    */ 
    int answer_1;   
    answer_1 = a + b;
    cout << answer_1 ;

}

int product(){
    int answer_2 ; // local variable
    answer_2 = a * b ; // example of using global var throughout the program
    cout <<endl << answer_2 ;
}
int main(){
    add();
    product();

}