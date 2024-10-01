#include  <iostream>
#include <cmath>
#include <limits>

void basic_arithmetic_operations(double addition, double subtraction, double multiplication, double division);
void advance_arithmetic_operations(double square_root, double exponentation, double square);
void statistical_function(double mean, double standard_deviation);
void additional_mathematical_functions(double absolute_value, double percent);
void trigonometric_functions(double sine, double cosine, double tangent, double arc_sine, double arc_cosine, double arc_tangent);
int main(){
    int choice;
    double addition, subtraction, multiplication, division;
    double square_root, exponentation, square;
    double mean, standard_deviation;
    double absolute_value, percent;
    double sine,  cosine,  tangent,  arc_sine,  arc_cosine,  arc_tangent;
    char another_calculation;
    char main_choice;
    do{
    //Display Menu: Presents a menu with options for various mathematical operations.
    std::cout << "***************ADVANCED CALCULATOR***************\n";
    std::cout << "Menu" << '\n';
    std::cout << "1. Basic Arithmetic Operations" << '\n';
    std::cout << "2. Advanced Arithmetic Operations" << '\n';
    std::cout << "3. Statistical Function" << '\n';
    std::cout << "4. Additional Mathematical Functon" << '\n';
    std::cout << "5. Trigonometric Functions" << '\n';
    std::cout << "6. Exit" << '\n';
    std::cout << "*************************************************\n";
    
    std::cout << "\n";
    //User Input: Collects the user's choice for the desired operation.
    std::cout << "Enter choice: ";
    std::cin >> choice;

    //check for invalid input (non - numeric or out of range)
    if(std::cin.fail()){
        std::cin.clear();
    //Discard invalid input
        std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n'); 
        std::cout << "Invalid Choice!\n";
        std::cout << "Please enter from (1 - 6) only: ";
        std::cin >> choice;
        std::cout << "\n";
    }
    
    std::cout << "\n";
    //Switch Statement: Determines the selected option and invokes the corresponding function or exits the program.
    switch(choice){
        case 1:
            basic_arithmetic_operations( addition,  subtraction,  multiplication,  division);
            break;
        case 2:
            advance_arithmetic_operations( square_root,  exponentation,  square);
            break;
        case 3:
            statistical_function( mean, standard_deviation );
            break;
        case 4:
            additional_mathematical_functions( absolute_value,  percent);
            break;
        case 5:
            trigonometric_functions( sine,  cosine,  tangent,  arc_sine,  arc_cosine,  arc_tangent);
            break;
        case 6:
            std::cout << "Exit" << '\n';
            break;
        default:
            std::cout << "Error!!" << '\n';
            std::cout << "Enter choice: ";
            std::cin >> choice;          
    }

    std::cout << "Do you want to go back to the Menu?: (Y / N): ";
    std::cin >> main_choice;

    //Console Screen Clearing (system("cls")): Clears the console screen after each operation for a cleaner user interface.
    system("cls");
   
    if(main_choice == 'Y' || main_choice == 'y'){
       continue;
    }
    else{
       break;
    }
    }while(true);
    
return 0;
}
void basic_arithmetic_operations(double addition, double subtraction, double multiplication, double division){
     //Handles addition, subtraction, multiplication, and division.
     //User Input: Collects two numbers and the desired arithmetic operation from the user.
    double num1;
    double num2;
    int choice;
    do{
    std::cout << "****************************\n";
    std::cout << "1. Addition" << '\n';
    std::cout << "2. Subtraction" << '\n';
    std::cout << "3. Multiplication" << '\n';
    std::cout << "4. Division" << '\n';
    std::cout << "5. Exit" << '\n';
    std::cout << "****************************\n";
    
    std::cout << "Enter choice: ";
    std::cin >> choice;
    
    
    double result;
    char another_calculation;
    //Switch Statement: Performs the selected arithmetic operation and displays the result.
    switch(choice){
        case 1:
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
                    std::cin >> num2;
                }

            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " <<  result << '\n';
            break;    
        case 2:
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
                    std::cin >> num2;
                }

            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " <<  result << '\n';
            break;    
        case 3:
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
                    std::cin >> num2;
                }

            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " <<  result << '\n';
            break;    
        case 4:
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
                    std::cin >> num2;
                }

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
            std::cout << num1 << " / " << num2 << " = " <<  result << '\n';
            break;  
        case 5:
            std::cout << "Exit" << '\n';
            break;
        default:
            std::cout << "Invalid Operaror" << '\n';    
            break;
    }
    
    std::cout << "Do you want to perform another calculation?: (Y / N): ";
    std::cin >> another_calculation;

    //Console Screen Clearing (system("cls")): Clears the console screen after each operation for a cleaner user interface.
    system("cls");
   
   if(another_calculation == 'Y' || another_calculation == 'y'){
       continue;
   }
   else{
       break;
   }
   }while(true);
}
void advance_arithmetic_operations(double square_root, double exponentation, double square){
    //Manages square root, exponentiation, and squaring.

    int choice;
    do{
     //User Input: Takes user input for the chosen advanced arithmetic operation.
    std::cout << "****************************\n";
    std::cout << "1. Square Root" << '\n';
    std::cout << "2. Exponentation" << '\n';
    std::cout << "3. Square" << '\n';
    std::cout << "4. Exit" << '\n';
    std::cout << "****************************\n";
    
    std::cout << "Enter choice: ";
    std::cin >> choice;
    
   
   double result;
   char another_calculation;
    //Switch Statement: Performs the selected advanced arithmetic operation and displays the result.
    switch(choice){
        case 1:
            double num;
            
            std::cout << "Enter  number: ";
            std::cin >> num;
                if(std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
                    std::cout << '\n';
                    std::cout << "Enter only a number: ";
                    std::cin >> num;
                }
            
            result = sqrt(num);
            std::cout << "Square Root of " << num << " is: " << result << '\n';
            break;
        case 2:
            double x;
            double y;
            
            std::cout << "Enter the Value of X: ";
            std::cin >> x;
                if(std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
                    std::cout << '\n';
                    std::cout << "Enter only a value of x: ";
                    std::cin >> x;
                }
            
            std::cout << "Enter the Value of Y: ";
            std::cin >> y;
                if(std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
                    std::cout << '\n';
                    std::cout << "Enter only a value of y: ";
                    std::cin >> y;
                }
            result = pow(x, y);
            std::cout << x << " ^ " << y << " is: " << result << '\n';
            break;
        case 3:
            double number;
            
            std::cout << "Enter a Number to be squared: ";
            std::cin >> number;
                if(std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
                    std::cout << '\n';
                    std::cout << "Enter only a number: ";
                    std::cin >> number;
                }    
            
            result = pow(number, 2);
            std::cout << number << " squared" << " is: " << result << '\n';
            break;
        case 4:
            std::cout << "Exit" << '\n';
            break;
        default:
            std::cout << "Invalid" << '\n';    
            break;
    }
    
    std::cout << "Do you want to perform another calculation?: (Y / N): ";
    std::cin >> another_calculation;

    //Console Screen Clearing (system("cls")): Clears the console screen after each operation for a cleaner user interface.
    system("cls");
   
    if(another_calculation == 'Y' || another_calculation == 'y'){
       continue;
    }
    else{
       break;
    }
    }while(true);
}
void statistical_function(double mean, double standard_deviation){
    //Computes mean and standard deviation.
    int choice;
    do{
    // User Input: Collects user input for the statistical calculations.
    std::cout << "****************************\n";
    std::cout << "1. Mean" << '\n';
    std::cout << "2. Standard Deviation" << '\n';
    std::cout << "3. Exit" << '\n';
    std::cout << "****************************\n";
    
    std::cout << "Enter choice: ";
    std::cin >> choice;
    
    
    double result;
    char another_calculation;
   //Switch Statement:*Performs the selected statistical operation and displays the result.
    switch(choice){
        case 1:
           double x1,x2,x3,x4;
           
           std::cout << "Enter the Value of x1: ";
           std::cin >> x1;
           std::cout << "Enter the Value of x2: ";
           std::cin >> x2;
           std::cout << "Enter the Value of x3: ";
           std::cin >> x3;
           std::cout << "Enter the Value of x4: ";
           std::cin >> x4;
           
          result = (x1 + x2 + x3 + x4) / 4;
          std::cout << "The Mean of the Numbers " << x1  << " " << x2  << " " << x3  << " " << x4 << " is: " << result << '\n';
          break;
        case 2:
            double x;   
            double num1,num2,num3,num4;
            
           std::cout << "Enter the Value of x1: ";
           std::cin >> num1;
           std::cout << "Enter the Value of x2: ";
           std::cin >> num2;
           std::cout << "Enter the Value of x3: ";
           std::cin >> num3;
           std::cout << "Enter the Value of x4: ";
           std::cin >> num4;
           
          x = (num1 + num2 + num3 + num4) / 4; 
          result= (sqrt(pow(num1 - x, 2) + (pow(num2 - x, 2) + (pow(num3 - x, 2) + (pow(num4 - x, 2)))))) / 4;
          std::cout << "The Standard Deviation of the Numbers: " << num1  << " "<< num2 << " " << num3  << " "<< num4 << " is: " << result << '\n';
          break;
          
        case 3:
           std::cout << "Exit"  << '\n';    
           break;
        default:
           std::cout << "Invalid" << '\n';
           break;       
    }
       
    std::cout << "Do you want to perform another calculation?: (Y / N): ";
    std::cin >> another_calculation;

    //Console Screen Clearing (system("cls")): Clears the console screen after each operation for a cleaner user interface.
    system("cls");
   
    if(another_calculation == 'Y' || another_calculation == 'y'){
       continue;
    }
    else{
       break;
    }
    }while(true);
}
void additional_mathematical_functions(double absolute_value, double percent){
    //Handles absolute value and percentage calculation.
    int choice;
    do{
    //User Input: Takes user input for the chosen additional mathematical function.
    std::cout << "****************************\n";
    std::cout << "1. Absolute Value" << '\n';
    std::cout << "2. Percent Calculation" << '\n';
    std::cout << "3. Exit" << '\n';
    std::cout << "****************************\n";
    
    std::cout << "Enter choice: ";
    std::cin >> choice;
    
    
    double result;
    char another_calculation;

    //Switch Statement: Performs the selected mathematical function and displays the result.
    switch(choice){
        case 1:
           double num;
           double absolute_value;
           std::cout << "Enter a value for num: ";
           std::cin >> num;
                if(std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
                    std::cout << '\n';
                    std::cout << "Enter only a number: ";
                    std::cin >> num;
                }
           
           result = abs(num);
           std::cout << "The absolute Value for: " << num << " is: " << result << '\n';
           break;
        case 2:
            double number;
        
            std::cout << "Enter the Number: ";
            std::cin >> number;
                if(std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
                    std::cout << '\n';
                    std::cout << "Enter only a number: ";
                    std::cin >> number;
                }

            result = number / 100;
            std::cout << number << " % " << " is: " << result << '\n';
            break;

        case 3:
           std::cout << "Exit"  << '\n';    
           break;
        default:
           std::cout << "Invalid" << '\n';
           break;    
    }
   
    std::cout << "Do you want to perform another calculation?: (Y / N): ";
    std::cin >> another_calculation;

    system("cls");
   
    if(another_calculation == 'Y' || another_calculation == 'y'){
        continue;
    }
    else{
       break;
    }
    }while(true);
}
void trigonometric_functions(double sine, double cosine, double tangent, double arc_sine, double arc_cosine, double arc_tangent){
    //Computes sine, cosine, tangent, arc sine, arc cosine, and arc tangent in radians.
    double x;
    int choice; 

do{
    //User Input: Takes user input for the values needed in trigonometric calculations.
    std::cout << "****************************\n";
    std::cout << "1. Sine" << '\n';
    std::cout << "2. Cosine" << '\n';
    std::cout << "3. Tangent" << '\n';
    std::cout << "4. Arc Sine" << '\n';
    std::cout << "5. Arc Cosine" << '\n';
    std::cout << "6. Arc Tangent" << '\n';
    std::cout << "7. Exit" << '\n';
    std::cout << "****************************\n";

    std::cout << "Enter Choice (1 - 7): ";
    std::cin >> choice; 

    std::cout << "Enter Number: ";
    std::cin >> x;

    char another_calculation;

    //Switch Statement: Performs the selected trigonometric operation and displays the result in radians.
    switch(choice){
        case 1:
            sine = sin(x);
            std::cout << "Sine: " << sine << " in radians" << '\n';
            break;
        case 2:
            cosine = cos(x);
            std::cout << "Cosine: " << cosine << " in radians" << '\n';
            break;
        case 3:
            tangent = tan(x);
            std::cout << "Tangent: " << tangent << " in radians" << '\n';
            break;
        case 4:
            arc_sine = asin(x);
            std::cout << "Arc Sine: " << arc_sine << " in radians" << '\n';
            break;
        case 5:
            arc_cosine = acos(x);
            std::cout << "Arc Cosine: " << arc_cosine << " in radians" << '\n';
            break;
        case 6:
            arc_tangent = atan(x);
            std::cout << "Arc Tangent: " << arc_tangent << " in radians" << '\n';
            break;
        case 7:
            std::cout << "Exit" << '\n';
            break;
        default:
            std::cout << "Invalid" << '\n';
            break;    
    }

    std::cout << "Do you want to perform another calculation? (Y / N): ";
    std::cin >> another_calculation;
    //Console Screen Clearing (system("cls")): Clears the console screen after each operation for a cleaner user interface.
    system("cls");
    std:: cout << "\n";

       if(another_calculation == 'Y' || another_calculation == 'y'){
        continue;
    }
    else{
        std::cout << "Thank You!" << '\n';
        break;
    }
    }while(true);

}