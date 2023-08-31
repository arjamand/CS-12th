// 2023-08-31 06:33:40

//add , subtract , divide and multiply 2D 4x4 arrays

#include <iostream>

using namespace std;

int main()
{
    int matrix_1[4][4] = {
        1,1,1,1,
        2,2,2,2,
        3,3,3,3,
        4,4,4,4
    };

    int matrix_2[4][4] = {
        1,1,1,1,
        2,2,2,2,
        3,3,3,3,
        4,4,4,4
    };
    int matrix_3[4][4] ;
    
    //Addition
    cout << "Addition of Two two-dimensional array ."<<endl;

    for (int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){
            matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j];
            cout << matrix_3[i][j] <<" ";
        }
        
        cout <<endl;

    }
    
    
    // Subtraction
    cout << "Subtraction of Two two-dimensional array ."<<endl;

    for (int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){
            matrix_3[i][j] = matrix_1[i][j] - matrix_2[i][j];
            cout << matrix_3[i][j] <<" ";
        }
        
        cout <<endl;

    }
    
    // Multiplication
    cout << "Multiplication of Two two-dimensional array ."<<endl;
    
    for (int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){
            matrix_3[i][j] = (matrix_1[i][j] * matrix_2[i][j])+(matrix_1[i][j+1] * matrix_2[i+1][j]) + (matrix_1[i][j+2] * matrix_2[i+2][j]) + (matrix_1[i][j+3] * matrix_2[i+3][j]);
            cout << matrix_3[i][j] <<" ";
        }
        
        cout <<endl;

    }
    
    
}

