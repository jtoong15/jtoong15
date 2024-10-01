#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

void create();
void view();
void update(std::string search);
void del(std::string search);

const int SIZE = 100;

std::string student_id[SIZE] = {};
std::string student_name[SIZE] = {};
std::string student_college[SIZE] = {};
std::string student_dept[SIZE] = {};
std::string student_course[SIZE] = {};
std::string student_gpa[SIZE] = {};

int main(){
    int choice;
    std::string new_student_id;
    
    do{
        std::cout << "===================================== \n";
        std::cout << "STUDENT MANAGEMENT SYSTEM\n";
        std::cout << "===================================== \n";
        std::cout << "[1] Create Student" << "\n";
        std::cout << "[2] View Student" << "\n";
        std::cout << "[3] Update Student" << "\n";
        std::cout << "[4] Delete Student" << "\n";
        std::cout << "[5] Exit" << "\n";
        std::cout << "===================================== \n";
        std::cout << "Select Choice #: ";
        std::cin >> choice;

        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n'); 
            std::cout << "You entered an Invalid Choice...Please enter only (1 - 5): ";
            std::cin >> choice;
            std::cout << "\n";
        }

        system("cls");

        switch(choice){
            case 1:
                create();
                system("cls");
                break;
            case 2:
                view();
                break;
            case 3:
                std::cout << "Search ID you want to Update: ";
                std::cin >> new_student_id;
                update(new_student_id);
                break;
            case 4:
                std::cout << "Search ID you want to Delete: ";
                std::cin >> new_student_id;
                del(new_student_id);
                break;
            case 5:
                std::cout << "        THANK YOU       ";
                exit(0);
            default:
                std::cout << "You entered an Invalid Choice...Please enter only (1 - 5)\n\n";
                break;
        }
    }while(true);

    return 0;
}
void create(){
    char student_ID[100];
    char name[100];
    char college[100];
    char department[100];
    char course[100];
    char gpa[100];

    std::cin.ignore();
    std::cout << "Enter Student ID: ";
    std::cin.getline(student_ID, 100);

    std::cout << "Enter Student's Name: ";
    std::cin.getline(name, 100);

    std::cout << "Enter Student's College: ";
    std::cin.getline(college, 100);

    std::cout << "Enter Student's Department: ";
    std::cin.getline(department, 100);
   
    std::cout << "Enter Student's Course: ";
    std::cin.getline(course, 100);

    std::cout << "Enter Student's GPA: ";
    std::cin.getline(gpa, 100);
    
    for(int i = 0; i <  SIZE; i++){
        if(student_id[i] == "\0"){
            student_id[i] = student_ID;
            student_name[i] = name;
            student_college[i] = college;
            student_dept[i] = department;
            student_course[i] = course;
            student_gpa[i] = gpa;
            break;
        }
    }
    std::cout << "Student Successfully  Created!" << "\n";
}
void view(){
    system("cls");
    std::cout << "STUDENT RECORD(S)\n";
    std::cout << "===================================== \n";

    int num = 0;
    
    for(int i = 0; i < SIZE; i++){
        if(student_id[i] != "\0"){
            num++;
            std::cout << "Student ID: " << student_id[i] << "\n";
            std::cout << "Name: " << student_name[i] << "\n";
            std::cout << "College: " << student_college[i] << "\n";
            std::cout << "Department: " << student_dept[i] << "\n";
            std::cout << "Course: " << student_course[i] << "\n";
            std::cout << "GPA: " << student_gpa[i] << "\n";
            std::cout << "\n";
        }
    }
    if(num == 0){
        std::cout << "\n";
        std::cout << "\n===================================== \n";
        std::cout << "No Record Found...\n";
    }
    std::cout << "===================================== \n";

}
void update(std::string search){
    char student_ID[100];
    char name[100];
    char college[100];
    char department[100];
    char course[100];
    char gpa[100];

    int num = 0;
    
    for(int i = 0; i < SIZE; i++){
        if(student_id[i] == search){
            num++;
            std::cin.ignore();
            std::cout << "Enter New Student ID: ";
            std::cin.getline(student_ID, 100);

            std::cout << "Enter New Student's Name: ";
            std::cin.getline(name, 100);

            std::cout << "Enter New Student's College: ";
            std::cin.getline(college, 100);

            std::cout << "Enter New Student's Department: ";
            std::cin.getline(department, 100);
        
            std::cout << "Enter New Student's Course: ";
            std::cin.getline(course, 100);

            std::cout << "Enter New Student's GPA: ";
            std::cin.getline(gpa, 100);

            student_id[i] = student_ID;
            student_name[i] = name;
            student_college[i] = college;
            student_dept[i] = department;
            student_course[i] = course;
            student_gpa[i] = gpa;

            std::cout << "\nUpdate Successful..." << "\n";
            break;
        }
    }
    if(num == 0){
        std::cout << "\n===================================== \n";
        std::cout << "ID Does not Exist..." << "\n";
    }
    std::cout << "===================================== \n";
}
void del(std::string search){
    int num = 0;

    for(int i = 0; i < SIZE; i++){
        if(student_id[i] == search){
            num++;
            student_id[i] = "";
            student_name[i] = "";
            student_college[i] = "";
            student_dept[i] = "";
            student_course[i] = "";
            student_gpa[i] = "";

            std::cout << "\nDeleted Successfully..." << "\n";
            break;
        }
    }
    if(num == 0){
        std::cout << "\n===================================== \n";
        std::cout << "ID Does not Exist..." << "\n";
    }
    std::cout << "===================================== \n";
}

