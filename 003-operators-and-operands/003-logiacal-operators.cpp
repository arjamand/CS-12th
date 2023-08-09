// 2023-08-09 03:17:54

#include <iostream>
using namespace std;

int main(){

    int age ;

    cout << "Please input your age :" ; 
    cin >> age ;

    if (age >= 28){
        cout << "you are allowed to sit in the sesion."<<endl;
    }
    else {
        cout << "You are not old enough ." ;
    }
    
    // task 2
    string fruit ;

    cout << "Input a fruit name ; ";
    cin >> fruit;

    if (fruit == "apple"){
        cout << "this is a fruit";
        
    }
    else {
        cout << "this is not a apple ";
    }
       
}



