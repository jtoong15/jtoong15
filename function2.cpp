#include <iostream>
#include <cmath>

double mean(int x1, int x2, int x3, int x4, int x5);
double standard_deviation(int x1, int x2, int x3, int x4, int x5);

int main() {
    int x1;
    int x2;
    int x3;
    int x4;
    int x5;
    double x; // for mean
    double s; // for standard deviation
    
// Prompt the user to enter the values of the five numbers
    std::cout << "Enter number 1: ";
    std::cin >> x1;

    std::cout << "Enter number 2: ";
    std::cin >> x2;

    std::cout << "Enter number 3: ";
    std::cin >> x3;

    std::cout << "Enter number 4: ";
    std::cin >> x4;

    std::cout << "Enter number 5: ";
    std::cin >> x5;

// Will display the output for mean
    x = mean(x1, x2, x3, x4, x5);
    std::cout << "Mean is: " << x << '\n';
// Will display the output for standard deviation
    s = standard_deviation(x1, x2, x3, x4, x5);
    std::cout << "Standard Deviation is: " << s << '\n';
    return 0;
}
// Function for Mean
double mean(int x1, int x2, int x3, int x4, int x5){
    return (x1 + x2 + x3 + x4 + x5) / 5; // formula for mean
}
// Function for Standard Deviation
double standard_deviation(int x1, int x2, int x3, int x4, int x5){
    // formula for standard deviation
    int x = (x1 + x2 + x3 + x4 + x5) / 5;
    return sqrt(pow(x1 - x, 2) + (pow(x2 - x, 2) + (pow(x3 - x, 2) + (pow(x4 - x, 2) + (pow(x5 - x, 2)))))) / 5;
}

