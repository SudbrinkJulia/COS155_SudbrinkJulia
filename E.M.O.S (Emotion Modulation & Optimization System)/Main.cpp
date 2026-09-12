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
        std::cin >> choice;

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
        }
        else {
            std::cout << "\nInvalid option.\n\n";
        }
    }

    return 0;
}
