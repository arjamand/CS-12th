// 2023-10-24 01:13:55
/*
Assignment N0 2 :
            SCO Packages for multiple cities
            A manu based application
            Using if, if-else, else-if and switch statements 
*/

#include <iostream>
#include <string>

using namespace std;

string pkg_select(string location){
    if (location == "GB"){
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
    }
    else if ( location == "AJK"){
        int pkg_opt_1 ;
        cout << "1. 100mb Rs 8/day\n2. 500mb Rs 30/day\n3. 1000mb Rs 100/week\n4. 5Gb Rs 300/month\n5. 10Gb Rs 500/month\n>>>";
        cin >> pkg_opt_1 ;

        if (pkg_opt_1 > 0 && pkg_opt_1 <= 5){ // running this block only if the input is in range 1 - 5
            switch(pkg_opt_1){
                case 1 :
                    cout << "100 mb daily package activated .";
                    break ;
                case 2 :
                    cout << "500 mb daily package activated .";
                    break ;
                case 3 :
                    cout << "1000 mb weekly package activated .";
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
    }    
    else if (location == "Karachi"){
        int pkg_opt_1 ;
        cout << "1. 250mb Rs 25/day\n2. 600mb Rs 35/day\n3. 700mb Rs 130/week\n4. 5Gb Rs 350/month\n5. 10Gb Rs 550/month\n>>>";
        cin >> pkg_opt_1 ;

        if (pkg_opt_1 > 0 && pkg_opt_1 <= 5){ // running this block only if the input is in range 1 - 5
            switch(pkg_opt_1){
                case 1 :
                    cout << "250 mb daily package activated .";
                    break ;
                case 2 :
                    cout << "600 mb daily package activated .";
                    break ;
                case 3 :
                    cout << "700 mb weekly package activated .";
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
                    
    }
    else if (location == "Islamabad" || location == "Lahore"){
        int pkg_opt_1 ;
        cout << "1. 250mb Rs 25/day\n2. 600mb Rs 35/day\n3. 700mb Rs 130/week\n4. 5Gb Rs 350/month\n5. 10Gb Rs 550/month\n>>>";
        cin >> pkg_opt_1 ;

        if (pkg_opt_1 > 0 && pkg_opt_1 <= 5){ // running this block only if the input is in range 1 - 5
            switch(pkg_opt_1){
                case 1 :
                    cout << "250 mb daily package activated .";
                    break ;
                case 2 :
                    cout << "600 mb daily package activated .";
                    break ;
                case 3 :
                    cout << "700 mb weekly package activated .";
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
    }   
}

int main(){
    // Welcome Menu and code selection
    string code ;
    cout <<"Welcome to package Selction menu. \nInternet Packages : *111#\nCall and SMS : *725#\n\nEnter Code : ";
    cin >> code ;
    
    // code block if the code is *111#
    if (code == "*111#"){
        int region_option ;
        cout<<"Please select Region\n1. GB\n2. AJK\n3. Karachi\n4. Islamabad\n5. Lahore \n>>>";
        cin >> region_option ;
        if (region_option >= 1 && region_option <= 5){
            switch (region_option){
                case 1 :
                    cout<< "Select Your package (GB)\n";
                    pkg_select("GB");
                    break;
                case 2 :
                    cout<< "Select Your package (AJK)\n";
                    pkg_select("AJK");
                    break;
                case 3 :
                    cout<< "Select Your package (Karachi)\n";
                    pkg_select("Karachi");
                    break;
                case 4 :
                    cout<< "Select Your package (Islamabad)\n";
                    pkg_select("Islamabad");
                    break;
                case 5 :
                    cout<< "Select Your package (Lahore)\n";
                    pkg_select("Lahore");
                    break;
                default :
                    cout<<"Error !! ";
        
            }
        }
        else{
            cout << "Invalid Input ";
        }
        
    }
    // call anf sms packages 
    else if (code == "*725#"){
        int region_option ;
        cout<<"Please select Region\n1. GB\n2. AJK\n3. Karachi\n4. Islamabad\n5. Lahore \n>>>";
        cin >> region_option ;
        if (region_option != 1){
            cout<< "Call Packages are only Available for GB now .";
        }
        else{
            int cl_or_msg;
            cout << "1. Call Packages \n2. SMS Packages \n>>>";
            cin>> cl_or_msg ;
            if (cl_or_msg == 1 || cl_or_msg == 2){
                switch(cl_or_msg){
                    case 1 :
                        int sms_option ;
                        cout << "1. Daily SMS \n2. Weekly SMS \n3.Monthly SMS\n>>>";
                        cin>> sms_option ;
                        switch(sms_option){
                            case 1 :
                                int daily_sms_options;
                                cout << "Select your package \n1. 100 sms/day 10Rs \n2. 500 sms/day 15Rs \n3. Unlimited SMS 30Rs\n>>>";
                                cin >> daily_sms_options ;
                                switch(daily_sms_options){
                                    default :
                                        cout << "Package Activated !!";
                                }
                                break ;
                            case 2 :
                                int weekly_sms_options;
                                cout << "Select your package \n1. 1000 sms/week 50Rs \n2. 5000 sms/week 80Rs \n3. Unlimited SMS 100Rs\n>>>";
                                cin >> weekly_sms_options ;
                                switch(weekly_sms_options){
                                    default :
                                        cout << "Package Activated !!";
                                }
                                break ;
                            case 3 :
                                int monthly_sms_options;
                                cout << "Select your package \n1. 1000 sms/month 70Rs \n2. 5000 sms/month 100Rs \n3. Unlimited SMS 130Rs\n>>>";
                                cin >>  monthly_sms_options ;
                                switch( monthly_sms_options){
                                    default :
                                        cout << "Package Activated !!";
                                }
                                break ;
                            default :
                                cout << "Error" ;
                        }
                        break ;
                    case 2 : 
                        int call_option ;
                        cout << "1. Daily call \n2. Weekly call \n3.Monthly call\n>>>";
                        cin>> call_option ;
                        switch(sms_option){
                            case 1 :
                                int daily_call_option;
                                cout << "Select your package \n1. 100 min/day 10Rs \n2. 500 min/day 15Rs \n3. Unlimited mnts 30Rs\n>>>";
                                cin >> daily_call_option ;
                                switch(daily_call_option){
                                    default :
                                        cout << "Package Activated !!";
                                }
                                break ;
                            case 2 :
                                int weekly_call_option;
                                cout << "Select your package \n1. 1000 mnts/week 50Rs \n2. 5000 mnts/week 80Rs \n3. Unlimited mnts 100Rs\n>>>";
                                cin >> weekly_call_option ;
                                switch(weekly_call_option){
                                    default :
                                        cout << "Package Activated !!";
                                }
                                break ;
                            case 3 :
                                int monthly_call_option;
                                cout << "Select your package \n1. 1000 mnts/month 70Rs \n2. 5000 mnts/month 100Rs \n3. Unlimited mnts 130Rs\n>>>";
                                cin >> monthly_call_option ;
                                switch(monthly_call_option){
                                    default :
                                        cout << "Package Activated !!";
                                }
                                break ;
                            default :
                                cout << "Error" ;

                        } 
                    default :
                        cout << "error in call and sms options";                    
                }

            }
            else {
                cout <<"Please select correct option !!";
            }

        }

    }


    return 0;
}
