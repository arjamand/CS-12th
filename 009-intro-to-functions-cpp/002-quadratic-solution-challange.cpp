// 2023-09-12 05:43:07


#include <iostream>
#include <cmath>
using namespace std;
    
int q_solution (float a, float b, float c){
    float answer_1 = ((-1*b)+ (sqrt((b*b)+(4*a*c))))/(2*a);
    float answer_2 = ((-1*b)- (sqrt((b*b)+(4*a*c))))/(2*a);
    cout <<endl<< "Answer 1 : " << answer_1 <<endl  << "Answer 2 : "<< answer_2 ;
}

int main(){

    float a;
    float b;
    float c;
    cout << "Solving Quadratic Equation ( ax^2 + bx + c = 0)"<<endl;
    cout << "Enter the value of \"a\" : ";
    cin >> a;
    cout <<endl << "Enter the value of \"b\" : ";
    cin >> b;
    cout <<endl << "Enter the value of \"c\" : ";
    cin >> c;

    q_solution(a, b, c);
}
