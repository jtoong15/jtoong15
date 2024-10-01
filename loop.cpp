#include <iostream>

int main(){

    int num;
    int i;

    std::cout << "Enter a number to check: ";
    std::cin >> num;

    for(i = 2; i < num; i++){
        if(num % i == 0){
            break;
        }
    }

        if(num == i){
            std::cout << num << " is a prime number!";
        }
        else{
            std::cout << num << " is not a prime number!";
        }
    
   
    return 0;
}
