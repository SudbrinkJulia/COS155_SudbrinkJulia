#include <iostream>
#include <string>
#include <stdexcept>
#include "SystemCore.h"
#include "Menu.h"

// main() is the starting point of the E.M.O.S. program.
// It creates the main objects, displays the menu,
// receives the user's input, and sends each choice
// to the correct SystemCore function.

int main() {

    // Display the E.M.O.S. title when the program starts.
    std::cout << "============================================================\n";
    std::cout << "   E.M.O.S. - Emotion Modulation & Optimization System\n";
    std::cout << "============================================================\n\n";

    // Create the main system controller and menu objects.
    SystemCore core;
    Menu menu;

    // Keeps the program running until the user chooses Exit.
    bool running = true;

    while (running) {

        // Display the menu options.
        menu.showMainMenu();

        // Store the user's input as text first.
        // This allows me to check whether the entire input is valid.
        std::string input;

        try {
            std::cin >> input;

            // Convert the text input into a number.
            size_t pos;
            int choice = std::stoi(input, &pos);

            // Make sure the entire input was a number.
            // For example, "2abc" is rejected instead of becoming 2.
            if (pos != input.length()) {
                throw std::invalid_argument("Invalid input");
            }

            // Send each menu choice to the correct SystemCore function.
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
                // Stop the loop and shut down the program.
                running = false;
                std::cout << "\nShutting down E.M.O.S...\n";
            }
            else {
                // Handle numbers that are outside the menu options.
                std::cout << "\nInvalid option. Please select a number between 1 and 7.\n\n";
            }
        }
        catch (const std::exception&) {
            // Handle input that is not a valid number.
            std::cout << "\nInvalid input. Please enter a number.\n\n";
        }
    }

    return 0;
}