#include <iostream> 

void showMenu()
{
        std::cout << "*****Boot Test Menu*****\n";
        std::cout << "1. Run Boot Test\n";
        std::cout << "2. Exit\n";
        std::cout << "3. Show Engine Version\n";
        std::cout << "************************\n";
        std::cout << "Enter a number: ";
}

void showEngineVersion()
{
    std::cout << '\n';
    std::string engineVersion = "0.0.6";
    std::cout << "Current Engine Version: " << engineVersion << '\n';
}

void bootMenuSequence()
{
    std::string bootMenuText[] = {"Starting boot test...", "Starting engine...", "Booting game layer...", "Test Complete."};
    
    for(int i = 0; i < sizeof(bootMenuText) / sizeof(bootMenuText[0]); i++){
        std::cout << bootMenuText[i] << '\n';
    }
}
int main()
{
    bool running = true;

    int bootTestNumber; 

    while(running){

        showMenu();
        std::cin >> bootTestNumber;

        if(std::cin.fail()){
            std::cout << "Invalid input. Please enter a valid number. \n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }

        else if(bootTestNumber != 1 && bootTestNumber != 2 && bootTestNumber != 3){
        std::cout << "Invalid input. Please enter a valid number. \n";
        }

        else if(bootTestNumber == 1){
        bootMenuSequence();
        }

        else if(bootTestNumber == 2){
        std::cout << "Exiting Boot Test Menu...\n";
        running = false;
        }

        else if(bootTestNumber == 3){
        showEngineVersion();
        }
    }
    return 0;
}