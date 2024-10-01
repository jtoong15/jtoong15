/*The own declared six trigonometric functions separated in header file*/
// Name of this header file: trigonometry.h
#include <cmath>

//The formula for all the trigonometric functions

double sin(double opposite, double hypotenuse, double adjacent){
    return asin(opposite / hypotenuse) * (180 / M_PI);
}

double csc(double opposite, double hypotenuse, double adjacent){
    return asin(1 / (hypotenuse / opposite)) * (180 / M_PI);
}

double cos(double opposite, double hypotenuse, double adjacent){
    return acos(adjacent / hypotenuse) * (180 / M_PI);
}

double sec(double opposite, double hypotenuse, double adjacent){
    return acos(1 / (hypotenuse / adjacent)) * (180 / M_PI);
}

double tan(double opposite, double hypotenuse, double adjacent){
    return atan(opposite / adjacent) * (180 / M_PI);
}

double cot(double opposite, double hypotenuse, double adjacent){
    return atan(1 / (adjacent / opposite)) * (180 / M_PI);
}

//Main Source Code: And in another file too.

/*This is a program that computes the angle(in degrees) using any 2 slides of the triangle.
This program uses the own declared functions in the main program to solve the angle.
It will ask the user the length of each side, a zero "0" input means unknown length. Only
1 side of the triangle can be of unknown length.*/

#include <iostream>
#include "trigonometry.h" // Own header name

int main(){

    double opposite;
    double hypotenuse;
    double adjacent;
    char another_calculation;

do{
//Prompt the user to enter the sides of the angle where one is an unknown or zero
    std::cout << "Enter opposite: ";
    std::cin >> opposite;

    std::cout << "Enter hypotenuse: ";
    std::cin >> hypotenuse;

    std::cout << "Enter adjacent: ";
    std::cin >> adjacent;

    std::cout << "\n";

//This code here will call the function of the trigonometry.h

    double A = sin( opposite,  hypotenuse,  adjacent);
    double B = cos( opposite,  hypotenuse,  adjacent);
    double C = tan( opposite,  hypotenuse,  adjacent);
    double D = csc( opposite,  hypotenuse,  adjacent);
    double E = sec( opposite,  hypotenuse,  adjacent);
    double F = cot( opposite,  hypotenuse,  adjacent);

//This will display the output

    std::cout << "Sine: " << A << '\n';
    std::cout << "Cosine: " << B << '\n';
    std::cout << "Tangent: " << C << '\n';
    std::cout << "Cosecant: " << D << '\n';
    std::cout << "Secant: " << E << '\n';
    std::cout << "Cotangent: " << F << '\n';

//Prompt the user if he/she wants to perform another calculation in the above choices
    std::cout << "Do you want to perform another calculation? (Y / N): ";
    std::cin >> another_calculation;

    system("cls");
    std:: cout << "\n";

       if(another_calculation == 'Y' || another_calculation == 'y'){
        continue;
    }
    else{
    // Will display this if the user type N or n
        std::cout << "Thank You!";
        break;
    }
    }while(true);

    return 0;

}

