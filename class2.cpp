#include <iostream>
#include <string>

class Subject{
    public:
        std::string code;
        std::string title;
        float lec;
        float lab;
        bool status;

        void subjects(std::string sub_code, std::string sub_title, float lecture, float laboratory, bool sub_status){
            code = sub_code; title = sub_title; lec = lecture; lab = laboratory; status = sub_status; 
        };

        void display(){
            std::cout << "********************************\n";
            std::cout << "Subject Code: " << code << "\n";
            std::cout << "Subject Title: " << title << "\n";
            std::cout << "Lecture Unit: " << lec << "\n";
            std::cout << "Lab Unit: " << lab << "\n";
            if(status == true){
                std::cout << "Status: " << "Open (True)" << "\n";
            }
            else{
                std::cout << "Status: " << "Closed (False)" << "\n";
            }
            std::cout << "********************************" << "\n\n";
        };
        void create(){
            std::cout << "\nSubject " << code << " has been created.\n\n";
        }
        void open(){
            std::cout << "\nThe Status of the Subject is now Open\n\n";
            status = true;
        }
        void close(){
            std::cout << "\nThe Status of the Subject is now Closed\n\n";
            status = false;
        }

};
 int main(){
    Subject subj1, subj2, subj3;
    int subject_choice;
    char choice;

    subj1.subjects("CSST112", "Computer Programming 2", 3, 2, true);
    subj2.subjects("NSTP1", "Outreach", 1.5, 0, true);
    subj3.subjects("Math 001", "Math Plus", 5, 0, false);
    do{
        std::cout << "********************************\n";
        std::cout << "[1] Subject 1" << "\n";
        std::cout << "[2] Subject 2" << "\n";
        std::cout << "[3] Subject 3" << "\n";
        std::cout << "********************************\n";
        std::cout << "Choice: ";
        std::cin >> subject_choice;
        system("cls");
        do{
            char another_choice;
            std::cout << "A. Display | B. Create | C. Open | D. Close" <<"\n";
            std::cout << "What Would You like to do?: ";
            std::cin >> choice;
            
            choice = toupper(choice);
            switch(subject_choice){
                case 1:
                    switch(choice){
                        case 'A':
                            subj1.display();
                            break;
                        case 'B':
                            subj1.create();
                            break;
                        case 'C':
                            subj1.open();
                            break;
                        case 'D':
                            subj1.close();
                            break;
                    }
                    break;
                case 2:
                    switch(choice){
                        case 'A':
                            subj2.display();
                            break;
                        case 'B':
                            subj2.create();
                            break;
                        case 'C':
                            subj2.open();
                            break;
                        case 'D':
                            subj2.close();
                            break;
                    }
                    break;
                case 3:
                    switch(choice){
                        case 'A':
                            subj3.display();
                            break;
                        case 'B':
                            subj3.create();
                            break;
                        case 'C':
                            subj3.open();
                            break;
                        case 'D':
                            subj3.close();
                            break;
                    }
                    break;
            }
            std::cout << "Do you want to choose another?: (Y / N): ";
            std::cin >> another_choice;

            system("cls");
            another_choice = tolower(another_choice);
            if(another_choice == 'Y' || another_choice == 'y'){
                continue;
            }
            else{
                break;
            }
            
        }while(true);
        char main_choice;
        std::cout << "Do you want to check the other subjects?: (Y / N): ";
        std::cin >> main_choice;

        system("cls");
            
        if(main_choice == 'Y' || main_choice == 'y'){
            continue;
        }
        else{
            break;
        }
    }while(true);

    return 0;
 }

