// 2023-08-07 03:29:13

#include <iostream>
using namespace std ;

int main(){

    int x = 12 ;
    int y = 6 ;
       
    // adding two intergers x and y -- operator : " + "
    cout <<"The Sum of "<< x <<" and "<< y <<" is "<< x+y <<endl;

    // finding difference of x and y -- operator : " - "
    cout <<"The Difference of "<< x <<" and "<< y <<" is "<< x-y <<endl;

    // finding product -- operator : " * "
    cout <<"The Product of "<< x <<" and "<< y <<" is "<< x*y<< endl;

    // dividing x by y -- operator : " / "
    cout <<"The Division of "<< x <<" and "<< y <<" is "<< x/y <<endl;

    // finding reminder of x/y -- operator : " % "
    cout <<"The reminder of "<< x <<"/"<< y <<" is "<< x%y <<endl;

    /* 
       incrementing the value of x by 1 
       pre-increment : The value of x is increased by one at the instant .
       x++ :
           x = x+1
    */
    cout <<"The pre-increment of "<< x <<" is "<< ++x <<endl;

    /* 
       incrementing the value of x by 1 
       post-increment : the value of the variable will be incremented 
       just before executing the next command .
       y++ :
          step 1 ; y = y 
          step 2 ; y = y + 1
    */
    cout <<"The post-increment of " << y <<" is " << y++ <<endl;

    /* 
       decrementing the value of x by 1 
       pre-decrement : The value of x is decreased by one at the instant .
       --x :
            x = x -1 
    */
    cout <<"The pre-decrement of " <<x <<" is " <<--x <<endl;

    /* 
       decrementing the value of x by 1 
       post-decrement : the value of the variable will be incremented 
       just before executing the next command .
       y-- :
          step 1 ; y = y 
          step 2 ; y = y - 1
    */
    cout <<"The post-decrement of "<< y <<" is " <<y-- <<endl;
    

}