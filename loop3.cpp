#include <iostream>

int main(){

    int rows;
    int num = 1;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            std::cout << num << " ";
            num++;
        }
        std::cout << '\n';
    }

    return 0;
}
