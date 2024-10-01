

/*This program will compute for C of the Pythagorean Theorem model.*/
/*Note!. It will calculate only the value of C and not the C^2 */

#include <iostream>
#include <math.h> // or use the cmath library it's pretty much the same
#include <cmath>

int main(){
do{
    double A;
    double B;
    double C;
    double C_to_the_power_of_2;
    char choice;
//Prompt the user to enter the value of A and B
    std::cout << "Enter the Value of A: ";
    std::cin >> A;
    
    std::cout << "Enter the Value of B: ";
    std::cin >> B;

//Formula to get the value of C 
    C = sqrt(pow(A, 2) + pow(B, 2));
    
    std::cout << "a² + b² = c²" << '\n';
    std::cout << "The Value of C is: " << C << '\n';

//Additional formula just to make the code clear of where did the value of C came.
    C_to_the_power_of_2 = pow(A, 2) + pow(B, 2);
    
    std::cout << "The Value of C^2 is: " << C_to_the_power_of_2 << '\n';

//Prompt the if he/she wants to make another calculation    
    std::cout << "Do you want to make another calculation?: ";
    std::cin >> choice;

    system("cls");
    
    if(choice == 'Y' || choice == 'y'){
        continue;
    }
    else{
        break;
    }
}while(true);

return 0;
}
