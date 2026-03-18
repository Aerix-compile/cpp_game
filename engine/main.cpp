#include <iostream> 

int main()
{
    bool running = true;
    int bootTestNumber;

    while(running){
        std::cout << "*****Boot Test Menu*****\n";
        std::cout << "1. Run Boot Test\n";
        std::cout << "2. Exit\n";
        std::cout << "************************\n";
        std::cout << "Enter a number: \n";
        std::cin >> bootTestNumber;

        if(std::cin.fail()){
            std::cout << "Invalid input. Please enter a valid number. \n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }

        else if(bootTestNumber != 1 && bootTestNumber != 2){
        std::cout << "Invalid input. Please enter a valid number. \n";
        }

        else if(bootTestNumber == 1){
            std::cout << "Boot Test Successful.\n";
        }

        else if(bootTestNumber == 2){
        std::cout << "Exiting Boot Test Menu...\n";
        running = false;
        }
    }
    return 0;
}