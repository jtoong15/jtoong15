#include <iostream>
#include <iomanip>

int main(){
    const int num_salesperson = 4;
    const int num_products = 5;
    int sales[num_salesperson][num_products];
    int Total[num_products] = {0};
    
    int salesperson;
    int product;
    
    
    
    for(int i = 0; i < num_salesperson; i++){
        std::cout << "Salesperson #: " << i + 1 << '\n';
            for(int p = 0; p < num_products; p++){
                std::cout << "The product number # " << p + 1 << ": ";
                std::cin >> sales[i][p];
                Total[p] += sales[i][p];
            }
            std::cout << '\n';  
    }

    std::cout << '\n';
    
    std::cout << std::setw(15) << "Salesperson #";
  
    for(int p = 0; p < num_products; p++) {
        std::cout << std::setw(15) << "Product " << p + 1;
      
    }
    std::cout << std::setw(15) << "TOTAL" << '\n';
   
    for(int i = 0; i < num_salesperson; i++){
        int total_value = 0;
        std::cout << std::setw(15) << i + 1;
        for(int p = 0; p < num_products; p++) {
            std::cout << std::setw(15) << sales[i][p];
            total_value += sales[i][p];
        }
        std::cout << std::setw(15) << total_value << '\n';
    }

    std::cout << std::setw(15) << "Total";
    for(int p = 0; p < num_products; p++) {
        std::cout << std::setw(15) << Total[p];
        
    }
    std::cout << '\n';
    
    
    
return 0;
}

