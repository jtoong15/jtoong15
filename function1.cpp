// Solving  Quadratic Equation

#include <iostream>
#include <cmath>

double quadratic_equation(double a, double b, double c);
double quadratic_formula(double a, double b, double c);
double finalizing_the_equation(double a, double b, double c, double x1);

int main(){

    double a;
    double b;
    double c;
    
// Prompt the user to enter coefficient A, B and C

    std::cout << "Enter coefficient A: ";
    std::cin >> a;
    
    std::cout << "Enter coefficient B: ";
    std::cin >> b;
    
    std::cout << "Enter coefficient C: ";
    std::cin >> c;
    
// Will display the answer
    quadratic_formula( a,  b,  c);
    
    return 0;
    
}
//Function to calculate the equation
double quadratic_equation(double a, double b, double c){
    return pow(b, 2)  - 4 * a * c ;
  
}

//Function to calculate the solutions of the quadratic equation
double quadratic_formula(double a, double b, double c){
    double answer = quadratic_equation( a,  b,  c);
    double x;
    
   if(answer == 0){
        double x =  -b / (2 * a);
        std::cout << x;
    }
    else{
        //Possible Solutions
        double x1 = (-b + answer) / (2 * a);
        double x2 = (-b - answer) / (2 * a);
        std::cout << x1 << " and "<< x2 << '\n';
        
        
        std:: cout << "x = " << x1 << '\n';
        std::cout << "ax^2 + bx + c = 0" << '\n';
        std::cout << finalizing_the_equation( a,  b,  c,  x1) << " = " << 0 << '\n';
    }
     return 0;
}
//Function to finalize if the  problem is a Quadratic Equation by substituting x
double finalizing_the_equation(double a, double b, double c, double x1){
    double x = x1;
    return a * pow(x, 2) + b * x + c;
    
}

