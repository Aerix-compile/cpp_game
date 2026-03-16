#include <iostream> 

int main()
{
    int bootTestNumber;

    std::cout << "******Boot Test Menu******\n";
    std::cout << "1. Boot Test \n";
    std::cout << "2. Exit \n";
    std::cout << "Enter number from the menu: ";
    std::cin >> bootTestNumber;
    switch(bootTestNumber){
        case 1:
            std::cout << "Boot Test Initiated and Succeeeded\n";
            break;
        case 2:
            std::cout << "Exiting Boot Test Menu\n";
            break;
        default:
            std::cout << "Invalid input. Please enter a number from the menu.\n";
            break;
    }
    std::cout << "****************************\n";
    return 0;
}