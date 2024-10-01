#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

    struct addr{
        char name[30];
        char street[40];
        char city[20];
        char state[15];
        unsigned long int zip;
     };

int main(){
    addr my_address = {"Struct Function","Atis Drive", "Zamboanga City" , "Philippines", 7000};
    system("cls");

    std::cout << my_address.name << " " << my_address.street << " " << my_address.city << " " << my_address.state << " " << my_address.zip;
    system("cls");

    my_address.zip = 7000;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "\n";
    SetConsoleTextAttribute(h, 1);
    std::cout << strcpy(my_address.name, "Justine A. Toong");
    SetConsoleTextAttribute(h, 14);
    std::cout << " " << my_address.street << " " << my_address.city << " " << my_address.state << " " << my_address.zip;

    return 0;

}
