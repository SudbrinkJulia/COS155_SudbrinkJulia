#include <iostream>
#include "SystemCore.h"
#include "Menu.h"

int main() {
    std::cout << "=====================================\n";
    std::cout << "   E.M.O.S - Emotion Monitoring OS   \n";
    std::cout << "=====================================\n\n";

    SystemCore core;   // SystemCore object
    Menu menu;         // Menu object

    bool running = true;

    while (running) {
        menu.showMainMenu();   // print menu options

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            core.runDiagnostics();
        }
        else if (choice == 2) {
            running = false;
        }
        else {
            std::cout << "\nInvalid option.\n\n";
        }
    }

    return 0;
}
