// 22/02/2024 03:47 PM
/* 13.1.7 Write a C++ program which stores numeric values in a one dimensional array using 
 for loop and finds the highest, lowest and average values. */ 

#include <iostream>

using namespace std;

int main(){
    const int size = 5;
    int numbers[size];
    double sum = 0;

    // Input values
    for (int i = 0; i < size; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Finding highest and lowest values
    int highest = numbers[0];
    int lowest = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }

    // Calculate average
    double average = sum / size;

    // Output results
    cout << "\nHighest value: " << highest << endl;
    cout << "Lowest value: " << lowest << endl;
    cout << "Average value: " << average << endl;

}