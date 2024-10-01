
#include <iostream>
#include <string>

class customer_profle{
  public: 
    std::string full_name;
    int card_number;
    std::string date_created;
    std::string exp_date;
    
    void customer_info(){
      std::cout << "\n***** CUSTOMER INFORMATION *****\n";

      std::cout << "Enter your Full Name: ";
      std::getline(std::cin, full_name);

      std::cout << "Enter your Card Code: ";
      std::cin >> card_number;

      std::cout << "Date Created (MM / DD / YY): ";
      std::cin.ignore();
      std::getline(std::cin, date_created);

      std::cout << "Expiration Date (MM / DD / YY): ";
      std::cin.ignore();
      std::getline(std::cin, exp_date);
    }

    void display(){
      std::cout << "\n***** CUSTOMER INFORMATION *****\n";

      std::cout << "Full Name: "<< full_name << "\n";
      std::cout << "Card Code: " << card_number << "\n";
      std::cout << "Date Created: " << date_created << "\n";
      std::cout << "Expiration Date: " << exp_date << "\n";
    }

};

int main(){
  customer_profle customers;
  do{

    customers.customer_info();
    customers.display();

    char choice;
    std::cout <<  "\nDo you want to change the information? (Y / N): ";
    std::cin >> choice;

    choice = tolower(choice);
    if(choice == 'y'){
      system("cls");
      std::cin.ignore();
      continue;
    }
    else if(choice == 'n'){
      system("cls");
      std::cout << "Thank You....";
      break;
    }
    else{
      std::cout << "Invalid Choice!\n";
      std::cout << "Please Enter in Only (Y / N)...: ";
      std::cin >> choice;
      std::cin.ignore();
      system("cls");
    }
  }while(true);
  

  return 0;
}
