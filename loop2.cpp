#include <iostream>

int main(){
    int num1;
    int num2;
    int gcd;
    
    std::cout << "Enter num 1: ";
    std::cin >> num1;

    std::cout << "Enter num 2: ";
    std::cin >> num2;

    do{
         if(num1 > num2){
            num1 -= num2;
        }
        else{
            num2 -= num1;
        }

    }while(num1 != num2);

    gcd = num1, num2;
    std::cout << "The GCD of the  two numbers is: " << gcd << '\n';;
       
    
    return 0;
}
