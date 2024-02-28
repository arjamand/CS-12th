// 2024-02-28 08:50:46
/*
14.1.7 Write a program involving use of user defined function to calculate volume of 
cylinder, sphere and cube.
*/
#include <iostream>

using namespace std ;

float VolumeOfCylinder(){
    float radius ;
    float height ;

    cout <<"Enter radius of the cylinder : ";
    cin >> radius ;

    cout << "Enter height of the cylinder : ";
    cin >> height ;

    float volume = 3.14 * (radius*radius)*height ;

    cout << "The volume of the cylinder is : " << volume ;

}

float VolumeOfSphere(){
    float radius ;

    cout <<"Enter radius of the Sphere : ";
    cin >> radius ;

    float volume = (4/3)*3.14*(radius*radius*radius);

    cout << "The volume of the Sphere is : " << volume ;


}

float VolumeOfCube(){

    float side ;

    cout << "Enter the lenght of a side of of the cube : ";
    cin >> side ;

    float volume = side*side*side;

    cout << "The volume of the cube is : " << volume ;


}

int main (){

    int option ;

    cout << "Please Select any option : \n1. Volume of Cylinder\n2. Volume of Sphere \n3. Volume of cube \n>>> ";
    cin >> option ;
    cout <<endl ;

    if (option == 1){
        VolumeOfCylinder();
    }
    else if (option == 2){
        VolumeOfSphere();
    }
    else if (option == 3){
        VolumeOfCube();
    }
    else {
        cout << "error !!!";

    }


    return 0 ;
}