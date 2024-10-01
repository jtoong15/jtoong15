#include <iostream>

int main(){
std::string name;
    //This program prompts the user to enter their name until a non-empty name is provided
    //To force the user to do something in order to continue the rest of the program
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    return 0; //The program returns 0 to indicate successful execution
}
