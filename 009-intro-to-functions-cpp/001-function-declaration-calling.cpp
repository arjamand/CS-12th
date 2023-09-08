// 2023-09-08 05:14:42

#include <iostream>
using namespace std;

// add is an example of a user defined function 
int add(int a , int b){
    return a + b ;

}

// another example of user defined function
int subtract(int a, int b){
    return a - b ;
}

int main (){
    /*
    - Giving the function arguments and the function returning the sum and difference 
    - Using the function multiple times 
    - cout itsef is 
    */   
    cout <<"Additon of 20 and 30 is "<< add(20, 30) << endl ;
    cout <<"Additon of 300 and 8376 is "<< add(300, 8376) << endl ;

    cout <<"Difference of 30 and 20 is "<< subtract(30, 20) << endl ;
    cout <<"Difference of 80 and 90 is "<< subtract(80, 90);



}


