#include <iostream>
#include <string>
#include "SystemCore.h"
#include "Menu.h"

int main() {
    std::cout << "============================================================\n";
    std::cout << "   E.M.O.S. - Emotion Modulation & Optimization System\n";
    std::cout << "============================================================\n\n";

    SystemCore core;
    Menu menu;

    bool running = true;

    while (running) {
        menu.showMainMenu();

        std::string input;

        try {
            std::cin >> input;

            int choice = std::stoi(input);

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
                core.viewLogs();
            }
            else if (choice == 6) {
                core.runAscensionTrial();
            }
            else if (choice == 7) {
                running = false;
                std::cout << "\nShutting down E.M.O.S...\n";
            }
            else {
                std::cout << "\nInvalid option. Please select a number between 1 and 7.\n\n";
            }
        }
        catch (const std::exception&) {
            std::cout << "\nInvalid input. Please enter a number.\n\n";
        }
    }

    return 0;
}