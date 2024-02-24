// 2024-02-23 05:16:56
/*
14.1.6 Write a program involving user defined function to calculate area of circle, triangle 
and parallelogram
*/

#include <iostream>

using namespace std ;

float AreaOfSquare(){
    float lenght ;

    cout << "Please input the lenght of side of the square : ";
    cin >> lenght ;

    cout << "The Area of the square is : "<< lenght * lenght ;
}

float AreaOfTriangle(){
    float base ;
    float height ;

    cout << "Enter base of the triangle : ";
    cin >> base ;

    cout << "Enter height of Triangle : ";
    cin >> height ;

    float area = (base * height)/2 ;

    cout << "Area of the triangle : " << area;

}

float AreaOfParallelogram(){
    float lenght ;
    float width ;

    cout << "Enter lenght of the Parallelogram : ";
    cin >> lenght ;

    cout << "Enter width of Parallelogram : ";
    cin >> width ;

    float area = (lenght * width) ;

    cout << "Area of the Parallelogram : " << area;



}


int main(){
    int option ;

    cout << "Area Calculator .\n1. Find the Area of Square \n2. Find the Area of Triangle \n3. Find the Area of Parallelogram \n>>> ";
    cin >> option ;

    if (option == 1){
        AreaOfSquare();
    }
    else if (option == 2){
        AreaOfTriangle();
    }
    else if (option == 3){
        AreaOfParallelogram();
    }
    else {
        cout << "Error !!! ";

    }

    return 0 ;

}

