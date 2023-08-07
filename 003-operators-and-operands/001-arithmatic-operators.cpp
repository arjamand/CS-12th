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
       pre-increment : incrementing the value of x to 1
       eg. x = 1 + x
    */
    cout <<"The pre-increment of "<< x <<" is "<< ++x <<endl;

    /* 
       incrementing the value of x by 1 
       post-increment : incrementing 1 on x
       eg. x = x +1
    */
    cout <<"The post-increment of "<< x <<" is "<< x++ <<endl;

    /* 
       decrementing the value of x by 1 
       pre-decrement : decrementing the value of x from 1
       eg. x = 1 - x
    */
    cout <<"The pre-decrement of "<< x <<" is "<< --x <<endl;

    /* 
       decrementing the value of x by 1 
       post-decrement : decrementing1 from the value of x
       eg. x = x - 1
    */
    cout <<"The post-decrement of "<< x <<" is "<< x-- <<endl;
    

}