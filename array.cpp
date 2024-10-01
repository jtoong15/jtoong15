#include <iostream>
 int main(){

    const int array = 20;
    int i, numbers[array];
    int unique_numbers[20];
    int count = 0;

    std::cout << "Enter 20 numbers from 10 - 100\n";

    for(i = 0; i < array; i++){
        std::cout << i + 1 << ". ";
        std::cin >> numbers[i];

        if(numbers[i] < 10 || numbers[i] > 100){
            std::cout << "Please enter only from 10 - 100: \n";
            std::cin >> numbers[i];
            continue;
        }
    }

    for(i = 0; i < array; i++){
        bool duplicate = true;
        numbers[i] = numbers[i]; 

        for(int j = 0; j < count + 1; j++){
            if(numbers[i] == unique_numbers[j]){
                duplicate = false;
                break;
            }
        }
        if(duplicate){
            unique_numbers[count] = numbers[i];
            count++;
        }
    }
    std::cout << "Unique numbers: ";
    for(i = 0; i < count; ++i){
        std::cout << unique_numbers[i] << ' ';
    }

    return 0;
 }
