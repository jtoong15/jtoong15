#include <iostream>

int main(){
//Fahrenheit to Celsius

    std::cout << "********Temperature Conversion********\n";
    std::cout << "Fahrenheit to Celsius\n";

    double Fahrenheit;
    double Celsius;

    std::cout << "Enter Fahrenheit: ";
    std::cin >> Fahrenheit;

    Celsius = (Fahrenheit - 32) * 5 / 9;

    std::cout << "Celsius is " << Celsius << '\n';
    
    std::cout << "*************************************" << '\n' << '\n';

    std::cout << "********Area of Trapezoid********\n";
    std::cout << "Area of Trapezoid\n";

// Compute the Area of a Trapezoid

    double a;
    double b;
    double h;
    double Area;

    std::cout << "Enter base 1: ";
    std::cin >> a;

    std::cout << "Enter base 2: ";
    std::cin >> b;

    std::cout << "Enter height: ";
    std::cin >> h;

    Area = 0.5 * (a + b) * h;

    std::cout << "Area of Trapezoid is " << Area << '\n';

    std::cout << "*********************************\n";

    return 0;
}


