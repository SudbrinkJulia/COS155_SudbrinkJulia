#include <iostream>
#include "SystemCore.h"
#include "Menu.h"

int main() {
    std::cout << "=====================================\n";
    std::cout << "   E.M.O.S - Emotion Monitoring OS   \n";
    std::cout << "=====================================\n\n";

    SystemCore core;
    Menu menu;

    bool running = true;

    while (running) {
        menu.showMainMenu();

        int choice;

        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');

            std::cout << "\nInvalid input. Please enter a number.\n\n";
            continue;
        }

        if (choice == 1) {
            core.provideStimulus();
        }
        else if (choice == 2) {
            core.viewState();
        }
        else if (choice == 3) {
            core.runCycle();
        }
        else if (choice == 4) {
            core.runDiagnostics();
        }
        else if (choice == 5) {
            running = false;
            std::cout << "\nShutting down E.M.O.S...\n";
        }
        else {
            std::cout << "\nInvalid option. Please select a number between 1 and 5.\n\n";
        }
    }

    return 0;
}