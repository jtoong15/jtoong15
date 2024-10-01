#include <iostream>
#include <limits> // Include for input validation
int main(){

    int op;
    long num1;
    long num2;
    
    long result;
    char choice;
    
    do{
    std::cout << "*****************SIMPLE CALCULATOR****************\n";
    std::cout << "Menu" << '\n';
    std::cout << "1. Addition" << '\n';
    std::cout << "2. Subtraction" << '\n';
    std::cout << "3. Multiplication" << '\n';
    std::cout << "4. Division" << '\n';
    std::cout << "5. Exit" << '\n';
    
    std::cout << "*************************************************" << '\n'; 
    std::cout << "\n";

    std::cout << "Enter the Operation to use (1 - 5): ";
    std::cin >> op;
//check for invalid input (non - numeric or out of range)
    if(std::cin.fail() || op < 1 || op > 5){
        std::cin.clear();
//Discard invalid input
        std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n'); 
        std::cout << "Invalid Operation!\n";
        std::cout << "Please enter from (1 - 5) only: ";
        std::cin >> op;
        std::cout << "\n";
    }

    
    
    if(op == 5){
        std::cout << "Exit" << '\n';
        break;
    }


    std::cout << "Enter first number: ";
    std::cin >> num1;
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
            std::cout << '\n';
            std::cout << "Enter only a number: ";
            std::cin >> num1;
        }
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
            std::cout << '\n';
            std::cout << "Enter only a number: ";
            std::cin >> num1;
        }

    switch(op){
        case 1:
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << '\n';
            break;
            
        case  2:
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << '\n';
            break;
            
        case 3:
             result = num1 * num2;
             std::cout << num1 << " * " << num2 << " = " << result << '\n';
             break;
             
        case 4:
           while(true){
                if(num2 == 0){
                    std::cout << "Divison by 0 is not possible" << '\n';
                    std::cout << "Please Enter another Number: "; 
                    std::cin >> num2;
                    std::cout << "\n";
                }
                else{
                    break;
                }
            }
             result = num1 / num2;
             std::cout << num1 << " / " << num2 << " = " << result << '\n';
             break;
        case 5:
            std::cout << "Exit" << '\n';
            break;
                
        default:
            std::cout << "Error!" << '\n';
            break;
        
    }
    std::cout << "Do you want to perform another calculation? (Y / N): ";
    std::cin >> choice;
    system("cls");
    std:: cout << "\n";
  
   
    if(choice == 'Y' || choice == 'y'){
        continue;
    }
    else{
        std::cout << "Thank You!" << " " <<  "Good Bye!";
        break;
    }

    
    } while(true);
    
    
    return 0;
 
}