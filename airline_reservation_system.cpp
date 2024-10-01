#include <iostream>

    const int seats_capacity = 10;
    bool seats[seats_capacity] = {false};
    
    int choice;

    void menu_of_alternatives();
    void sections(int choice);
int main(){
     
do{

    menu_of_alternatives();
    sections(choice);

}while(true);

    return 0;
}
void menu_of_alternatives(){
    std::cout << '\n';
    std::cout << "******************** Airline Reservation System *********************\n";
    std::cout << "Please choose in the Menu: (1) - 'First Class' , (2) - 'Economy Class': ";
    std::cin >> choice;
    std::cout << "******************** *************************** *********************\n";
    std::cout << '\n';
}
void sections(int choice){
  int seatnumber;
    if(choice == 1){
        for( seatnumber = 0; seatnumber <= 5; ++seatnumber){
            if(!seats[seatnumber]){
                seats[seatnumber] = true;
                break;
            }
        }
        if(seatnumber == 5){
            std::cout << "Sorry no more seats available in this section.\n";
            std::cout << "Do you like to be in another section? (1 for Yes, 0 for No): ";
            int choice_economy;
            std::cin >> choice_economy;
            std::cout << "\n";
            
            if(choice_economy == 1){
                choice = 2;
            }
            else{
                std::cout << "Next flight leaves in 3 hours.\n";
                exit(0);
            }
        }
    }
    else if(choice == 2){
        for(seatnumber = 5; seatnumber <= seats_capacity; ++seatnumber){
            if(!seats[seatnumber]){
                seats[seatnumber] = true;
                break;
            }
        }
        if(seatnumber == seats_capacity){
            std::cout << "Sorry no more seats available in this section.\n";
            std::cout << "Do you like to be in another section? (1 for Yes, 0 for No): ";
            int choice_firstclass;
            std::cin >> choice_firstclass;
            std::cout << "\n";
           
            if(choice_firstclass == 1){
                choice = 1;
            }
            else{
                std::cout << "Next flight leaves in 3 hours.\n";
                exit(0); 
            }
        }
    }
    std::cout << "/Boarding Pass/" << '\n';
    std::cout << "Seat Number: " << seatnumber + 1 << '\n';
    
    //std::cout << ((choice == 1) ? "First Class" : "Economy") << " section.\n";
    if(seatnumber <= 4){
        std::cout << "Section: " << "First Class" << '\n';
    }
    else if(seatnumber == 6 && seatnumber <= 9){
            std::cout << "Section: " << "Economy Class" << '\n';
        } 
    std::cout << '\n';
}

