#include <iostream>

int main(){

    int number;
    /*This C++ program asks the user to a positive number repeatedly
         until a non-negative number is provided*/
    do{
        std::cout << "Enter a positive number #: ";
        std::cin >> number;
    }while(number < 0);
    std::cout << "The # is: " << number; //Prints the non-negative number provided

    return 0; //The program returns 0 to indicate successful execution
}

