#include <iostream>

int main(){

    //This program calculates and display's account information based on user input.

    int costumer_account;  //Variable to store the costumer's account number
    char account_type; //Variable to store the account type (savings or checking)
    int minimum_balance; //Variable to store the minimum required balance
    int current_balance; //Variable to store the current balance

    //Prompt the user to enter customer account information
    std::cout << "Enter Costumer's Account: ";
    std::cin >> costumer_account;

    std::cout << "Enter Account Type: (s = savings, c = checkings): ";
    std::cin >> account_type;

    std::cout << "Enter Minimum Balance: ";
    std::cin >> minimum_balance;

    std::cout << "Enter Current Balance: ";
    std::cin >> current_balance;

    double service_charge; //Variable to store service charge
    double interest_rate; //Variable to store the interest rate

    //Check if the account type is savings
    //Account type for 's' (savings)
    if(account_type == 's'){
        service_charge = 100; //Set the service charge for savings account
    
        if(current_balance >= minimum_balance){
            interest_rate = 0.04; //Set the interest rate for qualifying savings account
            std::cout << "*************************************" << '\n';
            std::cout << "Interest rate: " << interest_rate * 100 << "%"<< '\n';
            current_balance += current_balance * interest_rate;
        }
            else if(current_balance < minimum_balance){
            current_balance -= service_charge; //Set the service charge for checking accounts
        }
            std::cout << "*************************************" << '\n';
            std::cout << "Account Number: " << costumer_account << '\n';
            std::cout << "Account Type: savings" << '\n';
            std::cout << "Service Charge: Php " << service_charge << '\n';
            std::cout << "Current Balance: Php " << current_balance << '\n';
            std::cout << "*************************************" << '\n';
    }
    else{
        //Account type for 'c' (checking)
        if(account_type == 'c'){
            service_charge = 250; //Set the service charge for checking accounts        
        }
        if(current_balance >= minimum_balance && current_balance < minimum_balance + 5000){
            interest_rate = 0.03; //Set the interest rate for qualifying checking accounts
            std::cout << "*************************************" << '\n';
            std::cout << "Interest rate: " << interest_rate * 100 << "%"<< '\n';
            current_balance += current_balance * interest_rate;
        }
            else if(current_balance < minimum_balance){
            current_balance -= service_charge; //Apply the service charge for insufficient balance
        }
        else{
            interest_rate = 0.05; //Set the interest rate for checking accounts with a high balance
            std::cout << "*************************************" << '\n';
            std::cout << "Interest rate: " << interest_rate * 100 << "%"<< '\n';
            current_balance += current_balance * interest_rate;
        }
            std::cout << "*************************************" << '\n';
            std::cout << "Account Number: " << costumer_account << '\n';
            std::cout << "Account Type: checking" << '\n';
            std::cout << "Service Charge: Php " << service_charge << '\n';
            std::cout << "Current Balance: Php " << current_balance << '\n';
            std::cout << "*************************************" << '\n';
    }
    return 0;
}


