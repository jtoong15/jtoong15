#include <iostream>
#include <cmath>
int main(){

   //Programming Exercises on Selection Control Structure
   //This program checks if a triangle with given side lengths is a right triangle.
   /*It prompts the user to input the lengths of three sides and then uses the Pythagorean Theorem
                        to determine if it's a right triangle.*/

   double side1;
   double side2;
   double side3;
   
   //Ask the user to enter the lengths of the three sides
   std::cout << "Enter the length of side 1: ";
   std::cin >> side1;

   std::cout << "Enter the length of side 2: ";
   std::cin >> side2;

   std::cout << "Enter the length of side 3: ";
   std::cin >> side3; 

   //Check if it's a right triangle using the Pythagorean Theorem.
    if(pow(side1, 2) == pow(side2, 2) + pow(side3, 2) ||
      pow(side2, 2) == pow(side3, 2) + pow(side1, 2) ||
      pow(side3, 2) == pow(side1, 2) + pow(side2, 2)){

         std::cout << "It's a right triangle" << '\n';
      }
      else{
         std::cout << "It's not a right triangle" << '\n';
      }

   return 0;
}


