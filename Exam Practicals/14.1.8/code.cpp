// 2024-02-28 09:26:43
// 14.1.8 Write a program involving user defined function to calculate average of numbers.

#include <iostream>

using namespace std ;

float Average(){
    float avg = 0 ;
    float next_num ;
    float counter = 0 ;

    cout << "Finding avg of user provided numbers .\nEnter 0 to exit and get the avg .\n";

    while (next_num != 0 ){
        cout << "Enter next num : " ;
        cin >> next_num ;

        if (next_num != 0) {
            avg += next_num ;
            counter++ ;
        }
    }

    cout << "The average of the given numbers is " << avg/counter ; 


}
int main() {
    
    Average();
}



PS C:\Users\ar\Documents\GitHub\CS-12th\Exam Practicals\14.1.8> g++ code.cpp -o code
PS C:\Users\ar\Documents\GitHub\CS-12th\Exam Practicals\14.1.8> .\code 
Finding avg of user provided numbers .
Enter 0 to exit and get the avg .
Enter next num : 1
Enter next num : 2
Enter next num : 3
Enter next num : 4
Enter next num : 5
Enter next num : 6
Enter next num : 7
Enter next num : 8
Enter next num : 9
Enter next num : 10
Enter next num : 11
Enter next num : 12
Enter next num : 0
The average of the given numbers is 6.5
