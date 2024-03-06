// 2024-03-06 09:41:17
// 16.1.6 Write a C++ program in which a class uses both public and private access specifiers.


#include <iostream>
using namespace std ;


class BankAccount {
    private :
        string account_owner = "Ahmad" ;
        float available_balance = 100302.24 ;
        int secret_passcode = 2413 ;
        long long int account_number = 111222333444555 ;


    public :
        int CheckAccount(long long int i){
            if (i == account_number){
                int opt_2 ;
                cout << "1. Check Balance \n2. Withdraw Money \n>>> ";
                cin >> opt_2;

                if (opt_2 == 1){
                    cout << "Your current available balance is "<< available_balance ;

                }
                else if (opt_2 == 2) {
                    float w_ammount ;

                    cout << "Enter the amount you want to withdraw : ";
                    cin >> w_ammount ;

                    if (w_ammount <= available_balance && available_balance != 0){
                        cout << "Transaction Successfull !!! \nAmount Withdrawn : "<< w_ammount << "\nRemaining balance : " << available_balance - w_ammount ;
                    }
                    else {
                        cout <<"Not enough funds .";
                    }
                }

            }
            else {
                cout<< "No Such Account found !!!";
            }
        }

};
int main (){
    BankAccount atm ;
    atm.CheckAccount(111222333444555);

    return 0 ;
}


PS C:\Users\ar\Documents\GitHub\CS-12th\Exam Practicals\16.1.6> g++ code.cpp -o code 
PS C:\Users\ar\Documents\GitHub\CS-12th\Exam Practicals\16.1.6> .\code 
1. Check Balance
2. Withdraw Money
>>> 2
Enter the amount you want to withdraw : 223
Transaction Successfull !!!
Amount Withdrawn : 223
Remaining balance : 100079
