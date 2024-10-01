#include <iostream>
#include <iomanip>
int main(){

//This program calculates and displays the service charge for phone bills based on user input

int account_number; //Variable to store the account number
char service_code; //Variable to store the service code
int minutes_used; //Variable to store total minutes used

//Prompt the user to enter account information
std::cout << "Enter Account number: ";
std::cin >> account_number;

std::cout << "Enter Service code ('R' || 'r' = regular service, 'P' || 'p' = premium service): ";
std::cin >> service_code;

double service_charge; //Variable to store the total service charge
int minutes_used_am; //Variable to store minutes used during the day
int minutes_used_pm; //Variable to store minutes used during the night

if(service_code == 'r' || service_code == 'R'){
    //Regular service logic
    service_charge += 1000;
    std::cout << "Enter the minutes used: ";
    std::cin >> minutes_used;
    
    if(minutes_used > 50){
    service_charge += (minutes_used - 50) * 0.20;
    }
std::cout << "***********************************************" << '\n';
std::cout << "Account number: " << account_number << '\n';
std::cout << "Service type: Regular" << '\n';
std::cout << "Minutes used: " << minutes_used << " minutes" << '\n';
std::cout << "Ammount: Php "  << std::setprecision(2) << std::fixed << service_charge << '\n';
std::cout << "***********************************************" << '\n';
}
else if(service_code == 'p' || service_code == 'P'){
    //Premium service logic
    service_charge += 250;
    std::cout << "Enter the minute used around 6:00 AM to 6:00 PM: ";
    std::cin >> minutes_used_am;
    
    std::cout << "Enter the minute used around 6:00 PM to 6:00 AM: ";
    std::cin >> minutes_used_pm;
    
    if (minutes_used_am > 75) {
            service_charge += (minutes_used_am - 75) * 0.10;
        }

    else if (minutes_used_pm > 100) {
            service_charge += (minutes_used_pm - 100) * 0.05;
        }
std::cout << "***********************************************" << '\n';
std::cout << "Account number: " << account_number << '\n';
std::cout << "Service type: Premium" << '\n';
std::cout << "Minutes used during the day: " << minutes_used_am  << " minutes" << '\n';
std::cout << "Minutes used during the night: " << minutes_used_pm << " minutes" << '\n';
std::cout << "Ammount: Php "  << std::setprecision(2) << std::fixed << service_charge << '\n';
std::cout << "***********************************************" << '\n';
}
else{
std::cout << "Invalid Service Code!" << '\n';
}
return 0;
}

