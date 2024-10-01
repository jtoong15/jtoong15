#include <iostream>

int main(){

    int n;

    std::cout << "Enter the value of N: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = n; j > 0; j--){
            if(i >= j){
                std::cout << "*  " << " ";
            }
            else{
                std::cout << " " << " ";
            }

        }
        std::cout << "\n";

    }
    for(int i = 1; i <= n - 1; i++){
        for(int j = n - 1; j > 0; j--){
            if(i + j <= n){
                std::cout << "  *" << " ";
            }
            else{
                std::cout << " " << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}
