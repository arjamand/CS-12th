// 2023-08-31 06:23:48

/*
Modify prevously practiced code where we 
stored user inputs in variables and use arrays 
this time .
*/

#include <iostream>
using namespace std;

int main(){
    int marks[8];
    int total_marks = 800;
    float obt_marks ;
    obt_marks = 0;

    for (int i = 0; i<8; i++  ){
        cout << "Subject "<<(i + 1) <<" marks (out of 100) : " ;
        cin >> marks[i]  ;
        obt_marks += marks[i];
        
    }
    
    float percent = (obt_marks/total_marks)*100;
    cout<<endl<<"The Percentage obtained is "<<percent<<"%";
}
