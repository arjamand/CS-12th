// 2023-10-23 22:06:42

/*
 Assignment NO 1 :
        Scom Packages : Menu based package selection application for GB 
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    // Welcome Menu and code selection
    string code ;
    cout <<"Welcome to package Selction menu. \nInternet Packages : *111#\nCall and SMS : *725#\n\nEnter Code : ";
    cin >> code ;
    
    // code block if the code is *111#
    if (code == "*111#"){
        int region_option ;
        cout<<"Please select Region\n1.GB\n2.AJK\n>>>";
        cin >> region_option ;

        switch (region_option){
            case 1 :
                int pkg_opt_1 ;
                cout << "1. 200mb Rs 20/day\n2. 500mb Rs 35/day\n3. 800mb Rs 130/week\n4. 5Gb Rs 350/month\n5. 10Gb Rs 550/month\n>>>";
                cin >> pkg_opt_1 ;

                if (pkg_opt_1 > 0 && pkg_opt_1 <= 5){ // running this block only if the input is in range 1 - 5
                    switch(pkg_opt_1){
                        case 1 :
                            cout << "200 mb daily package activated .";
                            break ;
                        case 2 :
                            cout << "500 mb daily package activated .";
                            break ;
                        case 3 :
                            cout << "800 mb weekly package activated .";
                            break ;
                        case 4 :
                            cout << "5 Gb  Monthly package activated .";
                            break ;
                        case 5 :
                            cout << "10 Gb  Monthly Max  package activated .";
                            break ;
                        default:
                            cout << "Error subscribing to a Pacakage .";
                            
                    }
                }
                // for inputs outside range 1 - 5
                else {
                    cout << "Invalid Input !!!";
                }
                break;

            case 2 :
                cout << "No packages avialable for AJK ..";
       
        }
        
    }
    else {
        cout << "Only data packages for GB are available for now !! ";
    }

    return 0;
}
