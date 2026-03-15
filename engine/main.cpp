#include <iostream> 

int main()
{
    int bootTestNumber;

    std::cout << "Enter the boot test number: ";
    std::cin >> bootTestNumber;

    if(bootTestNumber == 1){
        std::cout << "Boot test succeeded!" << "\n";
    }
    else if(bootTestNumber > 1 || bootTestNumber < 0){
        std::cout << "Boot number entered is invalid." << "\n";
    }
    else{
        std::cout << "Boot test failed." << "\n";
    }
    return 0;
}