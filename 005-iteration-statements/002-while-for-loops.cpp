// 2023-08-22 03:55:06


#include <iostream>
using namespace std;

int main (){
  cout << "Square" << endl;

  for (int i = 0; i < 5; i++){
      cout << "* * * * *" << endl;
    }

  cout << "Triangle\n";
  int x = 5;
  
  while (x != 0){
    int y = 5;

    for (int j = 0; j <= x; j++){
	    cout << "* ";
	}
    cout << endl;
    x--;

    if (x == 0){
        cout << "* ";
	}
    
    }

}
