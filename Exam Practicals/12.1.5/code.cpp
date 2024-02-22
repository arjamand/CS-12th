// 21/02/2024 04:10 PM
// 12.1.5 Write a program using switch statement

#include <iostream>

using namespace std ;

int main(){
    int day_num ;

    cout << "Enter day number : ";
    cin >> day_num;

    switch(day_num){
        case 1 :
            cout << "Day " << day_num << " : Monday ";
            break ;
        case 2 :
            cout << "Day " << day_num << " : Tuesday ";
            break ;
        case 3 :
            cout << "Day " << day_num << " : Wednesday ";
            break ;
        case 4 :
            cout << "Day " << day_num << " : Thursday ";
            break ;
        case 5 :
            cout << "Day " << day_num << " : Friday ";
            break ;
        case 6 :
            cout << "Day " << day_num << " : Saturday ";
            break ;
        case 7 :
            cout << "Day " << day_num << " : Sunday ";
            break ;
        default :
            cout << "Invalid input !!!";
         
    }
}
