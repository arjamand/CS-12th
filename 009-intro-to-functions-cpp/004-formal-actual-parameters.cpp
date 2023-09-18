// 2023-09-18 04:24:12

#include <iostream>
using namespace std ;

/* 
    "int a " and "int b" inside the round brackets
    infront of add and product functions are examples
    of format parameters .

    line 28 and 29 ; x and y are examples of actual parameters
*/
int add(int a, int b){
    int answer_1;   
    answer_1 = a + b;
    cout << answer_1 ;

}

int product(int a, int b){
    int answer_2 ; 
    answer_2 = a * b ;
    cout <<endl << answer_2 ;
}

int main(){
    int x = 12, y = 15 ;
    add(x, y);
    product(x, y);

}