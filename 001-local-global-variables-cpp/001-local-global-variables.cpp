#include <iostream>
using namespace std;

//stating global variables 
int a = 10, b = 12;

//new function to add two or more variables
int sum (){
  /*example of a local variable which can only be modified/worked
  with inside the function 
  */
  int s = a + b;
  cout << "The sum of the two variables is " << s << endl;
  //returning sum when the funct is called
  return s;		 
}

//new function to find mean of a and b . 
void mean (){ 
  // converting int to float before dividing
  float mean = (a+b) / 2;  
  cout << "The mean of the two variables is " << mean << endl;

}

int main (){
  //calling summ funct to print out the sum and return the sum value
  sum ();			 
  /* calling mean funct to print the mean , 
  its not required anywhere else so no returning its value 
  */ 
  mean ();  
}
 