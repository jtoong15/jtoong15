/*This program will calculate the periodic payment when borrowing money to buy a house, a car, or
for some other purposes. You typically repay it by making Periodic Payment. This program can also calculate
the unpaid loan balance after making certain payments. */

#include <iostream>
#include <cmath>

double periodic_payment(double Loan, double Interest, double Payments, double Time);
//double unpaid_balance(double Loan, double Interest, double Payments, double Time, double k);
double unpaid_balance(double L, double r, double m, double t, double k);

int main(){
int choice;
    double L, r, m, t, k;
    
do{
    /*Prompt the user if he/she wants to check the periodic payment. 1 if the user wants to check it
    and 0 if No*/
    
    std::cout <<"Do you want to check your Periodic Payment? (1 - Yes , 0 - No): ";
    std::cin >> choice;
    
    
    char another_choice;
    char check;
    
    switch(choice){
        case 1:
        //Prompt the user ti enter the loan
            std::cout << "Enter Loan: ";
            std::cin >> L; // for loan
        //Prompt the userr to enter the interest rate in decimal
            std::cout << "Enter Interest rate in decimal: ";
            std::cin >> r; // interest rate in decimal

            do{
            std::cout << "Enter payments per year (1 - Yearly 12 - Montly): ";
            std::cin >> m; // the number of payments yearly or monthly
            
            /*If the user wants to pay yearly type 1 if the user wants the payment as monthly type 12 
            if the user didn't type any of the choice given the output will be Invalid.*/
            if(m == 1  || m == 12){
                break;
            }
            else{
                std::cout << "Invalid" << '\n';
            }
            }while(true);
            //Prompt the user to enter the number of years of the loan.
            std::cout << "Enter number of years of loan: ";
            std::cin >> t;

        //This code will display the output of the Periodic payment.

            std::cout << "Periodic Payment: " << periodic_payment(L, r, m, t) << '\n';

        
        /*After checking the periodic payment the user will be asked if he/she wants to check the unpaid balance*/
            std::cout << "Do you want to check your Unpaid Balance? (Y / N): ";
            std::cin >> check;
            
        //If the user type the character Y or y, he/she will be asked to enter the finished payments after paying.
            if(check == 'Y' || check == 'y'){
                std::cout << "Enter the payments finished:___\b\b\b ";
                std::cin >> k; // th finished payments.

        //This will display the output  for unpaid balance.
                std::cout << "Unpaid Balance: " << unpaid_balance(L, r, m, t, k) << '\n';
            }
            else{
                break;
            }
            
        case 0:
            std::cout << "Thanks!!" << '\n';    
            break;
    }
    /*After checking periodic payments and unpaid balance the user will be asked if he/she wants to continue
    or do another checking.*/
    std::cout << "Do you want to continue? (Y / N): ";
    std::cin >> another_choice;
    
    system("cls"); //will automatically clear the code after the choice.
    
    if(another_choice == 'Y' || another_choice == 'y'){
        continue;
    }
    else{
        break;
    }
 
}while(true);
    
return 0;
}
//Function for Periodic Payments
double periodic_payment(double Loan, double Interest, double Payments, double Time){
    double i; 
    i =  (Interest / Payments); // Formula for i 
    //Formula for Periodic Payments
    return (Loan * i) / (1 - (pow((1 + i), (-Payments* Time))));
}
//function for Unpaid Balance.
double unpaid_balance(double L, double r, double m, double t, double k){
    double i; 
    i =  (r / m); // Formula for i 
//Formula for Unpaid Balance
    return periodic_payment(L, r, m, t) * (1 - pow((1 + i), -(m * t - k)))/ i;
}

